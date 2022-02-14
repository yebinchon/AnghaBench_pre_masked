
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bpstat ;
struct TYPE_3__ {int * old_val; int commands; struct TYPE_3__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2 (bpstat VAR_0)
{
  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      FUNC_0 (&VAR_0->commands);
      if (VAR_0->old_val != ((void*)0))
 {
   FUNC_1 (VAR_0->old_val);
   VAR_0->old_val = ((void*)0);
 }
    }
}
