
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_3__* krb5_principal ;
typedef int krb5_kvno ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef TYPE_3__* krb5_const_principal ;
struct TYPE_23__ {int entry; } ;
typedef TYPE_5__ hdb_entry_ex ;
struct TYPE_24__ {TYPE_3__* principal; } ;
typedef TYPE_6__ hdb_entry_alias ;
struct TYPE_25__ {int (* hdb__get ) (int ,TYPE_7__*,int ,int *) ;scalar_t__ hdb_master_key_set; } ;
struct TYPE_20__ {int len; int * val; } ;
struct TYPE_21__ {scalar_t__ name_type; TYPE_1__ name_string; } ;
struct TYPE_22__ {TYPE_2__ name; } ;
typedef TYPE_7__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 int FUNC_3 (int ,TYPE_7__*,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,TYPE_6__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ,TYPE_3__**) ;
 int FUNC_9 (int ,int,char*,int) ;
 int FUNC_10 (int ,TYPE_7__*,int ,int *) ;
 int FUNC_11 (int ,TYPE_7__*,int ,int *) ;

krb5_error_code
FUNC_12(krb5_context VAR_6, HDB *VAR_7, krb5_const_principal VAR_8,
  unsigned VAR_9, krb5_kvno VAR_10, hdb_entry_ex *VAR_11)
{
    krb5_principal VAR_12 = ((void*)0);
    krb5_data VAR_13, VAR_14;
    krb5_error_code VAR_15;
    int VAR_16;

    if (VAR_8->name.name_type == VAR_4) {
 if (VAR_8->name.name_string.len != 1) {
     VAR_15 = VAR_5;
     FUNC_9(VAR_6, VAR_15, "malformed principal: "
       "enterprise name with %d name components",
       VAR_8->name.name_string.len);
     return VAR_15;
 }
 VAR_15 = FUNC_8(VAR_6, VAR_8->name.name_string.val[0],
         &VAR_12);
 if (VAR_15)
     return VAR_15;
 VAR_8 = VAR_12;
    }

    FUNC_2(VAR_6, VAR_8, &VAR_13);
    if (VAR_12)
 FUNC_7(VAR_6, VAR_12);
    VAR_16 = VAR_7->hdb__get(VAR_6, VAR_7, VAR_13, &VAR_14);
    FUNC_6(&VAR_13);
    if(VAR_16)
 return VAR_16;
    VAR_16 = FUNC_4(VAR_6, &VAR_14, &VAR_11->entry);
    if (VAR_16 == VAR_0 && (VAR_9 & VAR_2) == 0) {
 FUNC_6(&VAR_14);
 return VAR_1;
    } else if (VAR_16 == VAR_0) {
 hdb_entry_alias VAR_17;

 VAR_16 = FUNC_5(VAR_6, &VAR_14, &VAR_17);
 if (VAR_16) {
     FUNC_6(&VAR_14);
     return VAR_16;
 }
 FUNC_2(VAR_6, VAR_17.principal, &VAR_13);
 FUNC_6(&VAR_14);
 FUNC_0(&VAR_17);

 VAR_16 = VAR_7->hdb__get(VAR_6, VAR_7, VAR_13, &VAR_14);
 FUNC_6(&VAR_13);
 if (VAR_16)
     return VAR_16;
 VAR_16 = FUNC_4(VAR_6, &VAR_14, &VAR_11->entry);
 if (VAR_16) {
     FUNC_6(&VAR_14);
     return VAR_16;
 }
    }
    FUNC_6(&VAR_14);
    if (VAR_7->hdb_master_key_set && (VAR_9 & VAR_3)) {
 VAR_16 = FUNC_3 (VAR_6, VAR_7, &VAR_11->entry);
 if (VAR_16)
     FUNC_1(VAR_6, VAR_11);
    }
    return VAR_16;
}
