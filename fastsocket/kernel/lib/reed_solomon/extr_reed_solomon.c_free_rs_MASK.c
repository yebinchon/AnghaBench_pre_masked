
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_control {struct rs_control* genpoly; struct rs_control* index_of; struct rs_control* alpha_to; int list; int users; } ;


 int FUNC_0 (struct rs_control*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct rs_control *VAR_1)
{
 FUNC_2(&VAR_0);
 VAR_1->users--;
 if(!VAR_1->users) {
  FUNC_1(&VAR_1->list);
  FUNC_0(VAR_1->alpha_to);
  FUNC_0(VAR_1->index_of);
  FUNC_0(VAR_1->genpoly);
  FUNC_0(VAR_1);
 }
 FUNC_3(&VAR_0);
}
