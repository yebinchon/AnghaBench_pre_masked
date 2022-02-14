
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_kt_cursor ;
struct TYPE_9__ {int keytype; } ;
struct TYPE_8__ {int vno; TYPE_6__ keyblock; int principal; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*,TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*,char const*,...) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,char**) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (int ,char const*,int *) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,char**) ;
 int FUNC_13 (int ,scalar_t__,char*,...) ;
 int FUNC_14 (int ,char*,char*,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_15 (void *VAR_5, int VAR_6, char **VAR_7)
{
    krb5_error_code VAR_8;
    krb5_keytab VAR_9, VAR_10;
    krb5_kt_cursor VAR_11;
    krb5_keytab_entry VAR_12, VAR_13;
    const char *VAR_14 = VAR_7[0];
    const char *VAR_15 = VAR_7[1];

    VAR_8 = FUNC_10 (VAR_1, VAR_14, &VAR_9);
    if (VAR_8) {
 FUNC_13 (VAR_1, VAR_8, "resolving src keytab `%s'", VAR_14);
 return 1;
    }

    VAR_8 = FUNC_10 (VAR_1, VAR_15, &VAR_10);
    if (VAR_8) {
 FUNC_5 (VAR_1, VAR_9);
 FUNC_13 (VAR_1, VAR_8, "resolving dst keytab `%s'", VAR_15);
 return 1;
    }

    VAR_8 = FUNC_11 (VAR_1, VAR_9, &VAR_11);
    if (VAR_8) {
 FUNC_13 (VAR_1, VAR_8, "krb5_kt_start_seq_get %s", VAR_2);
 goto out;
    }

    if (VAR_4)
 FUNC_1(VAR_3, "copying %s to %s\n", VAR_14, VAR_15);

    while((VAR_8 = FUNC_9(VAR_1, VAR_9,
        &VAR_12, &VAR_11)) == 0) {
 char *VAR_16;
 char *VAR_17;
 VAR_8 = FUNC_12 (VAR_1, VAR_12.principal, &VAR_16);
 if(VAR_8) {
     FUNC_13(VAR_1, VAR_8, "krb5_unparse_name");
     VAR_16 = ((void*)0);
 }
 VAR_8 = FUNC_3(VAR_1, VAR_12.keyblock.keytype, &VAR_17);
 if(VAR_8) {
     FUNC_13(VAR_1, VAR_8, "krb5_enctype_to_string");
     VAR_17 = ((void*)0);
 }
 VAR_8 = FUNC_8(VAR_1, VAR_10,
    VAR_12.principal,
    VAR_12.vno,
    VAR_12.keyblock.keytype,
    &VAR_13);
 if(VAR_8 == 0) {



     if(!FUNC_0(&VAR_12.keyblock, &VAR_13.keyblock)) {
  FUNC_14(VAR_1, "entry with different keyvalue "
      "already exists for %s, keytype %s, kvno %d",
      VAR_16, VAR_17, VAR_12.vno);
     }
     FUNC_7(VAR_1, &VAR_13);
     FUNC_7 (VAR_1, &VAR_12);
     FUNC_2(VAR_16);
     FUNC_2(VAR_17);
     continue;
 } else if(VAR_8 != VAR_0) {
     FUNC_13 (VAR_1, VAR_8, "%s: fetching %s/%s/%u",
         VAR_15, VAR_16, VAR_17, VAR_12.vno);
     FUNC_7 (VAR_1, &VAR_12);
     FUNC_2(VAR_16);
     FUNC_2(VAR_17);
     break;
 }
 if (VAR_4)
     FUNC_1 (VAR_3, "copying %s, keytype %s, kvno %d\n", VAR_16,
       VAR_17, VAR_12.vno);
 VAR_8 = FUNC_4 (VAR_1, VAR_10, &VAR_12);
 FUNC_7 (VAR_1, &VAR_12);
 if (VAR_8) {
     FUNC_13 (VAR_1, VAR_8, "%s: adding %s/%s/%u",
         VAR_15, VAR_16, VAR_17, VAR_12.vno);
     FUNC_2(VAR_16);
     FUNC_2(VAR_17);
     break;
 }
 FUNC_2(VAR_16);
 FUNC_2(VAR_17);
    }
    FUNC_6 (VAR_1, VAR_9, &VAR_11);

  out:
    FUNC_5 (VAR_1, VAR_9);
    FUNC_5 (VAR_1, VAR_10);
    return VAR_8 != 0;
}
