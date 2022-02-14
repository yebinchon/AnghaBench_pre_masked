
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ seen; struct TYPE_3__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_4__ {TYPE_1__* head; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  thread_info *VAR_1;

  for (VAR_1 = VAR_0.head; VAR_1; VAR_1 = VAR_1->next)
    {
      VAR_1->seen = 0;
    }
}
