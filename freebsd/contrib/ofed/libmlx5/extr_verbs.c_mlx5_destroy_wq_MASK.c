
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rsn; } ;
struct mlx5_rwq {int db; TYPE_1__ rsc; } ;
struct ibv_wq {int context; int cq; } ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (struct mlx5_rwq*) ;
 int FUNC_2 (struct ibv_wq*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mlx5_rwq*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct mlx5_rwq* FUNC_10 (struct ibv_wq*) ;

int FUNC_11(struct ibv_wq *VAR_0)
{
 struct mlx5_rwq *VAR_1 = FUNC_10(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_6(&FUNC_8(VAR_0->cq)->lock);
 FUNC_0(FUNC_8(VAR_0->cq), VAR_1->rsc.rsn, ((void*)0));
 FUNC_7(&FUNC_8(VAR_0->cq)->lock);
 FUNC_3(FUNC_9(VAR_0->context), VAR_1->rsc.rsn);
 FUNC_4(FUNC_9(VAR_0->context), VAR_1->db);
 FUNC_5(VAR_1, VAR_0->context);
 FUNC_1(VAR_1);

 return 0;
}
