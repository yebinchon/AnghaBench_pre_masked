
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* meth; } ;
struct TYPE_7__ {int (* rsa_sign ) (int,unsigned char const*,unsigned int,unsigned char*,unsigned int*,TYPE_2__*) ;} ;
typedef TYPE_2__ RSA ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,unsigned char const*,unsigned char*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 unsigned int VAR_6 ;
 int FUNC_4 (unsigned char**,int*,int,unsigned char const*,unsigned int) ;
 int FUNC_5 (int,unsigned char const*,unsigned int,unsigned char*,unsigned int*,TYPE_2__*) ;

int FUNC_6(int VAR_7, const unsigned char *VAR_8, unsigned int VAR_9,
             unsigned char *VAR_10, unsigned int *VAR_11, RSA *VAR_12)
{
    int VAR_13, VAR_14 = 0, VAR_15 = 0;
    unsigned char *VAR_16 = ((void*)0);
    const unsigned char *VAR_17 = ((void*)0);

    if (VAR_12->meth->rsa_sign) {
        return VAR_12->meth->rsa_sign(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    }


    if (VAR_7 == VAR_0) {





        if (VAR_9 != VAR_6) {
            FUNC_3(VAR_1, VAR_5);
            return 0;
        }
        VAR_14 = VAR_6;
        VAR_17 = VAR_8;
    } else {
        if (!FUNC_4(&VAR_16, &VAR_14, VAR_7, VAR_8, VAR_9))
            goto err;
        VAR_17 = VAR_16;
    }

    if (VAR_14 > FUNC_2(VAR_12) - VAR_3) {
        FUNC_3(VAR_1, VAR_4);
        goto err;
    }
    VAR_13 = FUNC_1(VAR_14, VAR_17, VAR_10, VAR_12,
                                      VAR_2);
    if (VAR_13 <= 0)
        goto err;

    *VAR_11 = VAR_13;
    VAR_15 = 1;

err:
    FUNC_0(VAR_16, (size_t)VAR_14);
    return VAR_15;
}
