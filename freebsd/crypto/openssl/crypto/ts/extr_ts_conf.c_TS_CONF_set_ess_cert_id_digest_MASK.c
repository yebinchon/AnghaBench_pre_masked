
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int EVP_MD ;
typedef int CONF ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;
 char* FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (char const*,int ) ;

int FUNC_4(CONF *VAR_1, const char *VAR_2,
                                   TS_RESP_CTX *VAR_3)
{
    int VAR_4 = 0;
    const EVP_MD *VAR_5 = ((void*)0);
    const char *VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_0);

    if (VAR_6 == ((void*)0))
        VAR_6 = "sha1";

    VAR_5 = FUNC_0(VAR_6);
    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_0);
        goto err;
    }

    if (!FUNC_2(VAR_3, VAR_5))
        goto err;

    VAR_4 = 1;
err:
    return VAR_4;
}
