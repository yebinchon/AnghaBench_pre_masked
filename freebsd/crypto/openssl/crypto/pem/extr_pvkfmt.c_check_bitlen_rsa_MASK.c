
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**,int const**,int const**) ;
 int FUNC_5 (int *,int const**,int const**) ;
 int FUNC_6 (int *,int *,int const**,int const**) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(RSA *VAR_4, int VAR_5, unsigned int *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    const BIGNUM *VAR_10;

    FUNC_6(VAR_4, ((void*)0), &VAR_10, ((void*)0));
    if (FUNC_0(VAR_10) > 32)
        goto badkey;
    VAR_9 = FUNC_3(VAR_4);
    VAR_7 = FUNC_7(VAR_4);
    VAR_8 = (VAR_9 + 15) >> 4;
    if (VAR_5) {
        *VAR_6 = VAR_0;
        return VAR_9;
    } else {
        const BIGNUM *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;

        *VAR_6 = VAR_1;




        FUNC_6(VAR_4, ((void*)0), ((void*)0), &VAR_11);
        if (FUNC_1(VAR_11) > VAR_7)
            goto badkey;
        FUNC_5(VAR_4, &VAR_12, &VAR_13);
        FUNC_4(VAR_4, &VAR_15, &VAR_16, &VAR_14);
        if ((FUNC_1(VAR_14) > VAR_8)
            || (FUNC_1(VAR_12) > VAR_8)
            || (FUNC_1(VAR_13) > VAR_8)
            || (FUNC_1(VAR_15) > VAR_8)
            || (FUNC_1(VAR_16) > VAR_8))
            goto badkey;
    }
    return VAR_9;
 badkey:
    FUNC_2(VAR_2, VAR_3);
    return 0;
}
