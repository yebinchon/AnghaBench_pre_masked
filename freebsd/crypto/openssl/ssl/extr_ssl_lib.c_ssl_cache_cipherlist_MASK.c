
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* s3; } ;
struct TYPE_6__ {unsigned char* ciphers_raw; scalar_t__ ciphers_rawlen; } ;
struct TYPE_7__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *,unsigned char**,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 size_t VAR_10 ;

int FUNC_8(SSL *VAR_11, PACKET *VAR_12, int VAR_13)
{
    int VAR_14;

    VAR_14 = VAR_13 ? VAR_2 : VAR_10;

    if (FUNC_6(VAR_12) == 0) {
        FUNC_7(VAR_11, VAR_4, VAR_6,
                 VAR_9);
        return 0;
    }

    if (FUNC_6(VAR_12) % VAR_14 != 0) {
        FUNC_7(VAR_11, VAR_3, VAR_6,
                 VAR_8);
        return 0;
    }

    FUNC_0(VAR_11->s3->tmp.ciphers_raw);
    VAR_11->s3->tmp.ciphers_raw = ((void*)0);
    VAR_11->s3->tmp.ciphers_rawlen = 0;

    if (VAR_13) {
        size_t VAR_15 = FUNC_6(VAR_12) / VAR_14;
        PACKET VAR_16 = *VAR_12;
        unsigned int VAR_17;
        unsigned char *VAR_18;
        VAR_18 = FUNC_1(VAR_15 * VAR_10);
        VAR_11->s3->tmp.ciphers_raw = VAR_18;
        if (VAR_18 == ((void*)0)) {
            FUNC_7(VAR_11, VAR_5, VAR_6,
                     VAR_1);
            return 0;
        }
        for (VAR_11->s3->tmp.ciphers_rawlen = 0;
             FUNC_6(&VAR_16) > 0;
             VAR_18 += VAR_10) {
            if (!FUNC_4(&VAR_16, &VAR_17)
                    || (VAR_17 == 0
                        && !FUNC_2(&VAR_16, VAR_18,
                                              VAR_10))
                    || (VAR_17 != 0
                        && !FUNC_3(&VAR_16, VAR_10))) {
                FUNC_7(VAR_11, VAR_3, VAR_6,
                         VAR_7);
                FUNC_0(VAR_11->s3->tmp.ciphers_raw);
                VAR_11->s3->tmp.ciphers_raw = ((void*)0);
                VAR_11->s3->tmp.ciphers_rawlen = 0;
                return 0;
            }
            if (VAR_17 == 0)
                VAR_11->s3->tmp.ciphers_rawlen += VAR_10;
        }
    } else if (!FUNC_5(VAR_12, &VAR_11->s3->tmp.ciphers_raw,
                           &VAR_11->s3->tmp.ciphers_rawlen)) {
        FUNC_7(VAR_11, VAR_5, VAR_6,
                 VAR_0);
        return 0;
    }
    return 1;
}
