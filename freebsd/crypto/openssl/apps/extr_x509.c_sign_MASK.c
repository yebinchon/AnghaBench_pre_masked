
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_CTX ;
typedef int X509 ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;
typedef int CONF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int const*) ;
 int VAR_0 ;
 int FUNC_11 (int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_12(X509 *VAR_1, EVP_PKEY *VAR_2, int VAR_3, int VAR_4,
                const EVP_MD *VAR_5, CONF *VAR_6, const char *VAR_7,
                int VAR_8)
{

    if (!FUNC_7(VAR_1, FUNC_6(VAR_1)))
        goto err;
    if (!VAR_8 && !FUNC_11(VAR_1, ((void*)0), ((void*)0), VAR_3))
        goto err;
    if (!FUNC_8(VAR_1, VAR_2))
        goto err;
    if (VAR_4) {
        while (FUNC_5(VAR_1) > 0)
            FUNC_4(VAR_1, 0);
    }
    if (VAR_6 != ((void*)0)) {
        X509V3_CTX VAR_9;
        FUNC_9(VAR_1, 2);
        FUNC_2(&VAR_9, VAR_1, VAR_1, ((void*)0), ((void*)0), 0);
        FUNC_3(&VAR_9, VAR_6);
        if (!FUNC_1(VAR_6, &VAR_9, VAR_7, VAR_1))
            goto err;
    }
    if (!FUNC_10(VAR_1, VAR_2, VAR_5))
        goto err;
    return 1;
 err:
    FUNC_0(VAR_0);
    return 0;
}
