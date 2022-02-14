
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tid; int terminated; struct TYPE_4__* next_pseudo; scalar_t__ am_pseudo; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ lwpid_t ;
struct TYPE_6__ {TYPE_1__* head_pseudo; int count; TYPE_1__* head; } ;
struct TYPE_5__ {scalar_t__ count; TYPE_1__* head; TYPE_1__* head_pseudo; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (lwpid_t VAR_3)
{
  thread_info *VAR_4;
  thread_info *VAR_5;

  if (VAR_2.count <= 0)
    {
      FUNC_0 ("Internal error in thread database.");
      return;
    }

  VAR_5 = ((void*)0);
  for (VAR_4 = VAR_2.head; VAR_4; VAR_4 = VAR_4->next)
    {
      if (VAR_4->tid == VAR_3)
 {






   if (VAR_4->am_pseudo)
     {
       thread_info *VAR_6;
       thread_info *VAR_7;

       VAR_7 = ((void*)0);
       for (VAR_6 = VAR_2.head_pseudo; VAR_6; VAR_6 = VAR_6->next)
  {
    if (VAR_6 == VAR_4)
      {


        if (VAR_7 == ((void*)0))
   VAR_2.head_pseudo = VAR_4->next_pseudo;
        else
   VAR_7->next = VAR_4->next_pseudo;
      }
    else
      VAR_7 = VAR_6;
  }
     }



   VAR_2.count--;

   if (((void*)0) == VAR_5)
     VAR_2.head = VAR_4->next;
   else
     VAR_5->next = VAR_4->next;



   VAR_4->next = VAR_1.head;
   VAR_1.head = VAR_4;
   VAR_1.count++;
   if (VAR_4->am_pseudo)
     {
       VAR_4->next_pseudo = VAR_1.head_pseudo;
       VAR_1.head_pseudo = VAR_4;
     }
   VAR_4->terminated = 1;

   return;
 }

      else
 VAR_5 = VAR_4;
    }
}
