
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mesh_preq_queue {int list; int flags; int dst; } ;
struct mesh_path {int flags; int state_lock; int dst; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_5__ {int list; } ;
struct ieee80211_if_mesh {scalar_t__ preq_queue_len; scalar_t__ last_preq; int mesh_path_timer; int mesh_preq_queue_lock; TYPE_2__ preq_queue; } ;
struct TYPE_4__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int work; TYPE_3__* local; TYPE_1__ u; } ;
struct TYPE_6__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct mesh_preq_queue*) ;
 struct mesh_preq_queue* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*) ;
 scalar_t__ FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct mesh_path *VAR_5, u8 VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = VAR_5->sdata;
 struct ieee80211_if_mesh *VAR_8 = &VAR_7->u.mesh;
 struct mesh_preq_queue *VAR_9;

 VAR_9 = FUNC_2(sizeof(struct mesh_preq_queue), VAR_1);
 if (!VAR_9) {
  FUNC_5(VAR_7, "could not allocate PREQ node\n");
  return;
 }

 FUNC_10(&VAR_8->mesh_preq_queue_lock);
 if (VAR_8->preq_queue_len == VAR_2) {
  FUNC_12(&VAR_8->mesh_preq_queue_lock);
  FUNC_1(VAR_9);
  if (FUNC_8())
   FUNC_5(VAR_7, "PREQ node queue full\n");
  return;
 }

 FUNC_9(&VAR_5->state_lock);
 if (VAR_5->flags & VAR_3) {
  FUNC_11(&VAR_5->state_lock);
  FUNC_12(&VAR_8->mesh_preq_queue_lock);
  FUNC_1(VAR_9);
  return;
 }

 FUNC_4(VAR_9->dst, VAR_5->dst, VAR_0);
 VAR_9->flags = VAR_6;

 VAR_5->flags |= VAR_3;
 FUNC_11(&VAR_5->state_lock);

 FUNC_3(&VAR_9->list, &VAR_8->preq_queue.list);
 ++VAR_8->preq_queue_len;
 FUNC_12(&VAR_8->mesh_preq_queue_lock);

 if (FUNC_13(VAR_4, VAR_8->last_preq + FUNC_6(VAR_7)))
  FUNC_0(&VAR_7->local->hw, &VAR_7->work);

 else if (FUNC_14(VAR_4, VAR_8->last_preq)) {



  VAR_8->last_preq = VAR_4 - FUNC_6(VAR_7) - 1;
  FUNC_0(&VAR_7->local->hw, &VAR_7->work);
 } else
  FUNC_7(&VAR_8->mesh_path_timer, VAR_8->last_preq +
      FUNC_6(VAR_7));
}
