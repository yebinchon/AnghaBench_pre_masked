
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *,int ,char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,size_t,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_2,
                                  const char *VAR_3, const char *VAR_4)
{
    if (VAR_4 == ((void*)0))
        return 0;
    if (FUNC_4(VAR_3, "digestsize") == 0) {
        size_t VAR_5 = FUNC_2(VAR_4);

        return FUNC_3(VAR_2, VAR_0, VAR_5,
                                 ((void*)0));
    }
    if (FUNC_4(VAR_3, "key") == 0)
        return FUNC_1(VAR_2, VAR_1, VAR_4);
    if (FUNC_4(VAR_3, "hexkey") == 0)
        return FUNC_0(VAR_2, VAR_1, VAR_4);
    return -2;
}
