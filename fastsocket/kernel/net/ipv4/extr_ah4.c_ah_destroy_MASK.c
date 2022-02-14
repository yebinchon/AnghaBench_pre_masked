
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct ah_data* data; } ;
struct ah_data {int tfm; struct ah_data* work_icv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ah_data*) ;

__attribute__((used)) static void FUNC_2(struct xfrm_state *VAR_0)
{
 struct ah_data *VAR_1 = VAR_0->data;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1->work_icv);
 FUNC_0(VAR_1->tfm);
 FUNC_1(VAR_1);
}
