
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct ipcomp_data* data; } ;
struct ipcomp_data {int dummy; } ;


 int FUNC_0 (struct ipcomp_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct ipcomp_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfrm_state*) ;

void FUNC_5(struct xfrm_state *VAR_1)
{
 struct ipcomp_data *VAR_2 = VAR_1->data;
 if (!VAR_2)
  return;
 FUNC_4(VAR_1);
 FUNC_2(&VAR_0);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_0);
 FUNC_1(VAR_2);
}
