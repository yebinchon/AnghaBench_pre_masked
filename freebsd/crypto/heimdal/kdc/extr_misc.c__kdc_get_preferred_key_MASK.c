
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ use_strongest_server_key; } ;
typedef TYPE_5__ krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
struct TYPE_15__ {int len; TYPE_2__* val; } ;
struct TYPE_20__ {TYPE_3__ keys; } ;
struct TYPE_18__ {TYPE_8__ entry; } ;
typedef TYPE_6__ hdb_entry_ex ;
struct TYPE_16__ {scalar_t__ keytype; } ;
struct TYPE_19__ {TYPE_4__ key; } ;
struct TYPE_13__ {scalar_t__ const keytype; } ;
struct TYPE_14__ {TYPE_1__ key; } ;
typedef TYPE_7__ Key ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_8__*,scalar_t__ const,TYPE_7__**) ;
 scalar_t__ FUNC_1 (int ,scalar_t__ const) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,char*,char const*) ;

krb5_error_code
FUNC_4(krb5_context VAR_2,
         krb5_kdc_configuration *VAR_3,
         hdb_entry_ex *VAR_4,
         const char *VAR_5,
         krb5_enctype *VAR_6,
         Key **VAR_7)
{
    krb5_error_code VAR_8;
    int VAR_9;

    if (VAR_3->use_strongest_server_key) {
 const krb5_enctype *VAR_10 = FUNC_2(VAR_2);

 for (VAR_9 = 0; VAR_10[VAR_9] != VAR_1; VAR_9++) {
     if (FUNC_1(VAR_2, VAR_10[VAR_9]) != 0)
  continue;
     VAR_8 = FUNC_0(VAR_2, &VAR_4->entry, VAR_10[VAR_9], VAR_7);
     if (VAR_8 != 0)
  continue;
     if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_10[VAR_9];
     return 0;
 }
    } else {
 *VAR_7 = ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_4->entry.keys.len; VAR_9++) {
     if (FUNC_1(VAR_2, VAR_4->entry.keys.val[VAR_9].key.keytype)
  != 0)
  continue;
     VAR_8 = FUNC_0(VAR_2, &VAR_4->entry,
  VAR_4->entry.keys.val[VAR_9].key.keytype, VAR_7);
     if (VAR_8 != 0)
  continue;
     if (VAR_6 != ((void*)0))
  *VAR_6 = (*VAR_7)->key.keytype;
     return 0;
 }
    }

    FUNC_3(VAR_2, VAR_0,
      "No valid kerberos key found for %s", VAR_5);
    return VAR_0;
}
