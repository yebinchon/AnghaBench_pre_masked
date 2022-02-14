
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; unsigned char const* iobuf; int iobuflen; int asn1_len; int max_resp_len; int mem; int io; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,unsigned char const**) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,unsigned char const*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (unsigned char const*,char,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(OCSP_REQ_CTX *VAR_3)
{
    int VAR_4, VAR_5;
    const unsigned char *VAR_6;
 next_io:
    if (!(VAR_3->state & VAR_0)) {
        VAR_5 = FUNC_3(VAR_3->io, VAR_3->iobuf, VAR_3->iobuflen);

        if (VAR_5 <= 0) {
            if (FUNC_5(VAR_3->io))
                return -1;
            return 0;
        }



        if (FUNC_6(VAR_3->mem, VAR_3->iobuf, VAR_5) != VAR_5)
            return 0;
    }

    switch (VAR_3->state) {
    case 128:

        if (FUNC_6(VAR_3->mem, "\r\n", 2) != 2) {
            VAR_3->state = 131;
            return 0;
        }
        VAR_3->state = 133;


    case 133:
        VAR_3->asn1_len = FUNC_1(VAR_3->mem, ((void*)0));
        VAR_3->state = 134;


    case 134:
        VAR_5 = FUNC_1(VAR_3->mem, &VAR_6);

        VAR_4 = FUNC_6(VAR_3->io, VAR_6 + (VAR_5 - VAR_3->asn1_len), VAR_3->asn1_len);

        if (VAR_4 <= 0) {
            if (FUNC_5(VAR_3->io))
                return -1;
            VAR_3->state = 131;
            return 0;
        }

        VAR_3->asn1_len -= VAR_4;

        if (VAR_3->asn1_len > 0)
            goto next_io;

        VAR_3->state = 136;

        (void)FUNC_4(VAR_3->mem);


    case 136:

        VAR_4 = FUNC_0(VAR_3->io);

        if (VAR_4 > 0) {
            VAR_3->state = 130;
            goto next_io;
        }

        if (FUNC_5(VAR_3->io))
            return -1;

        VAR_3->state = 131;
        return 0;

    case 131:
        return 0;

    case 130:
    case 129:



 next_line:





        VAR_5 = FUNC_1(VAR_3->mem, &VAR_6);
        if ((VAR_5 <= 0) || !FUNC_7(VAR_6, '\n', VAR_5)) {
            if (VAR_5 >= VAR_3->iobuflen) {
                VAR_3->state = 131;
                return 0;
            }
            goto next_io;
        }
        VAR_5 = FUNC_2(VAR_3->mem, (char *)VAR_3->iobuf, VAR_3->iobuflen);

        if (VAR_5 <= 0) {
            if (FUNC_5(VAR_3->mem))
                goto next_io;
            VAR_3->state = 131;
            return 0;
        }


        if (VAR_5 == VAR_3->iobuflen) {
            VAR_3->state = 131;
            return 0;
        }


        if (VAR_3->state == 130) {
            if (FUNC_8((char *)VAR_3->iobuf)) {
                VAR_3->state = 129;
                goto next_line;
            } else {
                VAR_3->state = 131;
                return 0;
            }
        } else {

            for (VAR_6 = VAR_3->iobuf; *VAR_6; VAR_6++) {
                if ((*VAR_6 != '\r') && (*VAR_6 != '\n'))
                    break;
            }
            if (*VAR_6)
                goto next_line;

            VAR_3->state = 135;

        }



    case 135:





        VAR_5 = FUNC_1(VAR_3->mem, &VAR_6);
        if (VAR_5 < 2)
            goto next_io;


        if (*VAR_6++ != (VAR_2 | VAR_1)) {
            VAR_3->state = 131;
            return 0;
        }


        if (*VAR_6 & 0x80) {




            if (VAR_5 < 6)
                goto next_io;
            VAR_5 = *VAR_6 & 0x7F;

            if (!VAR_5 || (VAR_5 > 4)) {
                VAR_3->state = 131;
                return 0;
            }
            VAR_6++;
            VAR_3->asn1_len = 0;
            for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
                VAR_3->asn1_len <<= 8;
                VAR_3->asn1_len |= *VAR_6++;
            }

            if (VAR_3->asn1_len > VAR_3->max_resp_len) {
                VAR_3->state = 131;
                return 0;
            }

            VAR_3->asn1_len += VAR_5 + 2;
        } else
            VAR_3->asn1_len = *VAR_6 + 2;

        VAR_3->state = 137;



    case 137:
        VAR_5 = FUNC_1(VAR_3->mem, ((void*)0));
        if (VAR_5 < (int)VAR_3->asn1_len)
            goto next_io;

        VAR_3->state = 132;
        return 1;

    case 132:
        return 1;

    }

    return 0;

}
