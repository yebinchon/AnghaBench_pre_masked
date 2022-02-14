
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_18__ {int context; TYPE_4__* db; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_principal_ent_t ;
struct TYPE_17__ {int * val; scalar_t__ len; } ;
struct TYPE_21__ {int kvno; TYPE_1__ keys; } ;
struct TYPE_19__ {TYPE_9__ entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
struct TYPE_20__ {int (* hdb_close ) (int ,TYPE_4__*) ;scalar_t__ (* hdb_store ) (int ,TYPE_4__*,int ,TYPE_3__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_4__*,int ,int ) ;} ;


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_9__*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int,TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_4__*,TYPE_9__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_9__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_4__*) ;

kadm5_ret_t
FUNC_9(void *VAR_13,
    kadm5_principal_ent_t VAR_14,
    uint32_t VAR_15,
    const char *VAR_16)
{
    kadm5_ret_t VAR_17;
    hdb_entry_ex VAR_18;
    kadm5_server_context *VAR_19 = VAR_13;

    VAR_17 = FUNC_2(VAR_19, VAR_14, VAR_15, &VAR_18,
      VAR_11,
      VAR_5 | VAR_9
      | VAR_8 | VAR_7
      | VAR_0 | VAR_2
      | VAR_10 | VAR_6
      | VAR_4 | VAR_1);
    if(VAR_17)
 goto out;

    if ((VAR_15 & VAR_3) == 0)
 VAR_18.entry.kvno = 1;

    VAR_18.entry.keys.len = 0;
    VAR_18.entry.keys.val = ((void*)0);

    VAR_17 = FUNC_1(VAR_19, &VAR_18.entry, VAR_16);
    if (VAR_17)
 goto out;

    VAR_17 = FUNC_4(VAR_19->context, VAR_19->db, &VAR_18.entry);
    if (VAR_17)
 goto out;

    VAR_17 = VAR_19->db->hdb_open(VAR_19->context, VAR_19->db, VAR_12, 0);
    if(VAR_17)
 goto out;
    VAR_17 = VAR_19->db->hdb_store(VAR_19->context, VAR_19->db, 0, &VAR_18);
    VAR_19->db->hdb_close(VAR_19->context, VAR_19->db);
    if (VAR_17)
 goto out;

    FUNC_5 (VAR_19, &VAR_18.entry);

 out:
    FUNC_3(VAR_19->context, &VAR_18);
    return FUNC_0(VAR_17);
}
