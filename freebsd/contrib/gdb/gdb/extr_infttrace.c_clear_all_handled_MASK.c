
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handled; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {TYPE_1__* head; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  thread_info *VAR_3;






  for (VAR_3 = VAR_2.head; VAR_3; VAR_3 = VAR_3->next)
    {
      VAR_3->handled = 0;
    }

  for (VAR_3 = VAR_1.head; VAR_3; VAR_3 = VAR_3->next)
    {
      VAR_3->handled = 0;
    }
}
