
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int uua_sublist_idx; int * uua_tx; TYPE_2__* uua_os; } ;
typedef TYPE_1__ userquota_updates_arg_t ;
struct TYPE_14__ {int os_synced_dnodes; } ;
typedef TYPE_2__ objset_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {int dp_sync_taskq; } ;
struct TYPE_12__ {scalar_t__ dn_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_10__* FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*,int ,int ,scalar_t__,int ,int *) ;

void
FUNC_9(objset_t *VAR_6, dmu_tx_t *VAR_7)
{
 int VAR_8;

 if (!FUNC_3(VAR_6))
  return;


 if (FUNC_0(VAR_6)->dn_type == VAR_1) {
  FUNC_1(FUNC_8(VAR_6,
      VAR_3,
      VAR_2, VAR_1, 0, VAR_7));
  FUNC_1(FUNC_8(VAR_6,
      VAR_0,
      VAR_2, VAR_1, 0, VAR_7));
 }

 VAR_8 = FUNC_5(VAR_6->os_synced_dnodes);
 for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (FUNC_6(VAR_6->os_synced_dnodes, VAR_9))
   continue;
  userquota_updates_arg_t *VAR_10 =
      FUNC_4(sizeof (*VAR_10), VAR_4);
  VAR_10->uua_os = VAR_6;
  VAR_10->uua_sublist_idx = VAR_9;
  VAR_10->uua_tx = VAR_7;

  (void) FUNC_7(FUNC_2(VAR_6)->dp_sync_taskq,
      VAR_5, VAR_10, 0);

 }
}
