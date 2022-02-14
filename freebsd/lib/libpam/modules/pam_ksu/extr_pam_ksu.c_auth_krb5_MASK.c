
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;
typedef int krb5_verify_init_creds_opt ;
typedef int krb5_principal ;
typedef int krb5_get_init_creds_opt ;
typedef int krb5_creds ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_3 ;
 int FUNC_1 (char**,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (int ,long) ;
 long FUNC_6 (int ,int **) ;
 int FUNC_7 (int ,int *) ;
 long FUNC_8 (int ,int *,int ,char const*,int *,int *,int ,int *,int *) ;
 long FUNC_9 (int ,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ,char const**,char*) ;

__attribute__((used)) static int
FUNC_13(pam_handle_t *VAR_4, krb5_context VAR_5, const char *VAR_6,
    krb5_principal VAR_7)
{
 krb5_creds VAR_8;
 krb5_get_init_creds_opt *VAR_9;
 krb5_verify_init_creds_opt VAR_10;
 const char *VAR_11;
 char *VAR_12;
 long VAR_13;
 int VAR_14;

 VAR_12 = ((void*)0);
 FUNC_10(&VAR_10);
 if (VAR_6 != ((void*)0))
  (void)FUNC_1(&VAR_12, "Password for %s:", VAR_6);
 else
  (void)FUNC_1(&VAR_12, "Password:");
 if (VAR_12 == ((void*)0))
  return (VAR_2);
 VAR_11 = ((void*)0);
 VAR_14 = FUNC_12(VAR_4, VAR_0, &VAR_11, VAR_12);
 FUNC_2(VAR_12);
 if (VAR_14 != VAR_3)
  return (VAR_14);
 VAR_13 = FUNC_6(VAR_5, &VAR_9);
 if (VAR_13 != 0) {
  const char *VAR_15 = FUNC_5(VAR_5, VAR_13);
  FUNC_0("krb5_get_init_creds_opt_alloc: %s", VAR_15);
  FUNC_4(VAR_5, VAR_15);
  return (VAR_1);
 }
 VAR_13 = FUNC_8(VAR_5, &VAR_8, VAR_7,
     VAR_11, ((void*)0), ((void*)0), 0, ((void*)0), VAR_9);
 FUNC_7(VAR_5, VAR_9);
 if (VAR_13 != 0) {
  const char *VAR_16 = FUNC_5(VAR_5, VAR_13);
  FUNC_0("krb5_get_init_creds_password: %s", VAR_16);
  FUNC_4(VAR_5, VAR_16);
  return (VAR_1);
 }
 FUNC_11(&VAR_10, 1);
 VAR_13 = FUNC_9(VAR_5, &VAR_8, ((void*)0), ((void*)0), ((void*)0),
     &VAR_10);
 FUNC_3(VAR_5, &VAR_8);
 if (VAR_13 != 0) {
  const char *VAR_17 = FUNC_5(VAR_5, VAR_13);
  FUNC_0("krb5_verify_init_creds: %s", VAR_17);
  FUNC_4(VAR_5, VAR_17);
  return (VAR_1);
 }
 return (VAR_3);
}
