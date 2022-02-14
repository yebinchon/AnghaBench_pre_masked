
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int const* FUNC_3 () ;
 int const* FUNC_4 () ;
 int FUNC_5 (int const*) ;

BIGNUM *FUNC_6(const BIGNUM *VAR_1)
{
    BIGNUM *VAR_2;

    if (VAR_1 == ((void*)0))
        return ((void*)0);
    FUNC_5(VAR_1);

    VAR_2 = FUNC_2(VAR_1, VAR_0) ? FUNC_4() : FUNC_3();
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (!FUNC_0(VAR_2, VAR_1)) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    FUNC_5(VAR_2);
    return VAR_2;
}
