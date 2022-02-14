
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {struct ds_qp* qp_list; } ;
struct ds_qp {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct rsocket *VAR_0, struct ds_qp *VAR_1)
{
 if (!VAR_0->qp_list)
  FUNC_0(&VAR_1->list);
 else
  FUNC_1(&VAR_1->list, &VAR_0->qp_list->list);
 VAR_0->qp_list = VAR_1;
}
