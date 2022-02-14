
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_create_cq_resp {int cqn; int ibv_resp; } ;
struct mlx4_create_cq {uintptr_t buf_addr; uintptr_t db_addr; int ibv_cmd; } ;
struct TYPE_2__ {scalar_t__ buf; } ;
struct mlx4_cq {int cqn; int ibv_cq; scalar_t__ set_ci_db; TYPE_1__ buf; } ;
struct ibv_cq_init_attr_ex {int comp_vector; int channel; int cqe; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int FUNC_0 (struct ibv_context*,int ,int ,int ,int ,int *,int,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ibv_context *VAR_0,
         struct ibv_cq_init_attr_ex *VAR_1,
         struct mlx4_cq *VAR_2)
{
 struct mlx4_create_cq VAR_3 = {};
 struct mlx4_create_cq_resp VAR_4 = {};
 int VAR_5;

 VAR_3.buf_addr = (uintptr_t) VAR_2->buf.buf;
 VAR_3.db_addr = (uintptr_t) VAR_2->set_ci_db;

 VAR_5 = FUNC_0(VAR_0, VAR_1->cqe, VAR_1->channel,
    VAR_1->comp_vector,
    FUNC_1(&VAR_2->ibv_cq),
    &VAR_3.ibv_cmd, sizeof(VAR_3),
    &VAR_4.ibv_resp, sizeof(VAR_4));
 if (!VAR_5)
  VAR_2->cqn = VAR_4.cqn;

 return VAR_5;

}
