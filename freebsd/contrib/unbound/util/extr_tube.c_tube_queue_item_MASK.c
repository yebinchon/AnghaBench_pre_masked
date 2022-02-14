
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tube_res_list {size_t len; struct tube_res_list* next; int * buf; } ;
struct tube {int res_com; struct tube_res_list* res_last; struct tube_res_list* res_list; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct tube* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
 struct tube_res_list* VAR_3;
 if(!VAR_0 || !VAR_0->res_com) return 0;
 VAR_3 = (struct tube_res_list*)FUNC_3(sizeof(*VAR_3));
 if(!VAR_3) {
  FUNC_1(VAR_1);
  FUNC_2("out of memory for async answer");
  return 0;
 }
 VAR_3->buf = VAR_1;
 VAR_3->len = VAR_2;
 VAR_3->next = ((void*)0);

 if(VAR_0->res_last)
  VAR_0->res_last->next = VAR_3;
 else VAR_0->res_list = VAR_3;
 VAR_0->res_last = VAR_3;
 if(VAR_0->res_list == VAR_0->res_last) {

  FUNC_0(VAR_0->res_com, -1, -1);
 }
 return 1;
}
