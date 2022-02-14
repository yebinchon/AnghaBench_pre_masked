
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int krb5_kvno ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {void* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
struct TYPE_11__ {int db; int * fetch; } ;
typedef TYPE_2__ hdb_sqlite_db ;
struct TYPE_12__ {int entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
struct TYPE_13__ {scalar_t__ hdb_master_key_set; scalar_t__ hdb_db; } ;
typedef TYPE_4__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ,char**) ;
 int FUNC_7 (int *,int,char*,int,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_12(krb5_context VAR_6, HDB *VAR_7, krb5_const_principal VAR_8,
        unsigned VAR_9, krb5_kvno VAR_10, hdb_entry_ex *VAR_11)
{
    int VAR_12;
    krb5_error_code VAR_13;
    char *VAR_14;
    hdb_sqlite_db *VAR_15 = (hdb_sqlite_db*)(VAR_7->hdb_db);
    sqlite3_stmt *VAR_16 = VAR_15->fetch;
    krb5_data VAR_17;

    VAR_13 = FUNC_6(VAR_6, VAR_8, &VAR_14);
    if (VAR_13) {
        FUNC_0(VAR_14);
        return VAR_13;
    }

    FUNC_7(VAR_16, 1, VAR_14, -1, VAR_5);

    VAR_12 = FUNC_2(VAR_6, VAR_15->db, VAR_16);
    if (VAR_12 != VAR_4) {
        if(VAR_12 == VAR_3) {
            VAR_13 = VAR_1;
            goto out;
        } else {
            VAR_13 = VAR_0;
            FUNC_5(VAR_6, VAR_13,
                                  "sqlite fetch failed: %d",
                                  VAR_12);
            goto out;
        }
    }

    VAR_17.length = FUNC_10(VAR_16, 0);
    VAR_17.data = (void *) FUNC_9(VAR_16, 0);

    VAR_13 = FUNC_4(VAR_6, &VAR_17, &VAR_11->entry);
    if(VAR_13)
        goto out;

    if (VAR_7->hdb_master_key_set && (VAR_9 & VAR_2)) {
        VAR_13 = FUNC_3(VAR_6, VAR_7, &VAR_11->entry);
        if(VAR_13) {
           FUNC_1(VAR_6, VAR_11);
           goto out;
        }
    }

    VAR_13 = 0;

out:

    FUNC_8(VAR_16);
    FUNC_11(VAR_16);

    FUNC_0(VAR_14);

    return VAR_13;
}
