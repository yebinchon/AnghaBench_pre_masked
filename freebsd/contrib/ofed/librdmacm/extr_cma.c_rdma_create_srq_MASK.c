
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ qp_type; } ;
struct ibv_srq_init_attr_ex {int comp_mask; struct ibv_pd* pd; int srq_type; } ;
struct ibv_srq_init_attr {int comp_mask; struct ibv_pd* pd; int srq_type; } ;
struct ibv_pd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibv_srq_init_attr_ex*,struct ibv_srq_init_attr_ex*,int) ;
 int FUNC_1 (struct rdma_cm_id*,struct ibv_srq_init_attr_ex*) ;

int FUNC_2(struct rdma_cm_id *VAR_5, struct ibv_pd *VAR_6,
      struct ibv_srq_init_attr *VAR_7)
{
 struct ibv_srq_init_attr_ex VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, VAR_7, sizeof(*VAR_7));
 VAR_8.comp_mask = VAR_4 | VAR_3;
 if (VAR_5->qp_type == VAR_0) {
  VAR_8.srq_type = VAR_2;
 } else {
  VAR_8.srq_type = VAR_1;
 }
 VAR_8.pd = VAR_6;
 VAR_9 = FUNC_1(VAR_5, &VAR_8);
 FUNC_0(VAR_7, &VAR_8, sizeof(*VAR_7));
 return VAR_9;
}
