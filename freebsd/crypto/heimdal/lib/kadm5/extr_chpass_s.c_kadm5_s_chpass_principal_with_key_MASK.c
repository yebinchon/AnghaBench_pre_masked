
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


typedef int krb5_principal ;
typedef int krb5_key_data ;
struct TYPE_22__ {TYPE_3__* db; int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_21__ {int kvno; } ;
struct TYPE_23__ {TYPE_11__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_24__ {scalar_t__ (* hdb_open ) (int ,TYPE_3__*,int ,int ) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_3__*,int ,int ,int,TYPE_2__*) ;scalar_t__ (* hdb_store ) (int ,TYPE_3__*,int ,TYPE_2__*) ;int (* hdb_close ) (int ,TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_11__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_11__*,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_11__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,TYPE_11__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_11__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_3__*,int ,int ,int,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_3__*) ;

kadm5_ret_t
FUNC_12(void *VAR_12,
      krb5_principal VAR_13,
      int VAR_14,
      krb5_key_data *VAR_15)
{
    kadm5_server_context *VAR_16 = VAR_12;
    hdb_entry_ex VAR_17;
    kadm5_ret_t VAR_18;

    FUNC_7(&VAR_17, 0, sizeof(VAR_17));
    VAR_18 = VAR_16->db->hdb_open(VAR_16->context, VAR_16->db, VAR_11, 0);
    if(VAR_18)
 return VAR_18;
    VAR_18 = VAR_16->db->hdb_fetch_kvno(VAR_16->context, VAR_16->db, VAR_13, 0,
          VAR_2|VAR_1, &VAR_17);
    if(VAR_18 == VAR_0)
 goto out;
    VAR_18 = FUNC_2(VAR_16, &VAR_17.entry, VAR_14, VAR_15);
    if(VAR_18)
 goto out2;
    VAR_17.entry.kvno++;
    VAR_18 = FUNC_3(VAR_16, &VAR_17.entry);
    if(VAR_18)
 goto out2;
    VAR_18 = FUNC_0(VAR_16, &VAR_17.entry);
    if (VAR_18)
 goto out2;

    VAR_18 = FUNC_5(VAR_16->context, VAR_16->db, &VAR_17.entry);
    if (VAR_18)
 goto out2;

    VAR_18 = VAR_16->db->hdb_store(VAR_16->context, VAR_16->db,
     VAR_3, &VAR_17);
    if (VAR_18)
 goto out2;

    FUNC_6 (VAR_16,
        &VAR_17.entry,
        VAR_8 | VAR_6 | VAR_7 |
        VAR_4 | VAR_5 | VAR_9 |
        VAR_10);

out2:
    FUNC_4(VAR_16->context, &VAR_17);
out:
    VAR_16->db->hdb_close(VAR_16->context, VAR_16->db);
    return FUNC_1(VAR_18);
}
