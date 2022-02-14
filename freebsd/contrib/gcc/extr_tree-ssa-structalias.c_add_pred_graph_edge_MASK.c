
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_3__ {scalar_t__* preds; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (constraint_graph_t VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
  if (!VAR_1->preds[VAR_2])
    VAR_1->preds[VAR_2] = FUNC_0 (&VAR_0);
  if (!FUNC_1 (VAR_1->preds[VAR_2], VAR_3))
    FUNC_2 (VAR_1->preds[VAR_2], VAR_3);
}
