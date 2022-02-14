
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint16_t FUNC_4(EVP_PKEY *VAR_0)
{
    EC_KEY *VAR_1 = FUNC_2(VAR_0);
    const EC_GROUP *VAR_2;

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_2 = FUNC_1(VAR_1);
    return FUNC_3(FUNC_0(VAR_2));
}
