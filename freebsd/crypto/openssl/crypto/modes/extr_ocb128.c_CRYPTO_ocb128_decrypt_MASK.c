
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_11__ {int* c; } ;
struct TYPE_10__ {size_t blocks_processed; TYPE_2__ checksum; TYPE_2__ offset; } ;
struct TYPE_12__ {TYPE_1__ sess; int keyenc; int (* encrypt ) (int*,unsigned char*,int ) ;TYPE_2__ l_star; int keydec; int (* decrypt ) (unsigned char*,unsigned char*,int ) ;scalar_t__ l; int (* stream ) (unsigned char const*,unsigned char*,size_t,int ,size_t,int*,unsigned char const**,int*) ;} ;
typedef TYPE_2__ OCB_BLOCK ;
typedef TYPE_3__ OCB128_CONTEXT ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (unsigned char const*,unsigned char*,size_t,unsigned char*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,size_t) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (unsigned char const*,unsigned char*,size_t,int ,size_t,int*,unsigned char const**,int*) ;
 int FUNC_7 (unsigned char*,unsigned char*,int ) ;
 int FUNC_8 (int*,unsigned char*,int ) ;

int FUNC_9(OCB128_CONTEXT *VAR_0,
                          const unsigned char *VAR_1, unsigned char *VAR_2,
                          size_t VAR_3)
{
    u64 VAR_4, VAR_5;
    size_t VAR_6, VAR_7;





    VAR_6 = VAR_3 / 16;
    VAR_5 = VAR_6 + VAR_0->sess.blocks_processed;

    if (VAR_6 && VAR_5 == (size_t)VAR_5
        && VAR_0->stream != ((void*)0)) {
        size_t VAR_8 = 0, VAR_9 = (size_t)VAR_5;





        while (VAR_9 >>= 1)
            VAR_8++;
        if (FUNC_4(VAR_0, VAR_8) == ((void*)0))
            return 0;

        VAR_0->stream(VAR_1, VAR_2, VAR_6, VAR_0->keydec,
                    (size_t)VAR_0->sess.blocks_processed + 1, VAR_0->sess.offset.c,
                    (const unsigned char (*)[16])VAR_0->l, VAR_0->sess.checksum.c);
    } else {
        OCB_BLOCK VAR_10;


        for (VAR_4 = VAR_0->sess.blocks_processed + 1; VAR_4 <= VAR_5; VAR_4++) {


            OCB_BLOCK *VAR_11 = FUNC_4(VAR_0, FUNC_5(VAR_4));
            if (VAR_11 == ((void*)0))
                return 0;
            FUNC_2(&VAR_0->sess.offset, VAR_11, &VAR_0->sess.offset);

            FUNC_0(VAR_10.c, VAR_1, 16);
            VAR_1 += 16;


            FUNC_2(&VAR_0->sess.offset, &VAR_10, &VAR_10);
            VAR_0->decrypt(VAR_10.c, VAR_10.c, VAR_0->keydec);
            FUNC_2(&VAR_0->sess.offset, &VAR_10, &VAR_10);


            FUNC_2(&VAR_10, &VAR_0->sess.checksum, &VAR_0->sess.checksum);

            FUNC_0(VAR_2, VAR_10.c, 16);
            VAR_2 += 16;
        }
    }





    VAR_7 = VAR_3 % 16;

    if (VAR_7 > 0) {
        OCB_BLOCK VAR_12;


        FUNC_2(&VAR_0->sess.offset, &VAR_0->l_star, &VAR_0->sess.offset);


        VAR_0->encrypt(VAR_0->sess.offset.c, VAR_12.c, VAR_0->keyenc);


        FUNC_3(VAR_1, VAR_12.c, VAR_7, VAR_2);


        FUNC_1(VAR_12.c, 0, 16);
        FUNC_0(VAR_12.c, VAR_2, VAR_7);
        VAR_12.c[VAR_7] = 0x80;
        FUNC_2(&VAR_12, &VAR_0->sess.checksum, &VAR_0->sess.checksum);
    }

    VAR_0->sess.blocks_processed = VAR_5;

    return 1;
}
