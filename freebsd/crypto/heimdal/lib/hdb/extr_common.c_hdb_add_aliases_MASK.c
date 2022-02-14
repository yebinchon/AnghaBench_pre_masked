
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
struct TYPE_17__ {int principal; } ;
struct TYPE_13__ {TYPE_7__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
struct TYPE_14__ {int principal; } ;
typedef TYPE_3__ hdb_entry_alias ;
struct TYPE_16__ {scalar_t__ (* hdb__put ) (int ,TYPE_5__*,unsigned int,int ,int ) ;} ;
struct TYPE_12__ {size_t len; int * val; } ;
struct TYPE_15__ {TYPE_1__ aliases; } ;
typedef TYPE_4__ HDB_Ext_Aliases ;
typedef TYPE_5__ HDB ;


 scalar_t__ FUNC_0 (int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_7__*,TYPE_4__ const**) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__*,unsigned int,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_0, HDB *VAR_1,
  unsigned VAR_2, hdb_entry_ex *VAR_3)
{
    const HDB_Ext_Aliases *VAR_4;
    krb5_error_code VAR_5;
    krb5_data VAR_6, VAR_7;
    size_t VAR_8;

    VAR_5 = FUNC_1(&VAR_3->entry, &VAR_4);
    if (VAR_5 || VAR_4 == ((void*)0))
 return VAR_5;

    for (VAR_8 = 0; VAR_8 < VAR_4->aliases.len; VAR_8++) {
 hdb_entry_alias VAR_9;
 VAR_9.principal = VAR_3->entry.principal;

 FUNC_2(VAR_0, &VAR_4->aliases.val[VAR_8], &VAR_6);
 VAR_5 = FUNC_0(VAR_0, &VAR_9, &VAR_7);
 if (VAR_5) {
     FUNC_3(&VAR_6);
     return VAR_5;
 }
 VAR_5 = VAR_1->hdb__put(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7);
 FUNC_3(&VAR_6);
 FUNC_3(&VAR_7);
 if (VAR_5)
     return VAR_5;
    }
    return 0;
}
