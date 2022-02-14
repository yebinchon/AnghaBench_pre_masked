
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_9__ {void* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
struct TYPE_10__ {int get_all_entries; int db; } ;
typedef TYPE_2__ hdb_sqlite_db ;
struct TYPE_11__ {int entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
struct TYPE_12__ {scalar_t__ hdb_db; } ;
typedef TYPE_4__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_4, HDB *VAR_5, unsigned VAR_6,
                   hdb_entry_ex *VAR_7)
{
    krb5_error_code VAR_8 = 0;
    int VAR_9;
    krb5_data VAR_10;

    hdb_sqlite_db *VAR_11 = (hdb_sqlite_db *) VAR_5->hdb_db;

    VAR_9 = FUNC_0(VAR_4, VAR_11->db, VAR_11->get_all_entries);
    if(VAR_9 == VAR_3) {

        VAR_10.length = FUNC_4(VAR_11->get_all_entries, 0);
        VAR_10.data = (void *) FUNC_3(VAR_11->get_all_entries, 0);
        FUNC_2(VAR_7, 0, sizeof(*VAR_7));
        VAR_8 = FUNC_1(VAR_4, &VAR_10, &VAR_7->entry);
    }
    else if(VAR_9 == VAR_2) {

        VAR_8 = VAR_1;
        FUNC_5(VAR_11->get_all_entries);
    }
    else {

        VAR_8 = VAR_0;
    }

    return VAR_8;
}
