
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; int alignment; } ;
typedef TYPE_1__ align_stack ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_0)
    {
      align_stack *VAR_2 = VAR_0;

      VAR_1 = VAR_2->alignment;
      VAR_0 = VAR_2->prev;
      FUNC_1 (VAR_2);
    }
  else
    FUNC_0 ("too many #pragma options align=reset");
}
