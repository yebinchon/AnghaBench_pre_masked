
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
struct TYPE_8__ {int principal; } ;
struct TYPE_9__ {TYPE_1__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
struct TYPE_10__ {scalar_t__ (* hdb_check_s4u2self ) (int ,TYPE_3__*,TYPE_2__*,int ) ;} ;
typedef TYPE_3__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_2,
        krb5_kdc_configuration *VAR_3,
        HDB *VAR_4,
        hdb_entry_ex *VAR_5,
        krb5_const_principal VAR_6)
{
    krb5_error_code VAR_7;


    if (FUNC_0(VAR_2, VAR_5->entry.principal, VAR_6) == VAR_1)
 return 0;

    if (VAR_4->hdb_check_s4u2self) {
 VAR_7 = VAR_4->hdb_check_s4u2self(VAR_2, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0)
     return 0;
    } else {
 VAR_7 = VAR_0;
    }
    return VAR_7;
}
