
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_5, BIO *VAR_6, unsigned int VAR_7)
{
    unsigned char VAR_8[4096];
    int VAR_9 = 0, VAR_10;
    BIO *VAR_11;

    VAR_11 = FUNC_7(VAR_5, VAR_7);

    if (VAR_11 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_4);
        goto err;
    }


    for (;;) {
        VAR_10 = FUNC_3(VAR_6, VAR_8, sizeof(VAR_8));
        if (VAR_10 <= 0) {
            if (FUNC_2(VAR_6) == VAR_0) {
                if (!FUNC_1(VAR_6))
                    goto err;
            }
            if (VAR_10 < 0)
                goto err;
            break;
        }

        if (VAR_11 && (FUNC_4(VAR_11, VAR_8, VAR_10) != VAR_10))
            goto err;
    }

    if (VAR_7 & VAR_3) {
        if (!FUNC_6(VAR_11, VAR_5)) {
            FUNC_5(VAR_1, VAR_2);
            goto err;
        }
    }

    VAR_9 = 1;

 err:
    if (VAR_11 != VAR_5)
        FUNC_0(VAR_11);
    return VAR_9;

}
