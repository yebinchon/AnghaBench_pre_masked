
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct ibv_pd* pd; } ;
struct ibv_qp_init_attr_ex {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_qp_init_attr {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_pd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_qp_init_attr_ex*,struct ibv_qp_init_attr_ex*,int) ;
 int FUNC_1 (struct rdma_cm_id*,struct ibv_qp_init_attr_ex*) ;

int FUNC_2(struct rdma_cm_id *VAR_1, struct ibv_pd *VAR_2,
     struct ibv_qp_init_attr *VAR_3)
{
 struct ibv_qp_init_attr_ex VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, VAR_3, sizeof(*VAR_3));
 VAR_4.comp_mask = VAR_0;
 VAR_4.pd = VAR_2 ? VAR_2 : VAR_1->pd;
 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 FUNC_0(VAR_3, &VAR_4, sizeof(*VAR_3));
 return VAR_5;
}
