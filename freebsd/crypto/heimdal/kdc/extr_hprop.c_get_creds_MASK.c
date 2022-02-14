
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_preauthtype ;
typedef int krb5_keytab ;
typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int **) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *,int *,char*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(krb5_context VAR_5, krb5_ccache *VAR_6)
{
    krb5_keytab VAR_7;
    krb5_principal VAR_8;
    krb5_error_code VAR_9;
    krb5_get_init_creds_opt *VAR_10;
    krb5_preauthtype VAR_11 = VAR_1;
    krb5_creds VAR_12;

    VAR_9 = FUNC_11(VAR_5, &VAR_2);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_kt_register");

    VAR_9 = FUNC_12(VAR_5, VAR_4, &VAR_7);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_kt_resolve");

    VAR_9 = FUNC_13(VAR_5, &VAR_8, ((void*)0),
         "kadmin", VAR_0, ((void*)0));
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_make_principal");

    VAR_9 = FUNC_7(VAR_5, &VAR_10);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_get_init_creds_opt_alloc");
    FUNC_9(VAR_10, &VAR_11, 1);

    VAR_9 = FUNC_6(VAR_5, &VAR_12, VAR_8, VAR_7, 0, ((void*)0), VAR_10);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_get_init_creds");

    FUNC_8(VAR_5, VAR_10);

    VAR_9 = FUNC_10(VAR_5, VAR_7);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_kt_close");

    VAR_9 = FUNC_1(VAR_5, VAR_3, ((void*)0), VAR_6);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_cc_new_unique");

    VAR_9 = FUNC_0(VAR_5, *VAR_6, VAR_8);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_cc_initialize");

    FUNC_5(VAR_5, VAR_8);

    VAR_9 = FUNC_2(VAR_5, *VAR_6, &VAR_12);
    if(VAR_9) FUNC_3(VAR_5, 1, VAR_9, "krb5_cc_store_cred");

    FUNC_4(VAR_5, &VAR_12);
}
