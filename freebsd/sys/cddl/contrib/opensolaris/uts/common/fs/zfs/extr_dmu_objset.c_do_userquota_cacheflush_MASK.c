
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int uqn_delta; int uqn_id; } ;
typedef TYPE_1__ userquota_node_t ;
struct TYPE_10__ {int uqc_group_deltas; int uqc_user_deltas; } ;
typedef TYPE_2__ userquota_cache_t ;
struct TYPE_11__ {int os_userused_lock; } ;
typedef TYPE_3__ objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(objset_t *VAR_2, userquota_cache_t *VAR_3, dmu_tx_t *VAR_4)
{
 void *VAR_5;
 userquota_node_t *VAR_6;

 FUNC_0(FUNC_4(VAR_4));

 VAR_5 = ((void*)0);
 while ((VAR_6 = FUNC_3(&VAR_3->uqc_user_deltas,
     &VAR_5)) != ((void*)0)) {





  FUNC_6(&VAR_2->os_userused_lock);
  FUNC_1(FUNC_8(VAR_2, VAR_1,
      VAR_6->uqn_id, VAR_6->uqn_delta, VAR_4));
  FUNC_7(&VAR_2->os_userused_lock);
  FUNC_5(VAR_6, sizeof (*VAR_6));
 }
 FUNC_2(&VAR_3->uqc_user_deltas);

 VAR_5 = ((void*)0);
 while ((VAR_6 = FUNC_3(&VAR_3->uqc_group_deltas,
     &VAR_5)) != ((void*)0)) {
  FUNC_6(&VAR_2->os_userused_lock);
  FUNC_1(FUNC_8(VAR_2, VAR_0,
      VAR_6->uqn_id, VAR_6->uqn_delta, VAR_4));
  FUNC_7(&VAR_2->os_userused_lock);
  FUNC_5(VAR_6, sizeof (*VAR_6));
 }
 FUNC_2(&VAR_3->uqc_group_deltas);
}
