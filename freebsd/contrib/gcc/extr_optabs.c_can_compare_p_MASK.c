
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum can_compare_purpose { ____Placeholder_can_compare_purpose } can_compare_purpose ;
struct TYPE_16__ {TYPE_1__* handlers; } ;
struct TYPE_15__ {TYPE_2__* handlers; } ;
struct TYPE_14__ {TYPE_4__* handlers; } ;
struct TYPE_13__ {TYPE_3__* handlers; } ;
struct TYPE_12__ {scalar_t__ insn_code; } ;
struct TYPE_11__ {scalar_t__ insn_code; } ;
struct TYPE_10__ {scalar_t__ insn_code; } ;
struct TYPE_9__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int ** VAR_2 ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 scalar_t__* VAR_10 ;

int
FUNC_1 (enum rtx_code VAR_11, enum machine_mode VAR_12,
        enum can_compare_purpose VAR_13)
{
  do
    {
      if (VAR_8->handlers[(int) VAR_12].insn_code != VAR_0)
 {
   if (VAR_13 == VAR_5)
     return VAR_2[(int) VAR_11] != ((void*)0);
   else if (VAR_13 == VAR_6)
     return VAR_10[(int) VAR_11] != VAR_0;
   else

     return 1;
 }
      if (VAR_13 == VAR_5
   && VAR_3->handlers[(int) VAR_12].insn_code != VAR_0)
 return 1;
      if (VAR_13 == VAR_4
   && VAR_7->handlers[(int) VAR_12].insn_code != VAR_0)
 return 1;
      if (VAR_13 == VAR_6
   && VAR_9->handlers[(int) VAR_12].insn_code != VAR_0)
 return 1;
      VAR_12 = FUNC_0 (VAR_12);
    }
  while (VAR_12 != VAR_1);

  return 0;
}
