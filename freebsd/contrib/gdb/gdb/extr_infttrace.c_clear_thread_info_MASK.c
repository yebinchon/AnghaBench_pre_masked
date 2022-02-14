
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_7__ {scalar_t__ count; int * head_pseudo; TYPE_1__* head; } ;
struct TYPE_6__ {scalar_t__ count; int * head_pseudo; TYPE_1__* head; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  thread_info *VAR_4;
  thread_info *VAR_5;






  VAR_4 = VAR_3.head;
  while (VAR_4)
    {
      VAR_5 = VAR_4;
      VAR_4 = VAR_4->next;
      FUNC_1 (VAR_5);
    }

  VAR_3.head = ((void*)0);
  VAR_3.head_pseudo = ((void*)0);
  VAR_3.count = 0;

  VAR_4 = VAR_1.head;
  while (VAR_4)
    {
      VAR_5 = VAR_4;
      VAR_4 = VAR_4->next;
      FUNC_1 (VAR_5);
    }

  VAR_1.head = ((void*)0);
  VAR_1.head_pseudo = ((void*)0);
  VAR_1.count = 0;



  VAR_2 = 0;
}
