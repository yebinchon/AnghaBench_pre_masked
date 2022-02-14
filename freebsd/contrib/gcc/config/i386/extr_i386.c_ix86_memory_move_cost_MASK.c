
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int* fp_load; int* fp_store; int* sse_load; int* sse_store; int* mmx_load; int* mmx_store; int* int_load; int movzbl_load; int* int_store; } ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 TYPE_1__* VAR_2 ;

int
FUNC_5 (enum machine_mode VAR_3, enum reg_class VAR_4, int VAR_5)
{
  if (FUNC_0 (VAR_4))
    {
      int VAR_6;
      switch (VAR_3)
 {
   case 129:
     VAR_6 = 0;
     break;
   case 130:
     VAR_6 = 1;
     break;
   case 128:
     VAR_6 = 2;
     break;
   default:
     return 100;
 }
      return VAR_5 ? VAR_2->fp_load [VAR_6] : VAR_2->fp_store [VAR_6];
    }
  if (FUNC_4 (VAR_4))
    {
      int VAR_7;
      switch (FUNC_1 (VAR_3))
 {
   case 4:
     VAR_7 = 0;
     break;
   case 8:
     VAR_7 = 1;
     break;
   case 16:
     VAR_7 = 2;
     break;
   default:
     return 100;
 }
      return VAR_5 ? VAR_2->sse_load [VAR_7] : VAR_2->sse_store [VAR_7];
    }
  if (FUNC_2 (VAR_4))
    {
      int VAR_8;
      switch (FUNC_1 (VAR_3))
 {
   case 4:
     VAR_8 = 0;
     break;
   case 8:
     VAR_8 = 1;
     break;
   default:
     return 100;
 }
      return VAR_5 ? VAR_2->mmx_load [VAR_8] : VAR_2->mmx_store [VAR_8];
    }
  switch (FUNC_1 (VAR_3))
    {
      case 1:
 if (VAR_5)
   return (FUNC_3 (VAR_4) ? VAR_2->int_load[0]
    : VAR_2->movzbl_load);
 else
   return (FUNC_3 (VAR_4) ? VAR_2->int_store[0]
    : VAR_2->int_store[0] + 4);
 break;
      case 2:
 return VAR_5 ? VAR_2->int_load[1] : VAR_2->int_store[1];
      default:

 if (VAR_3 == VAR_0)
   VAR_3 = 128;
 return ((VAR_5 ? VAR_2->int_load[2] : VAR_2->int_store[2])
  * (((int) FUNC_1 (VAR_3)
      + VAR_1 - 1) / VAR_1));
    }
}
