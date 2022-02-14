
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_qp_init_attr_ex {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_qp_init_attr {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_qp {int dummy; } ;
struct ibv_pd {int context; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_qp_init_attr_ex*,struct ibv_qp_init_attr_ex*,int) ;
 struct ibv_qp* FUNC_1 (int ,struct ibv_qp_init_attr_ex*) ;

struct ibv_qp *FUNC_2(struct ibv_pd *VAR_1, struct ibv_qp_init_attr *VAR_2)
{
 struct ibv_qp_init_attr_ex VAR_3;
 struct ibv_qp *VAR_4;

 FUNC_0(&VAR_3, VAR_2, sizeof *VAR_2);
 VAR_3.comp_mask = VAR_0;
 VAR_3.pd = VAR_1;
 VAR_4 = FUNC_1(VAR_1->context, &VAR_3);
 if (VAR_4)
  FUNC_0(VAR_2, &VAR_3, sizeof *VAR_2);
 return VAR_4;
}
