
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int * krb5_auth_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *,int ,int ,int ,int **) ;
 int FUNC_8 (int ,int **,int ,char const*,char*,int *,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int **,TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_10 (int ,int *,char const*,int ,int *) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int ,char*,char*,char const*) ;

__attribute__((used)) static int
FUNC_13(krb5_context VAR_3, krb5_ccache VAR_4,
    char *VAR_5, int VAR_6)
{
 krb5_error_code VAR_7;
 krb5_principal VAR_8;
 krb5_keyblock *VAR_9;
 krb5_data VAR_10;
 krb5_auth_context VAR_11;
 char VAR_12[VAR_0];
 const char *VAR_13[3], **VAR_14;

 VAR_10.data = 0;
 VAR_13[0] = "host";
 VAR_13[1] = VAR_5;
 VAR_13[2] = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_7 = -1;
 for (VAR_14 = &VAR_13[0]; *VAR_14 != ((void*)0); VAR_14++) {
  VAR_7 = FUNC_10(VAR_3, ((void*)0), *VAR_14,
      VAR_1, &VAR_8);
  if (VAR_7 != 0) {
   if (VAR_6) {
    const char *VAR_15 = FUNC_6(
        VAR_3, VAR_7);
    FUNC_12(VAR_2,
        "pam_krb5: verify_krb_v5_tgt(): %s: %s",
        "krb5_sname_to_principal()", VAR_15);
    FUNC_3(VAR_3, VAR_15);
   }
   return -1;
  }


  FUNC_11(VAR_12, FUNC_1(VAR_3, VAR_8, 1),
      VAR_0);
  VAR_12[VAR_0 - 1] = '\0';






  VAR_7 = FUNC_7(VAR_3, ((void*)0), VAR_8, 0, 0,
      &VAR_9);
  if (VAR_7 != 0)
   continue;
  break;
 }
 if (VAR_7 != 0) {

  if (VAR_6) {
   const char *VAR_16 = FUNC_6(VAR_3,
       VAR_7);
   FUNC_12(VAR_2,
       "pam_krb5: verify_krb_v5_tgt(): %s: %s",
       "krb5_kt_read_service_key()", VAR_16);
   FUNC_3(VAR_3, VAR_16);
  }
  VAR_7 = 0;
  goto cleanup;
 }
 if (VAR_9)
  FUNC_4(VAR_3, VAR_9);


 VAR_11 = ((void*)0);
 VAR_7 = FUNC_8(VAR_3, &VAR_11, 0, *VAR_14, VAR_12,
  ((void*)0), VAR_4, &VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_3, VAR_11);
  VAR_11 = ((void*)0);
 }
 if (VAR_7) {
  if (VAR_6) {
   const char *VAR_17 = FUNC_6(VAR_3,
       VAR_7);
   FUNC_12(VAR_2,
       "pam_krb5: verify_krb_v5_tgt(): %s: %s",
       "krb5_mk_req()", VAR_17);
   FUNC_3(VAR_3, VAR_17);
  }
  VAR_7 = -1;
  goto cleanup;
 }


 VAR_7 = FUNC_9(VAR_3, &VAR_11, &VAR_10, VAR_8, ((void*)0),
     ((void*)0), ((void*)0));
 if (VAR_7) {
  if (VAR_6) {
   const char *VAR_18 = FUNC_6(VAR_3,
       VAR_7);
   FUNC_12(VAR_2,
       "pam_krb5: verify_krb_v5_tgt(): %s: %s",
       "krb5_rd_req()", VAR_18);
   FUNC_3(VAR_3, VAR_18);
  }
  VAR_7 = -1;
 }
 else
  VAR_7 = 1;

cleanup:
 if (VAR_10.data)
  FUNC_0(VAR_3, &VAR_10);
 FUNC_5(VAR_3, VAR_8);
 return VAR_7;
}
