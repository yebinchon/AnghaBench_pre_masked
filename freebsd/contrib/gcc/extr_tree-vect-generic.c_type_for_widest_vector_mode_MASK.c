
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_3__* optab ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int (* type_for_mode ) (int,int) ;} ;
struct TYPE_9__ {TYPE_1__ types; } ;
struct TYPE_8__ {TYPE_2__* handlers; } ;
struct TYPE_7__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static tree
FUNC_5 (enum machine_mode VAR_6, optab VAR_7)
{
  enum machine_mode VAR_8 = VAR_4, VAR_9;
  int VAR_10 = 0;

  if (FUNC_3 (VAR_6))
    VAR_9 = VAR_1;
  else
    VAR_9 = VAR_2;

  for (; VAR_9 != VAR_4; VAR_9 = FUNC_2 (VAR_9))
    if (FUNC_0 (VAR_9) == VAR_6
        && FUNC_1 (VAR_9) > VAR_10
 && VAR_7->handlers[VAR_9].insn_code != VAR_0)
      VAR_8 = VAR_9, VAR_10 = FUNC_1 (VAR_9);

  if (VAR_8 == VAR_4)
    return VAR_3;
  else
    return VAR_5.types.type_for_mode (VAR_8, 1);
}
