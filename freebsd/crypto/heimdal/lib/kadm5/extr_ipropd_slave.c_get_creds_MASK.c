
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_keytab ;
typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int keytab_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int,scalar_t__,char*,...) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_10 (int ,int **) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (int ,char const*,int *) ;
 scalar_t__ FUNC_15 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_16(krb5_context VAR_4, const char *VAR_5,
   krb5_ccache *VAR_6, const char *VAR_7)
{
    krb5_keytab VAR_8;
    krb5_principal VAR_9;
    krb5_error_code VAR_10;
    krb5_get_init_creds_opt *VAR_11;
    krb5_creds VAR_12;
    char *VAR_13;
    char VAR_14[256];

    if (VAR_5 == ((void*)0)) {
 VAR_10 = FUNC_13 (VAR_4, VAR_14, sizeof(VAR_14));
 if (VAR_10)
     FUNC_5 (VAR_4, 1, VAR_10, "krb5_kt_default_name");
 VAR_5 = VAR_14;
    }

    VAR_10 = FUNC_14(VAR_4, VAR_5, &VAR_8);
    if(VAR_10)
 FUNC_5(VAR_4, 1, VAR_10, "%s", VAR_5);


    VAR_10 = FUNC_15 (VAR_4, VAR_3, VAR_0,
       VAR_1, &VAR_9);
    if (VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_sname_to_principal");

    VAR_10 = FUNC_10(VAR_4, &VAR_11);
    if (VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_get_init_creds_opt_alloc");

    FUNC_0 (&VAR_13, "%d/%s", VAR_0, VAR_7);
    if (VAR_13 == ((void*)0))
 FUNC_6 (VAR_4, 1, "malloc: no memory");

    VAR_10 = FUNC_9(VAR_4, &VAR_12, VAR_9, VAR_8,
         0, VAR_13, VAR_11);
    FUNC_1 (VAR_13);
    FUNC_11(VAR_4, VAR_11);
    if(VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_get_init_creds");

    VAR_10 = FUNC_12(VAR_4, VAR_8);
    if(VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_kt_close");

    VAR_10 = FUNC_3(VAR_4, VAR_2, ((void*)0), VAR_6);
    if(VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_cc_new_unique");

    VAR_10 = FUNC_2(VAR_4, *VAR_6, VAR_9);
    if(VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_cc_initialize");

    VAR_10 = FUNC_4(VAR_4, *VAR_6, &VAR_12);
    if(VAR_10) FUNC_5(VAR_4, 1, VAR_10, "krb5_cc_store_cred");

    FUNC_7(VAR_4, &VAR_12);
    FUNC_8(VAR_4, VAR_9);
}
