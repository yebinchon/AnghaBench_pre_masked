
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_4 ;
 int * FUNC_4 (char const*,char,int) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (char const*,int **,int *) ;
 int FUNC_8 (int *,char const*,int *,int *,int *,int **,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

X509 *FUNC_10(const char *VAR_7, int VAR_8, const char *VAR_9)
{
    X509 *VAR_10 = ((void*)0);
    BIO *VAR_11;

    if (VAR_8 == VAR_1) {

        FUNC_7(VAR_7, &VAR_10, ((void*)0));

        return VAR_10;
    }

    if (VAR_7 == ((void*)0)) {
        FUNC_9(VAR_6);
        VAR_11 = FUNC_6(VAR_8);
    } else {
        VAR_11 = FUNC_4(VAR_7, 'r', VAR_8);
    }
    if (VAR_11 == ((void*)0))
        goto end;

    if (VAR_8 == VAR_0) {
        VAR_10 = FUNC_5(VAR_11, ((void*)0));
    } else if (VAR_8 == VAR_2) {
        VAR_10 = FUNC_3(VAR_11, ((void*)0),
                                  (pem_password_cb *)VAR_5, ((void*)0));
    } else if (VAR_8 == VAR_3) {
        if (!FUNC_8(VAR_11, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_10, ((void*)0)))
            goto end;
    } else {
        FUNC_1(VAR_4, "bad input format specified for %s\n", VAR_9);
        goto end;
    }
 end:
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_4, "unable to load certificate\n");
        FUNC_2(VAR_4);
    }
    FUNC_0(VAR_11);
    return VAR_10;
}
