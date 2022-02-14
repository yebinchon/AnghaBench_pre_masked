
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void register_t ;
struct TYPE_4__ {int zero; } ;
struct TYPE_3__ {void* pcb_context; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (int) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;

void *
FUNC_1(int VAR_10, size_t *VAR_11)
{

  *VAR_11 = FUNC_0(VAR_10);
  if (VAR_9 == VAR_6) {
  register_t *VAR_12 = &VAR_7->zero;
  return VAR_12 + VAR_10;
 }

 switch (VAR_10) {



 case 16:
 case 17:
 case 18:
 case 19:
 case 20:
 case 21:
 case 22:
 case 23:
   return (&VAR_8->pcb_context[VAR_3 + VAR_10 - 16]);
 case 28:
  return (&VAR_8->pcb_context[VAR_0]);
 case 29:
  return (&VAR_8->pcb_context[VAR_5]);
 case 30:
  return (&VAR_8->pcb_context[VAR_4]);
 case 31:
  return (&VAR_8->pcb_context[VAR_2]);
 case 37:
  return (&VAR_8->pcb_context[VAR_1]);
 }
 return (((void*)0));
}
