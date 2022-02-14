
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int krb5_principal ;
struct TYPE_16__ {TYPE_4__* db; int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_15__ {scalar_t__ immutable; } ;
struct TYPE_14__ {TYPE_1__ flags; } ;
struct TYPE_17__ {TYPE_12__ entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_18__ {scalar_t__ (* hdb_open ) (int ,TYPE_4__*,int ,int ) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_4__*,int ,int,int ,TYPE_3__*) ;scalar_t__ (* hdb_remove ) (int ,TYPE_4__*,int ) ;int (* hdb_close ) (int ,TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,TYPE_12__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int ,int,int ,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_4__*,int ) ;
 int FUNC_9 (int ,TYPE_4__*) ;

kadm5_ret_t
FUNC_10(void *VAR_6, krb5_principal VAR_7)
{
    kadm5_server_context *VAR_8 = VAR_6;
    kadm5_ret_t VAR_9;
    hdb_entry_ex VAR_10;

    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_9 = VAR_8->db->hdb_open(VAR_8->context, VAR_8->db, VAR_5, 0);
    if(VAR_9) {
 FUNC_4(VAR_8->context, VAR_9, "opening database");
 return VAR_9;
    }
    VAR_9 = VAR_8->db->hdb_fetch_kvno(VAR_8->context, VAR_8->db, VAR_7,
          VAR_2|VAR_3|VAR_1, 0, &VAR_10);
    if(VAR_9 == VAR_0)
 goto out;
    if(VAR_10.entry.flags.immutable) {
 VAR_9 = VAR_4;
 goto out2;
    }

    VAR_9 = FUNC_2(VAR_8->context, VAR_8->db, &VAR_10.entry);
    if (VAR_9)
 goto out2;

    VAR_9 = VAR_8->db->hdb_remove(VAR_8->context, VAR_8->db, VAR_7);
    if (VAR_9)
 goto out2;

    FUNC_3 (VAR_8, VAR_7);

out2:
    FUNC_1(VAR_8->context, &VAR_10);
out:
    VAR_8->db->hdb_close(VAR_8->context, VAR_8->db);
    return FUNC_0(VAR_9);
}
