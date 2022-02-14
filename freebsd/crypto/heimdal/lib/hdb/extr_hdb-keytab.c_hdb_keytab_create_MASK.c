
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* hdb_keytab ;
struct TYPE_7__ {int hdb_destroy; int * hdb__del; int * hdb__put; int * hdb__get; int * hdb_rename; int hdb_unlock; int hdb_lock; int hdb_nextkey; int hdb_firstkey; int * hdb_remove; int hdb_store; int hdb_fetch_kvno; int hdb_close; int hdb_open; scalar_t__ hdb_openp; scalar_t__ hdb_master_key_set; struct TYPE_7__* hdb_db; int * path; } ;
typedef TYPE_1__ HDB ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (char const*) ;

krb5_error_code
FUNC_5(krb5_context VAR_10, HDB ** VAR_11, const char *VAR_12)
{
    hdb_keytab VAR_13;

    *VAR_11 = FUNC_0(1, sizeof(**VAR_11));
    if (*VAR_11 == ((void*)0)) {
 FUNC_2(VAR_10, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    FUNC_3(*VAR_11, 0, sizeof(**VAR_11));

    VAR_13 = FUNC_0(1, sizeof(*VAR_13));
    if (VAR_13 == ((void*)0)) {
 FUNC_1(*VAR_11);
 *VAR_11 = ((void*)0);
 FUNC_2(VAR_10, VAR_0, "malloc: out of memory");
 return VAR_0;
    }

    VAR_13->path = FUNC_4(VAR_12);
    if (VAR_13->path == ((void*)0)) {
 FUNC_1(VAR_13);
 FUNC_1(*VAR_11);
 *VAR_11 = ((void*)0);
 FUNC_2(VAR_10, VAR_0, "malloc: out of memory");
 return VAR_0;
    }


    (*VAR_11)->hdb_db = VAR_13;

    (*VAR_11)->hdb_master_key_set = 0;
    (*VAR_11)->hdb_openp = 0;
    (*VAR_11)->hdb_open = VAR_7;
    (*VAR_11)->hdb_close = VAR_1;
    (*VAR_11)->hdb_fetch_kvno = VAR_3;
    (*VAR_11)->hdb_store = VAR_8;
    (*VAR_11)->hdb_remove = ((void*)0);
    (*VAR_11)->hdb_firstkey = VAR_4;
    (*VAR_11)->hdb_nextkey = VAR_6;
    (*VAR_11)->hdb_lock = VAR_5;
    (*VAR_11)->hdb_unlock = VAR_9;
    (*VAR_11)->hdb_rename = ((void*)0);
    (*VAR_11)->hdb__get = ((void*)0);
    (*VAR_11)->hdb__put = ((void*)0);
    (*VAR_11)->hdb__del = ((void*)0);
    (*VAR_11)->hdb_destroy = VAR_2;

    return 0;
}
