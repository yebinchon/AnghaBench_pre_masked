
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ktentry ;
typedef int krb5_kvno ;
struct TYPE_16__ {int principal; } ;
struct TYPE_15__ {int server; int forwardable; int renewable; } ;
struct TYPE_17__ {int principal; TYPE_2__ created_by; TYPE_1__ flags; } ;
typedef TYPE_3__ krb5_keytab_entry ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
typedef TYPE_4__* hdb_keytab ;
struct TYPE_19__ {TYPE_3__ entry; } ;
typedef TYPE_5__ hdb_entry_ex ;
struct TYPE_20__ {int hdb_db; } ;
struct TYPE_18__ {int keytab; } ;
typedef TYPE_6__ HDB ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_2, HDB * VAR_3, krb5_const_principal VAR_4,
        unsigned VAR_5, krb5_kvno VAR_6, hdb_entry_ex * VAR_7)
{
    hdb_keytab VAR_8 = (hdb_keytab)VAR_3->hdb_db;
    krb5_error_code VAR_9;
    krb5_keytab_entry VAR_10;

    if (!(VAR_5 & VAR_1)) {

     VAR_6 = 0;
    }

    FUNC_6(&VAR_10, 0, sizeof(VAR_10));

    VAR_7->entry.flags.server = 1;
    VAR_7->entry.flags.forwardable = 1;
    VAR_7->entry.flags.renewable = 1;


    VAR_9 = FUNC_5(VAR_2, "hdb/keytab@WELL-KNOWN:KEYTAB-BACKEND",
     &VAR_7->entry.created_by.principal);
    if (VAR_9)
 goto out;
    VAR_9 = FUNC_4(VAR_2, VAR_8->keytab, VAR_4, VAR_6, 0, &VAR_10);
    if (VAR_9) {
 VAR_9 = VAR_0;
 goto out;
    }

    VAR_9 = FUNC_2(VAR_2, VAR_4, &VAR_7->entry.principal);
    if (VAR_9)
 goto out;

    VAR_9 = FUNC_0(VAR_2, &VAR_10, VAR_7);

 out:
    if (VAR_9) {
 FUNC_1(&VAR_7->entry);
 FUNC_6(&VAR_7->entry, 0, sizeof(VAR_7->entry));
    }
    FUNC_3(VAR_2, &VAR_10);

    return VAR_9;
}
