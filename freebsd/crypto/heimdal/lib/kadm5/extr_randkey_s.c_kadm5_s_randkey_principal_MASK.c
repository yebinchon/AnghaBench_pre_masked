
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


typedef int krb5_principal ;
typedef int krb5_keyblock ;
struct TYPE_22__ {TYPE_3__* db; int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_21__ {int kvno; } ;
struct TYPE_23__ {TYPE_11__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_24__ {int (* hdb_close ) (int ,TYPE_3__*) ;scalar_t__ (* hdb_store ) (int ,TYPE_3__*,int ,TYPE_2__*) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_3__*,int ,int,int ,TYPE_2__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_3__*,int ,int ) ;} ;


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
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_11__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_11__*,int **,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_11__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,TYPE_11__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_11__*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_11 (int ,TYPE_3__*,int ,int,int ,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;

kadm5_ret_t
FUNC_14(void *VAR_11,
     krb5_principal VAR_12,
     krb5_keyblock **VAR_13,
     int *VAR_14)
{
    kadm5_server_context *VAR_15 = VAR_11;
    hdb_entry_ex VAR_16;
    kadm5_ret_t VAR_17;

    FUNC_9(&VAR_16, 0, sizeof(VAR_16));
    VAR_17 = VAR_15->db->hdb_open(VAR_15->context, VAR_15->db, VAR_10, 0);
    if(VAR_17)
 return VAR_17;
    VAR_17 = VAR_15->db->hdb_fetch_kvno(VAR_15->context, VAR_15->db, VAR_12,
          VAR_1|VAR_0, 0, &VAR_16);
    if(VAR_17)
 goto out;

    VAR_17 = FUNC_2 (VAR_15,
        &VAR_16.entry,
        VAR_13,
        VAR_14);
    if (VAR_17)
 goto out2;
    VAR_16.entry.kvno++;

    VAR_17 = FUNC_3(VAR_15, &VAR_16.entry);
    if(VAR_17)
 goto out3;
    VAR_17 = FUNC_0(VAR_15, &VAR_16.entry);
    if (VAR_17)
 goto out2;

    VAR_17 = FUNC_6(VAR_15->context, VAR_15->db, &VAR_16.entry);
    if (VAR_17)
 goto out2;

    VAR_17 = VAR_15->db->hdb_store(VAR_15->context, VAR_15->db,
     VAR_2, &VAR_16);
    if (VAR_17)
 goto out2;

    FUNC_7 (VAR_15,
        &VAR_16.entry,
        VAR_7 | VAR_5 | VAR_6 |
        VAR_3 | VAR_4 | VAR_8 |
        VAR_9);

out3:
    if (VAR_17) {
 int VAR_18;

 for (VAR_18 = 0; VAR_18 < *VAR_14; ++VAR_18)
     FUNC_8 (VAR_15->context, &(*VAR_13)[VAR_18]);
 FUNC_4 (*VAR_13);
 *VAR_13 = ((void*)0);
 *VAR_14 = 0;
    }
out2:
    FUNC_5(VAR_15->context, &VAR_16);
out:
    VAR_15->db->hdb_close(VAR_15->context, VAR_15->db);
    return FUNC_1(VAR_17);
}
