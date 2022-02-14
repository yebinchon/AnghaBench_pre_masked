
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_1,
                                  const char *VAR_2, const char *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return 0;
    if (FUNC_2(VAR_2, "key") == 0)
        return FUNC_1(VAR_1, VAR_0, VAR_3);
    if (FUNC_2(VAR_2, "hexkey") == 0)
        return FUNC_0(VAR_1, VAR_0, VAR_3);
    return -2;
}
