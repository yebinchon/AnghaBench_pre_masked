
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static BIGNUM *FUNC_7(BIGNUM *VAR_0, BIGNUM *VAR_1)
{
    BIGNUM *VAR_2;
    int VAR_3 = 0;

    FUNC_6(VAR_0);
    FUNC_6(VAR_1);


    while (!FUNC_2(VAR_1)) {


        if (FUNC_1(VAR_0)) {
            if (FUNC_1(VAR_1)) {
                if (!FUNC_5(VAR_0, VAR_0, VAR_1))
                    goto err;
                if (!FUNC_4(VAR_0, VAR_0))
                    goto err;
                if (FUNC_0(VAR_0, VAR_1) < 0) {
                    VAR_2 = VAR_0;
                    VAR_0 = VAR_1;
                    VAR_1 = VAR_2;
                }
            } else {

                if (!FUNC_4(VAR_1, VAR_1))
                    goto err;
                if (FUNC_0(VAR_0, VAR_1) < 0) {
                    VAR_2 = VAR_0;
                    VAR_0 = VAR_1;
                    VAR_1 = VAR_2;
                }
            }
        } else {

            if (FUNC_1(VAR_1)) {
                if (!FUNC_4(VAR_0, VAR_0))
                    goto err;
                if (FUNC_0(VAR_0, VAR_1) < 0) {
                    VAR_2 = VAR_0;
                    VAR_0 = VAR_1;
                    VAR_1 = VAR_2;
                }
            } else {

                if (!FUNC_4(VAR_0, VAR_0))
                    goto err;
                if (!FUNC_4(VAR_1, VAR_1))
                    goto err;
                VAR_3++;
            }
        }

    }

    if (VAR_3) {
        if (!FUNC_3(VAR_0, VAR_0, VAR_3))
            goto err;
    }
    FUNC_6(VAR_0);
    return VAR_0;
 err:
    return ((void*)0);
}
