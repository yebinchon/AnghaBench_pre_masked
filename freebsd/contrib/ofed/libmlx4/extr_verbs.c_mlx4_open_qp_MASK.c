
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_qp {int dummy; } ;
struct TYPE_2__ {struct ibv_qp qp; } ;
struct mlx4_qp {TYPE_1__ verbs_qp; } ;
struct ibv_qp_open_attr {int dummy; } ;
struct ibv_open_qp {int dummy; } ;
struct ibv_create_qp_resp {int dummy; } ;
struct ibv_context {int dummy; } ;


 struct mlx4_qp* FUNC_0 (int,int) ;
 int FUNC_1 (struct mlx4_qp*) ;
 int FUNC_2 (struct ibv_context*,TYPE_1__*,int,struct ibv_qp_open_attr*,struct ibv_open_qp*,int,struct ibv_create_qp_resp*,int) ;

struct ibv_qp *FUNC_3(struct ibv_context *VAR_0, struct ibv_qp_open_attr *VAR_1)
{
 struct ibv_open_qp VAR_2;
 struct ibv_create_qp_resp VAR_3;
 struct mlx4_qp *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(1, sizeof *VAR_4);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_0, &VAR_4->verbs_qp, sizeof(VAR_4->verbs_qp), VAR_1,
         &VAR_2, sizeof VAR_2, &VAR_3, sizeof VAR_3);
 if (VAR_5)
  goto err;

 return &VAR_4->verbs_qp.qp;

err:
 FUNC_1(VAR_4);
 return ((void*)0);
}
