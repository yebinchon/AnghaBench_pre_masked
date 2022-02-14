
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tube_res_list {struct tube_res_list* buf; struct tube_res_list* next; } ;
struct tube {int * res_last; struct tube_res_list* res_list; int * res_com; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tube_res_list*) ;

void FUNC_2(struct tube* VAR_0)
{
 if(VAR_0->res_com) {
  FUNC_0(VAR_0->res_com);
  VAR_0->res_com = ((void*)0);
 }
 if(VAR_0->res_list) {
  struct tube_res_list* VAR_1, *VAR_2 = VAR_0->res_list;
  VAR_0->res_list = ((void*)0);
  VAR_0->res_last = ((void*)0);
  while(VAR_2) {
   VAR_1 = VAR_2->next;
   FUNC_1(VAR_2->buf);
   FUNC_1(VAR_2);
   VAR_2 = VAR_1;
  }
 }
}
