
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct function {TYPE_1__* eh; } ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {int (* eh_return_filter_mode ) () ;} ;
struct TYPE_3__ {scalar_t__ filter; } ;


 struct function* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

rtx
FUNC_2 (struct function *VAR_2)
{
  rtx VAR_3 = VAR_2->eh->filter;
  if (VAR_2 == VAR_0 && ! VAR_3)
    {
      VAR_3 = FUNC_0 (VAR_1.eh_return_filter_mode ());
      VAR_2->eh->filter = VAR_3;
    }
  return VAR_3;
}
