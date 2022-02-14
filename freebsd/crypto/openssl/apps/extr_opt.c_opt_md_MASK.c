
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int FUNC_0 (int ,char*,int ,char const*) ;
 int * FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(const char *VAR_2, const EVP_MD **VAR_3)
{
    *VAR_3 = FUNC_1(VAR_2);
    if (*VAR_3 != ((void*)0))
        return 1;
    FUNC_0(VAR_0, "%s: Unrecognized flag %s\n", VAR_1, VAR_2);
    return 0;
}
