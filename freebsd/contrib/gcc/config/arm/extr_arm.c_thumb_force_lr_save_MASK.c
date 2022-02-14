
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int lr_save_eliminated; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static bool
FUNC_2 (void)
{
  return !VAR_1->machine->lr_save_eliminated
  && (!FUNC_0 ()
      || FUNC_1 ()
      || VAR_2 [VAR_0]);
}
