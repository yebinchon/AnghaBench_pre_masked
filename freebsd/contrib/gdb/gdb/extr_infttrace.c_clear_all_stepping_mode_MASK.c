
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* stepping_mode; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {TYPE_1__* head; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  thread_info *VAR_4;






  for (VAR_4 = VAR_3.head; VAR_4; VAR_4 = VAR_4->next)
    {
      VAR_4->stepping_mode = VAR_0;
    }

  for (VAR_4 = VAR_2.head; VAR_4; VAR_4 = VAR_4->next)
    {
      VAR_4->stepping_mode = VAR_0;
    }
}
