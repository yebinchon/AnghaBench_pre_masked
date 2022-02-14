
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct remove_options {int kvno_integer; int enctype_string; int principal_string; } ;
typedef int * krb5_principal ;
struct TYPE_4__ {int keytype; } ;
struct TYPE_5__ {int vno; TYPE_1__ keyblock; int * principal; } ;
typedef TYPE_2__ krb5_keytab_entry ;
typedef int * krb5_keytab ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int,char*,...) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ,char*,int*) ;

int
FUNC_9(struct remove_options *VAR_2, int VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5 = 0;
    krb5_keytab_entry VAR_6;
    krb5_keytab VAR_7;
    krb5_principal VAR_8 = ((void*)0);
    krb5_enctype VAR_9 = 0;

    if(VAR_2->principal_string) {
 VAR_5 = FUNC_3(VAR_1, VAR_2->principal_string, &VAR_8);
 if(VAR_5) {
     FUNC_5(VAR_1, VAR_5, "%s", VAR_2->principal_string);
     return 1;
 }
    }
    if(VAR_2->enctype_string) {
 VAR_5 = FUNC_4(VAR_1, VAR_2->enctype_string, &VAR_9);
 if(VAR_5) {
     int VAR_10;
     if(FUNC_8(VAR_2->enctype_string, "%d", &VAR_10) == 1)
  VAR_9 = VAR_10;
     else {
  FUNC_5(VAR_1, VAR_5, "%s", VAR_2->enctype_string);
  if(VAR_8)
      FUNC_0(VAR_1, VAR_8);
  return 1;
     }
 }
    }
    if (!VAR_8 && !VAR_9 && !VAR_2->kvno_integer) {
 FUNC_6(VAR_1,
     "You must give at least one of "
     "principal, enctype or kvno.");
 VAR_5 = VAR_0;
 goto out;
    }

    if((VAR_7 = FUNC_7()) == ((void*)0)) {
 VAR_5 = 1;
 goto out;
    }

    VAR_6.principal = VAR_8;
    VAR_6.keyblock.keytype = VAR_9;
    VAR_6.vno = VAR_2->kvno_integer;
    VAR_5 = FUNC_2(VAR_1, VAR_7, &VAR_6);
    FUNC_1(VAR_1, VAR_7);
    if(VAR_5)
 FUNC_5(VAR_1, VAR_5, "remove");
 out:
    if(VAR_8)
 FUNC_0(VAR_1, VAR_8);
    return VAR_5 != 0;
}
