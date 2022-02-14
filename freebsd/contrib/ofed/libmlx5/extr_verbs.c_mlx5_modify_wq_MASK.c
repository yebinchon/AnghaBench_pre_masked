
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rsn; } ;
struct mlx5_rwq {scalar_t__* db; TYPE_1__ rsc; } ;
struct mlx5_modify_wq {int ibv_cmd; } ;
struct ibv_wq_attr {int attr_mask; scalar_t__ wq_state; scalar_t__ curr_wq_state; } ;
struct ibv_wq {scalar_t__ state; int cq; } ;
typedef int cmd ;
struct TYPE_5__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (struct ibv_wq*,struct ibv_wq_attr*,int *,int,int) ;
 int FUNC_2 (struct mlx5_rwq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int ) ;
 struct mlx5_rwq* FUNC_6 (struct ibv_wq*) ;

int FUNC_7(struct ibv_wq *VAR_7, struct ibv_wq_attr *VAR_8)
{
 struct mlx5_modify_wq VAR_9 = {};
 struct mlx5_rwq *VAR_10 = FUNC_6(VAR_7);

 if ((VAR_8->attr_mask & VAR_4) &&
     VAR_8->wq_state == VAR_1) {
  if ((VAR_8->attr_mask & VAR_3) &&
      VAR_8->curr_wq_state != VAR_7->state)
   return -VAR_0;

  if (VAR_7->state == VAR_2) {
   FUNC_3(&FUNC_5(VAR_7->cq)->lock);
   FUNC_0(FUNC_5(VAR_7->cq),
     VAR_10->rsc.rsn, ((void*)0));
   FUNC_4(&FUNC_5(VAR_7->cq)->lock);
   FUNC_2(VAR_10);
   VAR_10->db[VAR_5] = 0;
   VAR_10->db[VAR_6] = 0;
  }
 }

 return FUNC_1(VAR_7, VAR_8, &VAR_9.ibv_cmd, sizeof(VAR_9.ibv_cmd), sizeof(VAR_9));
}
