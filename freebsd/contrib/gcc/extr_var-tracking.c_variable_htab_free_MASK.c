
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* variable ;
typedef TYPE_2__* location_chain ;
struct TYPE_6__ {scalar_t__ refcount; int n_var_parts; TYPE_1__* var_part; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* loc_chain; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void *VAR_2)
{
  int VAR_3;
  variable VAR_4 = (variable) VAR_2;
  location_chain VAR_5, VAR_6;

  FUNC_0 (VAR_4->refcount > 0);

  VAR_4->refcount--;
  if (VAR_4->refcount > 0)
    return;

  for (VAR_3 = 0; VAR_3 < VAR_4->n_var_parts; VAR_3++)
    {
      for (VAR_5 = VAR_4->var_part[VAR_3].loc_chain; VAR_5; VAR_5 = VAR_6)
 {
   VAR_6 = VAR_5->next;
   FUNC_1 (VAR_0, VAR_5);
 }
      VAR_4->var_part[VAR_3].loc_chain = ((void*)0);
    }
  FUNC_1 (VAR_1, VAR_4);
}
