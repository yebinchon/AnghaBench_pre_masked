
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function {TYPE_1__* eh; } ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ exc_ptr; } ;


 struct function* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;

rtx
FUNC_1 (struct function *VAR_2)
{
  rtx VAR_3 = VAR_2->eh->exc_ptr;
  if (VAR_2 == VAR_0 && ! VAR_3)
    {
      VAR_3 = FUNC_0 (VAR_1);
      VAR_2->eh->exc_ptr = VAR_3;
    }
  return VAR_3;
}
