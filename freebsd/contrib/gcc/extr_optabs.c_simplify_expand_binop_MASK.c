
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* optab ;
typedef enum optab_methods { ____Placeholder_optab_methods } optab_methods ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {int code; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_3 (enum machine_mode VAR_0, optab VAR_1,
         rtx VAR_2, rtx VAR_3, rtx VAR_4, int VAR_5,
         enum optab_methods VAR_6)
{
  if (FUNC_0 (VAR_2) && FUNC_0 (VAR_3))
    {
      rtx VAR_7 = FUNC_2 (VAR_1->code, VAR_0, VAR_2, VAR_3);

      if (VAR_7)
 return VAR_7;
    }

  return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
