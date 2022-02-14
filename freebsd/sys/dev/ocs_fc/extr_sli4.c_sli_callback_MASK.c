
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os; void* fip_arg; void* fip; void* link_arg; void* link; } ;
typedef TYPE_1__ sli4_t ;
typedef int sli4_callback_e ;
typedef int int32_t ;




 int VAR_0 ;
 int FUNC_0 (int *,char*,TYPE_1__*,int,void*) ;
 int FUNC_1 (int ,char*,int) ;

int32_t
FUNC_2(sli4_t *VAR_1, sli4_callback_e VAR_2, void *VAR_3, void *VAR_4)
{

 if (!VAR_1 || !VAR_3 || (VAR_2 >= VAR_0)) {
  FUNC_0(((void*)0), "bad parameter sli4=%p which=%#x func=%p\n",
       VAR_1, VAR_2, VAR_3);
  return -1;
 }

 switch (VAR_2) {
 case 128:
  VAR_1->link = VAR_3;
  VAR_1->link_arg = VAR_4;
  break;
 case 129:
  VAR_1->fip = VAR_3;
  VAR_1->fip_arg = VAR_4;
  break;
 default:
  FUNC_1(VAR_1->os, "unknown callback %#x\n", VAR_2);
  return -1;
 }

 return 0;
}
