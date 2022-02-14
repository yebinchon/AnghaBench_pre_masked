
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_creds ;
typedef int krb5_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,scalar_t__,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int ,int *,int ,char*,int ,int *,int ,char*,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*,int *) ;
 scalar_t__ FUNC_14 (int ,int *,char*,int *,int*,int *,int *) ;
 int VAR_3 ;
 unsigned int FUNC_15 () ;
 unsigned int FUNC_16 (char const*,char***) ;

__attribute__((used)) static void
FUNC_17 (const char *VAR_4, unsigned VAR_5)
{
    krb5_context VAR_6;
    krb5_error_code VAR_7;
    int VAR_8;
    char **VAR_9;
    unsigned VAR_10;

    VAR_7 = FUNC_12 (&VAR_6);
    if (VAR_7)
 FUNC_1 (1, "krb5_init_context failed: %d", VAR_7);

    VAR_10 = FUNC_16 (VAR_4, &VAR_9);

    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
 char *VAR_11 = VAR_9[FUNC_15() % VAR_10];
 krb5_get_init_creds_opt *VAR_12;
 krb5_creds VAR_13;
 krb5_principal VAR_14;
 int VAR_15;
 krb5_data VAR_16, VAR_17;
 char *VAR_18, *VAR_19;

 FUNC_6 (VAR_6, &VAR_12);
 FUNC_10 (VAR_12, 300);
 FUNC_8 (VAR_12, VAR_0);
 FUNC_9 (VAR_12, VAR_0);

 VAR_7 = FUNC_13 (VAR_6, VAR_11, &VAR_14);
 if (VAR_7)
     FUNC_3 (VAR_6, 1, VAR_7, "krb5_parse_name %s", VAR_11);

 FUNC_0 (&VAR_18, "%s", VAR_11);
 FUNC_0 (&VAR_19, "%s2", VAR_11);

 VAR_7 = FUNC_11 (VAR_6,
         &VAR_13,
         VAR_14,
         VAR_18,
         VAR_3,
         ((void*)0),
         0,
         "kadmin/changepw",
         VAR_12);
 if( VAR_7 == VAR_1
     || VAR_7 == VAR_2) {
     char *VAR_20;

     VAR_20 = VAR_19;
     VAR_19 = VAR_18;
     VAR_18 = VAR_20;

     VAR_7 = FUNC_11 (VAR_6,
      &VAR_13,
      VAR_14,
      VAR_18,
      VAR_3,
      ((void*)0),
      0,
      "kadmin/changepw",
      VAR_12);
 }
 if (VAR_7)
     FUNC_3 (VAR_6, 1, VAR_7, "krb5_get_init_creds_password");

 FUNC_5 (VAR_6, VAR_14);


 VAR_7 = FUNC_14 (VAR_6,
     &VAR_13,
     VAR_19,
     ((void*)0),
     &VAR_15,
     &VAR_16,
     &VAR_17);
 if (VAR_7)
     FUNC_3 (VAR_6, 1, VAR_7, "krb5_change_password");

 FUNC_2 (VAR_18);
 FUNC_2 (VAR_19);
 FUNC_4 (VAR_6, &VAR_13);
 FUNC_7(VAR_6, VAR_12);
    }
}
