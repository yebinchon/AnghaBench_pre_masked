
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static EC_KEY *FUNC_3(EVP_PKEY *VAR_0, EC_KEY **VAR_1)
{
    EC_KEY *VAR_2;
    if (!VAR_0)
        return ((void*)0);
    VAR_2 = FUNC_2(VAR_0);
    FUNC_1(VAR_0);
    if (!VAR_2)
        return ((void*)0);
    if (VAR_1) {
        FUNC_0(*VAR_1);
        *VAR_1 = VAR_2;
    }
    return VAR_2;
}
