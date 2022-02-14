
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int krb5_error_code ;
struct TYPE_19__ {int length; int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
struct TYPE_20__ {int db; int * add_alias; int * update_entry; int * delete_aliases; int * add_principal; int * add_entry; int * get_ids; } ;
typedef TYPE_3__ hdb_sqlite_db ;
struct TYPE_17__ {int * principal; } ;
struct TYPE_21__ {TYPE_12__ entry; } ;
typedef TYPE_4__ hdb_entry_ex ;
struct TYPE_23__ {scalar_t__ hdb_db; } ;
struct TYPE_18__ {int len; int * val; } ;
struct TYPE_22__ {TYPE_1__ aliases; } ;
typedef TYPE_5__ HDB_Ext_Aliases ;
typedef TYPE_6__ HDB ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_12__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_12__*,TYPE_5__ const**) ;
 int FUNC_3 (int ,TYPE_6__*,TYPE_12__*) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,TYPE_6__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int,char*,int ) ;
 int FUNC_9 (int ,int *,char**) ;
 int FUNC_10 (int ,char*,int,int ) ;
 int FUNC_11 (int *,int,int ,int ,int ) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int,char*,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_18(krb5_context VAR_6, HDB *VAR_7, unsigned VAR_8,
                 hdb_entry_ex *VAR_9)
{
    int VAR_10;
    int VAR_11;
    sqlite_int64 VAR_12;
    char *VAR_13 = ((void*)0);
    char *VAR_14;
    const HDB_Ext_Aliases *VAR_15;

    hdb_sqlite_db *VAR_16 = (hdb_sqlite_db *)(VAR_7->hdb_db);
    krb5_data VAR_17;
    sqlite3_stmt *VAR_18 = VAR_16->get_ids;

    VAR_10 = FUNC_4(VAR_6, VAR_16->db,
                               "BEGIN IMMEDIATE TRANSACTION", VAR_0);
    if(VAR_10 != VAR_3) {
 VAR_10 = VAR_0;
        FUNC_8(VAR_6, VAR_10,
          "SQLite BEGIN TRANSACTION failed: %s",
          FUNC_16(VAR_16->db));
        goto rollback;
    }

    VAR_10 = FUNC_9(VAR_6,
                            VAR_9->entry.principal, &VAR_13);
    if (VAR_10) {
        goto rollback;
    }

    VAR_10 = FUNC_3(VAR_6, VAR_7, &VAR_9->entry);
    if(VAR_10) {
        goto rollback;
    }

    VAR_10 = FUNC_1(VAR_6, &VAR_9->entry, &VAR_17);
    if(VAR_10) {
        goto rollback;
    }

    FUNC_13(VAR_18, 1, VAR_13, -1, VAR_5);
    VAR_10 = FUNC_5(VAR_6, VAR_16->db, VAR_18);

    if(VAR_10 == VAR_2) {

        FUNC_11(VAR_16->add_entry, 1,
                          VAR_17.data, VAR_17.length, VAR_5);
        VAR_10 = FUNC_5(VAR_6, VAR_16->db, VAR_16->add_entry);
        FUNC_14(VAR_16->add_entry);
        FUNC_17(VAR_16->add_entry);
        if(VAR_10 != VAR_2)
            goto rollback;

        FUNC_13(VAR_16->add_principal, 1,
                          VAR_13, -1, VAR_5);
        VAR_10 = FUNC_5(VAR_6, VAR_16->db, VAR_16->add_principal);
        FUNC_14(VAR_16->add_principal);
        FUNC_17(VAR_16->add_principal);
        if(VAR_10 != VAR_2)
            goto rollback;

        VAR_12 = FUNC_15(VAR_18, 1);

    } else if(VAR_10 == VAR_4) {

        if(! (VAR_8 & VAR_1))
            goto rollback;

        VAR_12 = FUNC_15(VAR_18, 1);

        FUNC_12(VAR_16->delete_aliases, 1, VAR_12);
        VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_16->delete_aliases);
        if(VAR_10 != VAR_2)
            goto rollback;

        FUNC_11(VAR_16->update_entry, 1,
                          VAR_17.data, VAR_17.length, VAR_5);
        FUNC_12(VAR_16->update_entry, 2, VAR_12);
        VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_16->update_entry);
        if(VAR_10 != VAR_2)
            goto rollback;

    } else {

        goto rollback;
    }

    VAR_10 = FUNC_2(&VAR_9->entry, &VAR_15);
    if(VAR_10 || VAR_15 == ((void*)0))
        goto commit;

    for(VAR_11 = 0; VAR_11 < VAR_15->aliases.len; VAR_11++) {

        VAR_10 = FUNC_9(VAR_6, &VAR_15->aliases.val[VAR_11],
    &VAR_14);
        if (VAR_10) {
            FUNC_0(VAR_14);
            goto rollback;
        }

        FUNC_13(VAR_16->add_alias, 1, VAR_14,
                          -1, VAR_5);
        FUNC_12(VAR_16->add_alias, 2, VAR_12);
        VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_16->add_alias);

        FUNC_0(VAR_14);

        if(VAR_10 != VAR_2)
            goto rollback;
    }

    VAR_10 = 0;

commit:

    FUNC_0(VAR_13);

    FUNC_7(&VAR_17);

    FUNC_14(VAR_18);
    FUNC_17(VAR_18);

    VAR_10 = FUNC_4(VAR_6, VAR_16->db, "COMMIT", VAR_0);
    if(VAR_10 != VAR_3)
 FUNC_10(VAR_6, "hdb-sqlite: COMMIT problem: %d: %s",
     VAR_10, FUNC_16(VAR_16->db));

    return VAR_10;

rollback:

    FUNC_10(VAR_6, "hdb-sqlite: store rollback problem: %d: %s",
        VAR_10, FUNC_16(VAR_16->db));

    FUNC_0(VAR_13);

    VAR_10 = FUNC_4(VAR_6, VAR_16->db,
                               "ROLLBACK", VAR_0);
    return VAR_10;
}
