
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_5__ {int num_implicit_edges; } ;
struct TYPE_4__ {scalar_t__* implicit_preds; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (constraint_graph_t VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
  if (VAR_3 == VAR_4)
    return;

  if (!VAR_2->implicit_preds[VAR_3])
    VAR_2->implicit_preds[VAR_3] = FUNC_0 (&VAR_0);

  if (!FUNC_1 (VAR_2->implicit_preds[VAR_3], VAR_4))
    {
      VAR_1.num_implicit_edges++;
      FUNC_2 (VAR_2->implicit_preds[VAR_3], VAR_4);
    }
}
