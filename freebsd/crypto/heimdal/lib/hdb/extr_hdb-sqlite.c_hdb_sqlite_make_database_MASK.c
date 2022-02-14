
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {scalar_t__ version; int * db_file; scalar_t__ db; int get_version; int get_all_entries; int remove; int update_entry; int delete_aliases; int add_alias; int add_principal; int add_entry; int get_ids; int fetch; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_6__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_17, HDB *VAR_18, const char *VAR_19)
{
    int VAR_20;
    int VAR_21 = 0;
    hdb_sqlite_db *VAR_22 = (hdb_sqlite_db *) VAR_18->hdb_db;

    VAR_22->db_file = FUNC_8(VAR_19);
    if(VAR_22->db_file == ((void*)0))
        return VAR_1;

    VAR_20 = FUNC_1(VAR_17, VAR_18, 0);
    if (VAR_20) {
        VAR_20 = FUNC_1(VAR_17, VAR_18, VAR_15);
        if (VAR_20) goto out;

        VAR_21 = 1;

        VAR_20 = FUNC_0(VAR_17, VAR_22->db,
                                   VAR_5,
                                   VAR_0);
        if (VAR_20) goto out;

        VAR_20 = FUNC_0(VAR_17, VAR_22->db,
                                   VAR_6,
                                   VAR_0);
        if (VAR_20) goto out;
    }

    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->get_version,
                                  VAR_11);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->fetch,
                                  VAR_8);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->get_ids,
                                  VAR_10);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->add_entry,
                                  VAR_3);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->add_principal,
                                  VAR_4);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->add_alias,
                                  VAR_2);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->delete_aliases,
                                  VAR_7);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->update_entry,
                                  VAR_13);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->remove,
                                  VAR_12);
    if (VAR_20) goto out;
    VAR_20 = FUNC_2(VAR_17, VAR_22->db,
                                  &VAR_22->get_all_entries,
                                  VAR_9);
    if (VAR_20) goto out;

    VAR_20 = FUNC_3(VAR_17, VAR_22->db, VAR_22->get_version);
    if(VAR_20 == VAR_16) {
        VAR_22->version = FUNC_6(VAR_22->get_version, 0);
    }
    FUNC_7(VAR_22->get_version);
    VAR_20 = 0;

    if(VAR_22->version != VAR_14) {
        VAR_20 = VAR_0;
        FUNC_4(VAR_17, VAR_20, "HDBSQLITE_VERSION mismatch");
    }

    if(VAR_20) goto out;

    return 0;

 out:
    if (VAR_22->db)
        FUNC_5(VAR_22->db);
    if (VAR_21)
        FUNC_9(VAR_22->db_file);

    return VAR_20;
}
