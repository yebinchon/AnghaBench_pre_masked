
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int hdb_entry ;
struct TYPE_5__ {int allowed_to_delegate_to; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
typedef TYPE_3__ HDB_extension ;
typedef int HDB_Ext_Constrained_delegation_acl ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int const*,int ) ;

krb5_error_code
FUNC_1(const hdb_entry *VAR_1,
      const HDB_Ext_Constrained_delegation_acl **VAR_2)
{
    const HDB_extension *VAR_3;

    VAR_3 = FUNC_0(VAR_1,
        VAR_0);
    if (VAR_3)
 *VAR_2 = &VAR_3->data.u.allowed_to_delegate_to;
    else
 *VAR_2 = ((void*)0);

    return 0;
}
