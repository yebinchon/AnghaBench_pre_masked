
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_8 () ;
 scalar_t__ FUNC_9 (int const*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(const BIGNUM *VAR_1, const BIGNUM *VAR_2)
{
    BN_CTX *VAR_3 = FUNC_1();
    BIGNUM *VAR_4 = FUNC_8();
    BIGNUM *VAR_5 = FUNC_8();
    int VAR_6 =
        VAR_2 != ((void*)0) && VAR_1 != ((void*)0) && VAR_3 != ((void*)0) && FUNC_5(VAR_1) &&
        FUNC_6(VAR_1, VAR_0, VAR_3, ((void*)0)) == 1 &&
        VAR_4 != ((void*)0) && FUNC_9(VAR_4, VAR_1) &&

        FUNC_6(VAR_4, VAR_0, VAR_3, ((void*)0)) == 1 &&
        VAR_5 != ((void*)0) &&

        FUNC_7(VAR_5, VAR_2, VAR_4, VAR_1, VAR_3) &&
        FUNC_2(VAR_5, 1) && FUNC_3(VAR_5, VAR_1) == 0;

    FUNC_4(VAR_5);
    FUNC_4(VAR_4);
    FUNC_0(VAR_3);
    return VAR_6;
}
