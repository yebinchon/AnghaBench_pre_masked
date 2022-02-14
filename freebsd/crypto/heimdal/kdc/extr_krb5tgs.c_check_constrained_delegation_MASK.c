
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_const_principal ;
struct TYPE_14__ {int * principal; } ;
struct TYPE_11__ {TYPE_6__ entry; } ;
typedef TYPE_1__ hdb_entry_ex ;
struct TYPE_13__ {scalar_t__ (* hdb_check_constrained_delegation ) (int ,TYPE_3__*,TYPE_1__*,int *) ;} ;
struct TYPE_12__ {size_t len; int * val; } ;
typedef TYPE_2__ HDB_Ext_Constrained_delegation_acl ;
typedef TYPE_3__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_2__ const**) ;
 int FUNC_1 (int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,TYPE_1__*,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2,
        krb5_kdc_configuration *VAR_3,
        HDB *VAR_4,
        hdb_entry_ex *VAR_5,
        hdb_entry_ex *VAR_6,
        krb5_const_principal VAR_7)
{
    const HDB_Ext_Constrained_delegation_acl *VAR_8;
    krb5_error_code VAR_9;
    size_t VAR_10;







    if(!FUNC_4(VAR_2, VAR_5->entry.principal, VAR_6->entry.principal)) {
 VAR_9 = VAR_0;
 FUNC_1(VAR_2, VAR_3, 0,
     "Bad request for constrained delegation");
 return VAR_9;
    }

    if (VAR_4->hdb_check_constrained_delegation) {
 VAR_9 = VAR_4->hdb_check_constrained_delegation(VAR_2, VAR_4, VAR_5, VAR_7);
 if (VAR_9 == 0)
     return 0;
    } else {

 if (FUNC_3(VAR_2, VAR_5->entry.principal, VAR_6->entry.principal) == VAR_1)
     return 0;

 VAR_9 = FUNC_0(&VAR_5->entry, &VAR_8);
 if (VAR_9) {
     FUNC_2(VAR_2);
     return VAR_9;
 }

 if (VAR_8) {
     for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10++) {
  if (FUNC_3(VAR_2, VAR_7, &VAR_8->val[VAR_10]) == VAR_1)
      return 0;
     }
 }
 VAR_9 = VAR_0;
    }
    FUNC_1(VAR_2, VAR_3, 0,
     "Bad request for constrained delegation");
    return VAR_9;
}
