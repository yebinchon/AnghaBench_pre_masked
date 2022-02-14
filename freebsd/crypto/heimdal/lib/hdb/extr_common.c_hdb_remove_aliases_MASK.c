
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry ;
struct TYPE_10__ {scalar_t__ (* hdb__get ) (int ,TYPE_3__*,int ,int *) ;scalar_t__ (* hdb__del ) (int ,TYPE_3__*,int ) ;} ;
struct TYPE_8__ {size_t len; int * val; } ;
struct TYPE_9__ {TYPE_1__ aliases; } ;
typedef TYPE_2__ HDB_Ext_Aliases ;
typedef TYPE_3__ HDB ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__ const**) ;
 int FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_1, HDB *VAR_2, krb5_data *VAR_3)
{
    const HDB_Ext_Aliases *VAR_4;
    krb5_error_code VAR_5;
    hdb_entry VAR_6;
    krb5_data VAR_7;
    size_t VAR_8;

    VAR_5 = VAR_2->hdb__get(VAR_1, VAR_2, *VAR_3, &VAR_7);
    if (VAR_5 == VAR_0)
 return 0;
    else if (VAR_5)
 return VAR_5;

    VAR_5 = FUNC_3(VAR_1, &VAR_7, &VAR_6);
    FUNC_4(&VAR_7);
    if (VAR_5)
 return VAR_5;

    VAR_5 = FUNC_1(&VAR_6, &VAR_4);
    if (VAR_5 || VAR_4 == ((void*)0)) {
 FUNC_0(&VAR_6);
 return VAR_5;
    }
    for (VAR_8 = 0; VAR_8 < VAR_4->aliases.len; VAR_8++) {
 krb5_data VAR_9;

 FUNC_2(VAR_1, &VAR_4->aliases.val[VAR_8], &VAR_9);
 VAR_5 = VAR_2->hdb__del(VAR_1, VAR_2, VAR_9);
 FUNC_4(&VAR_9);
 if (VAR_5) {
     FUNC_0(&VAR_6);
     return VAR_5;
 }
    }
    FUNC_0(&VAR_6);
    return 0;
}
