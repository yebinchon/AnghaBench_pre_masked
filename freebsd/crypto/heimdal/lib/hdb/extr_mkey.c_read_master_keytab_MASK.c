
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_kt_cursor ;
struct TYPE_6__ {int keyblock; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_2__* hdb_master_key ;
struct TYPE_7__ {struct TYPE_7__* next; int crypto; TYPE_1__ keytab; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_1, const char *VAR_2,
     hdb_master_key *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_keytab VAR_5;
    krb5_kt_cursor VAR_6;
    krb5_keytab_entry VAR_7;
    hdb_master_key VAR_8;

    VAR_4 = FUNC_5(VAR_1, VAR_2, &VAR_5);
    if(VAR_4)
 return VAR_4;

    VAR_4 = FUNC_6(VAR_1, VAR_5, &VAR_6);
    if(VAR_4)
 goto out;
    *VAR_3 = ((void*)0);
    while(FUNC_4(VAR_1, VAR_5, &VAR_7, &VAR_6) == 0) {
 VAR_8 = FUNC_0(1, sizeof(*VAR_8));
 if(VAR_8 == ((void*)0)) {
     FUNC_3(VAR_1, VAR_5, &VAR_6);
     VAR_4 = VAR_0;
     goto out;
 }
 VAR_8->keytab = VAR_7;
 VAR_4 = FUNC_1(VAR_1, &VAR_8->keytab.keyblock, 0, &VAR_8->crypto);
 VAR_8->next = *VAR_3;
 *VAR_3 = VAR_8;
    }
    FUNC_3(VAR_1, VAR_5, &VAR_6);
  out:
    FUNC_2(VAR_1, VAR_5);
    return VAR_4;
}
