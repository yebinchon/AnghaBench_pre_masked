
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ IAL_ADAPTER_T ;


 TYPE_1__* VAR_0 ;

int FUNC_0(void)
{
 IAL_ADAPTER_T *VAR_1 = VAR_0;
 int VAR_2 = 0;

 while(VAR_1 != ((void*)0))
 {
  VAR_2++;
  VAR_1 = VAR_1->next;
 }

 return VAR_2;
}
