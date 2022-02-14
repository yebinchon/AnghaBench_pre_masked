
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* register_t ;
struct TYPE_4__ {void* tf_eip; } ;
struct TYPE_3__ {void* pcb_eip; } ;



 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void
FUNC_0(int VAR_4, void *VAR_5)
{

 switch (VAR_4) {
 case 128:
  VAR_2->pcb_eip = *(register_t *)VAR_5;
  if (VAR_3 == VAR_0)
   VAR_1->tf_eip = *(register_t *)VAR_5;
 }
}
