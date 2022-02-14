
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* saved_exitset; struct TYPE_7__* saved_entryset; struct TYPE_7__* next; } ;
typedef TYPE_1__ procinfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (procinfo **VAR_0, procinfo *VAR_1)
{
  procinfo *VAR_2;


  if (VAR_1 == *VAR_0)
    *VAR_0 = VAR_1->next;
  else
    for (VAR_2 = *VAR_0; VAR_2; VAR_2 = VAR_2->next)
      if (VAR_2->next == VAR_1)
 {
   VAR_2->next = VAR_1->next;
   break;
 }


  FUNC_0 (VAR_1);





  FUNC_2 (VAR_1->saved_entryset);
  FUNC_2 (VAR_1->saved_exitset);
  FUNC_2 (VAR_1);
}
