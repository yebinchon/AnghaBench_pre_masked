
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_5__ {char const* password; char const* prompt_info; } ;
typedef int RSA ;
typedef TYPE_1__ PW_CB_DATA ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int *,char const*,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,int *,int *,TYPE_1__*) ;
 int * FUNC_7 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int VAR_6 ;
 int * FUNC_10 (char const*,char,int) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;

EVP_PKEY *FUNC_15(const char *VAR_10, int VAR_11, int VAR_12,
                      const char *VAR_13, ENGINE *VAR_14, const char *VAR_15)
{
    BIO *VAR_16 = ((void*)0);
    EVP_PKEY *VAR_17 = ((void*)0);
    PW_CB_DATA VAR_18;

    VAR_18.password = VAR_13;
    VAR_18.prompt_info = VAR_10;

    if (VAR_10 == ((void*)0) && (!VAR_12 || VAR_11 == VAR_2)) {
        FUNC_1(VAR_6, "no keyfile specified\n");
        goto end;
    }
    if (VAR_11 == VAR_2) {
        if (VAR_14 == ((void*)0)) {
            FUNC_1(VAR_6, "no engine specified\n");
        } else {

            VAR_17 = FUNC_2(VAR_14, VAR_10, VAR_9, &VAR_18);
            if (VAR_17 == ((void*)0)) {
                FUNC_1(VAR_6, "cannot load %s from engine\n", VAR_15);
                FUNC_3(VAR_6);
            }



        }
        goto end;
    }
    if (VAR_10 == ((void*)0) && VAR_12) {
        FUNC_14(VAR_8);
        VAR_16 = FUNC_13(VAR_11);
    } else {
        VAR_16 = FUNC_10(VAR_10, 'r', VAR_11);
    }
    if (VAR_16 == ((void*)0))
        goto end;
    if (VAR_11 == VAR_0) {
        VAR_17 = FUNC_11(VAR_16, ((void*)0));
    } else if (VAR_11 == VAR_1) {

        RSA *VAR_19;
        VAR_19 = FUNC_12(VAR_16, ((void*)0));
        if (VAR_19) {
            VAR_17 = FUNC_4();
            if (VAR_17 != ((void*)0))
                FUNC_5(VAR_17, VAR_19);
            FUNC_8(VAR_19);
        } else



            VAR_17 = ((void*)0);
    } else if (VAR_11 == VAR_5) {

        RSA *VAR_20;
        VAR_20 = FUNC_7(VAR_16, ((void*)0),
                                        (pem_password_cb *)VAR_7,
                                        &VAR_18);
        if (VAR_20 != ((void*)0)) {
            VAR_17 = FUNC_4();
            if (VAR_17 != ((void*)0))
                FUNC_5(VAR_17, VAR_20);
            FUNC_8(VAR_20);
        } else



            VAR_17 = ((void*)0);
    } else if (VAR_11 == VAR_4) {
        VAR_17 = FUNC_6(VAR_16, ((void*)0),
                                   (pem_password_cb *)VAR_7,
                                   &VAR_18);

    } else if (VAR_11 == VAR_3) {
        VAR_17 = FUNC_9(VAR_16);

    }
 end:
    FUNC_0(VAR_16);
    if (VAR_17 == ((void*)0))
        FUNC_1(VAR_6, "unable to load %s\n", VAR_15);
    return VAR_17;
}
