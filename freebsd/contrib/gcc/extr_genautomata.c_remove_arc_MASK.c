
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef TYPE_2__* arc_t ;
struct TYPE_8__ {struct TYPE_8__* next_out_arc; } ;
struct TYPE_7__ {int num_out_arcs; TYPE_2__* first_out_arc; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2 (state_t VAR_0, arc_t VAR_1)
{
  arc_t VAR_2;
  arc_t VAR_3;

  FUNC_1 (VAR_1);
  for (VAR_2 = ((void*)0), VAR_3 = VAR_0->first_out_arc;
       VAR_3 != ((void*)0);
       VAR_2 = VAR_3, VAR_3 = VAR_3->next_out_arc)
    if (VAR_3 == VAR_1)
      break;
  FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    VAR_0->first_out_arc = VAR_1->next_out_arc;
  else
    VAR_2->next_out_arc = VAR_1->next_out_arc;
  VAR_0->num_out_arcs--;
  FUNC_0 (VAR_1);
}
