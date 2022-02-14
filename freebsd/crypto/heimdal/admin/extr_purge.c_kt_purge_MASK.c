
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct purge_options {int age_string; } ;
struct e {scalar_t__ max_vno; int timestamp; } ;
typedef int krb5_kt_cursor ;
struct TYPE_5__ {scalar_t__ vno; int principal; int timestamp; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int * krb5_keytab ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (int ,scalar_t__,int ,struct e**) ;
 int VAR_0 ;
 int FUNC_1 (struct e*) ;
 int FUNC_2 (char*) ;
 struct e* FUNC_3 (int ,struct e*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ,int ,char**) ;
 int FUNC_11 (int ,scalar_t__,char*,...) ;
 int FUNC_12 (int ,char*,...) ;
 int * FUNC_13 () ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,char*,scalar_t__) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_2 ;

int
FUNC_17(struct purge_options *VAR_3, int VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6 = 0;
    krb5_kt_cursor VAR_7;
    krb5_keytab VAR_8;
    krb5_keytab_entry VAR_9;
    int VAR_10;
    struct e *VAR_11 = ((void*)0);
    time_t VAR_12;

    VAR_10 = FUNC_14(VAR_3->age_string, "s");
    if(VAR_10 < 0) {
 FUNC_12(VAR_0, "unparasable time `%s'", VAR_3->age_string);
 return 1;
    }

    if((VAR_8 = FUNC_13()) == ((void*)0))
 return 1;

    VAR_6 = FUNC_9(VAR_0, VAR_8, &VAR_7);
    if(VAR_6){
 FUNC_11(VAR_0, VAR_6, "%s", VAR_1);
 goto out;
    }

    while(FUNC_7(VAR_0, VAR_8, &VAR_9, &VAR_7) == 0) {
 FUNC_0 (VAR_9.principal, VAR_9.vno, VAR_9.timestamp, &VAR_11);
 FUNC_6(VAR_0, &VAR_9);
    }
    FUNC_5(VAR_0, VAR_8, &VAR_7);

    VAR_12 = FUNC_16 (((void*)0));

    VAR_6 = FUNC_9(VAR_0, VAR_8, &VAR_7);
    if(VAR_6){
 FUNC_11(VAR_0, VAR_6, "%s", VAR_1);
 goto out;
    }

    while(FUNC_7(VAR_0, VAR_8, &VAR_9, &VAR_7) == 0) {
 struct e *VAR_13 = FUNC_3 (VAR_9.principal, VAR_11);

 if (VAR_13 == ((void*)0)) {
     FUNC_12 (VAR_0, "ignoring extra entry");
     continue;
 }

 if (VAR_9.vno < VAR_13->max_vno
     && VAR_12 - VAR_13->timestamp > VAR_10) {
     if (VAR_2) {
  char *VAR_14;

  FUNC_10 (VAR_0, VAR_9.principal, &VAR_14);
  FUNC_15 ("removing %s vno %d\n", VAR_14, VAR_9.vno);
  FUNC_2 (VAR_14);
     }
     VAR_6 = FUNC_8 (VAR_0, VAR_8, &VAR_9);
     if (VAR_6)
  FUNC_11 (VAR_0, VAR_6, "remove");
 }
 FUNC_6(VAR_0, &VAR_9);
    }
    VAR_6 = FUNC_5(VAR_0, VAR_8, &VAR_7);

    FUNC_1 (VAR_11);

 out:
    FUNC_4 (VAR_0, VAR_8);
    return VAR_6 != 0;
}
