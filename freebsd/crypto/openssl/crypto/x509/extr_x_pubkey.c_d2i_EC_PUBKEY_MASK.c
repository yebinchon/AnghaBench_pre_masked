
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned char const**,long) ;

EC_KEY *FUNC_4(EC_KEY **VAR_0, const unsigned char **VAR_1, long VAR_2)
{
    EVP_PKEY *VAR_3;
    EC_KEY *VAR_4;
    const unsigned char *VAR_5;
    VAR_5 = *VAR_1;
    VAR_3 = FUNC_3(((void*)0), &VAR_5, VAR_2);
    if (!VAR_3)
        return ((void*)0);
    VAR_4 = FUNC_2(VAR_3);
    FUNC_1(VAR_3);
    if (!VAR_4)
        return ((void*)0);
    *VAR_1 = VAR_5;
    if (VAR_0) {
        FUNC_0(*VAR_0);
        *VAR_0 = VAR_4;
    }
    return VAR_4;
}
