
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,unsigned char const*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,unsigned char*,size_t*,unsigned char const**,unsigned char const**) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_1, unsigned char *VAR_2,
                                size_t *VAR_3)
{
    const unsigned char *VAR_4, *VAR_5;

    if (!FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4, &VAR_5)
            || (VAR_2 != ((void*)0)
                && FUNC_0(VAR_2, VAR_4, VAR_5) == 0))
        return 0;
    *VAR_3 = VAR_0;
    return 1;
}
