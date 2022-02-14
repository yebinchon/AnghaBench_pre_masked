
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_qp_init_attr_ex {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_qp_init_attr {struct ibv_pd* pd; int comp_mask; } ;
struct ibv_qp {int dummy; } ;
struct ibv_pd {int context; } ;
typedef int attrx ;


 int VAR_0 ;
 struct ibv_qp* FUNC_0 (int ,struct ibv_qp_init_attr_ex*) ;
 int FUNC_1 (struct ibv_qp_init_attr_ex*,struct ibv_qp_init_attr_ex*,int) ;
 int FUNC_2 (struct ibv_qp_init_attr_ex*,int ,int) ;

struct ibv_qp *FUNC_3(struct ibv_pd *VAR_1,
         struct ibv_qp_init_attr *VAR_2)
{
 struct ibv_qp *VAR_3;
 struct ibv_qp_init_attr_ex VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_4, VAR_2, sizeof(*VAR_2));
 VAR_4.comp_mask = VAR_0;
 VAR_4.pd = VAR_1;
 VAR_3 = FUNC_0(VAR_1->context, &VAR_4);
 if (VAR_3)
  FUNC_1(VAR_2, &VAR_4, sizeof(*VAR_2));

 return VAR_3;
}
