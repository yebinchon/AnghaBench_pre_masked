
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {int * hdb__del; int * hdb__put; int * hdb__get; int hdb_rename; int hdb_destroy; int hdb_remove; int hdb_store; int hdb_fetch_kvno; int hdb_nextkey; int hdb_firstkey; int hdb_unlock; int hdb_lock; int hdb_close; int hdb_open; scalar_t__ hdb_capability_flags; scalar_t__ hdb_openp; scalar_t__ hdb_master_key_set; struct TYPE_7__* hdb_db; } ;
typedef TYPE_1__ hdb_sqlite_db ;
typedef TYPE_1__ HDB ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;

krb5_error_code
FUNC_4(krb5_context VAR_11, HDB **VAR_12, const char *VAR_13)
{
    krb5_error_code VAR_14;
    hdb_sqlite_db *VAR_15;

    *VAR_12 = FUNC_0(1, sizeof (**VAR_12));
    if (*VAR_12 == ((void*)0))
 return FUNC_3(VAR_11);

    VAR_15 = (hdb_sqlite_db*) FUNC_0(1, sizeof (*VAR_15));
    if (VAR_15 == ((void*)0)) {
        FUNC_1(*VAR_12);
        *VAR_12 = ((void*)0);
 return FUNC_3(VAR_11);
    }

    (*VAR_12)->hdb_db = VAR_15;


    VAR_14 = FUNC_2(VAR_11, *VAR_12, VAR_13);
    if (VAR_14) {
        FUNC_1((*VAR_12)->hdb_db);
        FUNC_1(*VAR_12);

        return VAR_14;
    }

    (*VAR_12)->hdb_master_key_set = 0;
    (*VAR_12)->hdb_openp = 0;
    (*VAR_12)->hdb_capability_flags = 0;

    (*VAR_12)->hdb_open = VAR_6;
    (*VAR_12)->hdb_close = VAR_0;

    (*VAR_12)->hdb_lock = VAR_4;
    (*VAR_12)->hdb_unlock = VAR_10;
    (*VAR_12)->hdb_firstkey = VAR_3;
    (*VAR_12)->hdb_nextkey = VAR_5;
    (*VAR_12)->hdb_fetch_kvno = VAR_2;
    (*VAR_12)->hdb_store = VAR_9;
    (*VAR_12)->hdb_remove = VAR_7;
    (*VAR_12)->hdb_destroy = VAR_1;
    (*VAR_12)->hdb_rename = VAR_8;
    (*VAR_12)->hdb__get = ((void*)0);
    (*VAR_12)->hdb__put = ((void*)0);
    (*VAR_12)->hdb__del = ((void*)0);

    return 0;
}
