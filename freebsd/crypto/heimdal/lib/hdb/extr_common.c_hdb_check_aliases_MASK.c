
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
struct TYPE_18__ {int principal; } ;
struct TYPE_14__ {TYPE_8__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
struct TYPE_15__ {int principal; } ;
typedef TYPE_3__ hdb_entry_alias ;
struct TYPE_17__ {int (* hdb__get ) (int ,TYPE_5__*,int ,int *) ;} ;
struct TYPE_13__ {size_t len; int * val; } ;
struct TYPE_16__ {TYPE_1__ aliases; } ;
typedef TYPE_4__ HDB_Ext_Aliases ;
typedef TYPE_5__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_8__*,TYPE_4__ const**) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_5__*,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_3, HDB *VAR_4, hdb_entry_ex *VAR_5)
{
    const HDB_Ext_Aliases *VAR_6;
    int VAR_7;
    size_t VAR_8;



    VAR_7 = FUNC_1(&VAR_5->entry, &VAR_6);
    if (VAR_7)
 return VAR_7;

    for (VAR_8 = 0; VAR_6 && VAR_8 < VAR_6->aliases.len; VAR_8++) {
 hdb_entry_alias VAR_9;
 krb5_data VAR_10, VAR_11;

 FUNC_2(VAR_3, &VAR_6->aliases.val[VAR_8], &VAR_10);
 VAR_7 = VAR_4->hdb__get(VAR_3, VAR_4, VAR_10, &VAR_11);
 FUNC_4(&VAR_10);
 if (VAR_7 == VAR_2)
     continue;
 else if (VAR_7)
     return VAR_7;

 VAR_7 = FUNC_3(VAR_3, &VAR_11, &VAR_9);
 FUNC_4(&VAR_11);

 if (VAR_7 == VAR_0)
     return VAR_1;
 else if (VAR_7)
     return VAR_7;

 VAR_7 = FUNC_5(VAR_3, VAR_9.principal,
          VAR_5->entry.principal);
 FUNC_0(&VAR_9);
 if (VAR_7 == 0)
     return VAR_1;
    }
    return 0;
}
