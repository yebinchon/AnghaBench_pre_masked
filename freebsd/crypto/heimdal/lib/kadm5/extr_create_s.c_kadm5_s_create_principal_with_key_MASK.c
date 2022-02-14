
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int context; TYPE_3__* db; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_principal_ent_t ;
struct TYPE_17__ {int kvno; } ;
struct TYPE_15__ {TYPE_8__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
struct TYPE_16__ {int (* hdb_close ) (int ,TYPE_3__*) ;scalar_t__ (* hdb_store ) (int ,TYPE_3__*,int ,TYPE_2__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_3__*,int ,int ) ;} ;


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
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int,TYPE_2__*,int,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_8__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_3__*) ;

kadm5_ret_t
FUNC_8(void *VAR_13,
      kadm5_principal_ent_t VAR_14,
      uint32_t VAR_15)
{
    kadm5_ret_t VAR_16;
    hdb_entry_ex VAR_17;
    kadm5_server_context *VAR_18 = VAR_13;

    VAR_16 = FUNC_1(VAR_18, VAR_14, VAR_15, &VAR_17,
      VAR_11 | VAR_2,
      VAR_5 | VAR_9
      | VAR_8 | VAR_7
      | VAR_0
      | VAR_10 | VAR_6
      | VAR_4 | VAR_1);
    if(VAR_16)
 goto out;

    if ((VAR_15 & VAR_3) == 0)
 VAR_17.entry.kvno = 1;

    VAR_16 = FUNC_3(VAR_18->context, VAR_18->db, &VAR_17.entry);
    if (VAR_16)
 goto out;

    VAR_16 = VAR_18->db->hdb_open(VAR_18->context, VAR_18->db, VAR_12, 0);
    if(VAR_16)
 goto out;
    VAR_16 = VAR_18->db->hdb_store(VAR_18->context, VAR_18->db, 0, &VAR_17);
    VAR_18->db->hdb_close(VAR_18->context, VAR_18->db);
    if (VAR_16)
 goto out;
    FUNC_4 (VAR_18, &VAR_17.entry);

out:
    FUNC_2(VAR_18->context, &VAR_17);
    return FUNC_0(VAR_16);
}
