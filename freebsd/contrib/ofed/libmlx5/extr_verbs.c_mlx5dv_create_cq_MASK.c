
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dv_cq_init_attr {int dummy; } ;
struct ibv_cq_init_attr_ex {int cq_context; int channel; } ;
struct ibv_cq_ex {int dummy; } ;
struct ibv_context {int dummy; } ;


 int VAR_0 ;
 struct ibv_cq_ex* FUNC_0 (struct ibv_context*,struct ibv_cq_init_attr_ex*,int ,struct mlx5dv_cq_init_attr*) ;
 int FUNC_1 (struct ibv_cq_ex*) ;
 int FUNC_2 (int ,struct ibv_context*,int ,int ) ;

struct ibv_cq_ex *FUNC_3(struct ibv_context *VAR_1,
          struct ibv_cq_init_attr_ex *VAR_2,
          struct mlx5dv_cq_init_attr *VAR_3)
{
 struct ibv_cq_ex *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(FUNC_1(VAR_4), VAR_1,
        VAR_2->channel, VAR_2->cq_context);
 return VAR_4;
}
