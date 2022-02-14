
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int TS_RESP_CTX ;
typedef int CONF ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,int ) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ) ;

int FUNC_5(CONF *VAR_1, const char *VAR_2,
                            const char *VAR_3, TS_RESP_CTX *VAR_4)
{
    int VAR_5 = 0;
    X509 *VAR_6 = ((void*)0);

    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
        if (VAR_3 == ((void*)0)) {
            FUNC_4(VAR_2, VAR_0);
            goto err;
        }
    }
    if ((VAR_6 = FUNC_1(VAR_3)) == ((void*)0))
        goto err;
    if (!FUNC_2(VAR_4, VAR_6))
        goto err;

    VAR_5 = 1;
 err:
    FUNC_3(VAR_6);
    return VAR_5;
}
