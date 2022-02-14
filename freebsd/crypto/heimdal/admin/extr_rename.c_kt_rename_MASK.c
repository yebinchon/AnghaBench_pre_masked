
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rename_options {scalar_t__ delete_flag; } ;
typedef void* krb5_principal ;
typedef int krb5_kt_cursor ;
struct TYPE_6__ {void* principal; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int * krb5_keytab ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 scalar_t__ FUNC_8 (int ,char*,void**) ;
 scalar_t__ FUNC_9 (int ,void*,void*) ;
 int FUNC_10 (int ,scalar_t__,char*,...) ;
 int * FUNC_11 () ;

int
FUNC_12(struct rename_options *VAR_3, int VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6 = 0;
    krb5_keytab_entry VAR_7;
    krb5_keytab VAR_8;
    krb5_kt_cursor VAR_9;
    krb5_principal VAR_10, VAR_11;

    VAR_6 = FUNC_8(VAR_2, VAR_5[0], &VAR_10);
    if(VAR_6 != 0) {
 FUNC_10(VAR_2, VAR_6, "%s", VAR_5[0]);
 return 1;
    }

    VAR_6 = FUNC_8(VAR_2, VAR_5[1], &VAR_11);
    if(VAR_6 != 0) {
 FUNC_0(VAR_2, VAR_10);
 FUNC_10(VAR_2, VAR_6, "%s", VAR_5[1]);
 return 1;
    }

    if((VAR_8 = FUNC_11()) == ((void*)0)) {
 FUNC_0(VAR_2, VAR_10);
 FUNC_0(VAR_2, VAR_11);
 return 1;
    }

    VAR_6 = FUNC_7(VAR_2, VAR_8, &VAR_9);
    if(VAR_6) {
 FUNC_2(VAR_2, VAR_8);
 FUNC_0(VAR_2, VAR_10);
 FUNC_0(VAR_2, VAR_11);
 return 1;
    }
    while(1) {
 VAR_6 = FUNC_5(VAR_2, VAR_8, &VAR_7, &VAR_9);
 if(VAR_6 != 0) {
     if(VAR_6 != VAR_0 && VAR_6 != VAR_1)
  FUNC_10(VAR_2, VAR_6, "getting entry from keytab");
     else
  VAR_6 = 0;
     break;
 }
 if(FUNC_9(VAR_2, VAR_7.principal, VAR_10)) {
     FUNC_0(VAR_2, VAR_7.principal);
     VAR_7.principal = VAR_11;
     VAR_6 = FUNC_1(VAR_2, VAR_8, &VAR_7);
     if(VAR_6) {
  VAR_7.principal = ((void*)0);
  FUNC_4(VAR_2, &VAR_7);
  FUNC_10(VAR_2, VAR_6, "adding entry");
  break;
     }
     if (VAR_3->delete_flag) {
  VAR_7.principal = VAR_10;
  VAR_6 = FUNC_6(VAR_2, VAR_8, &VAR_7);
  if(VAR_6) {
      VAR_7.principal = ((void*)0);
      FUNC_4(VAR_2, &VAR_7);
      FUNC_10(VAR_2, VAR_6, "removing entry");
      break;
  }
     }
     VAR_7.principal = ((void*)0);
 }
 FUNC_4(VAR_2, &VAR_7);
    }
    FUNC_3(VAR_2, VAR_8, &VAR_9);

    FUNC_0(VAR_2, VAR_10);
    FUNC_0(VAR_2, VAR_11);

    return VAR_6 != 0;
}
