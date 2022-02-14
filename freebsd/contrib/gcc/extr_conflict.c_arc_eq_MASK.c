
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* const_conflict_graph_arc ;
struct TYPE_2__ {scalar_t__ smaller; scalar_t__ larger; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const_conflict_graph_arc VAR_2 = (const_conflict_graph_arc) VAR_0;
  const_conflict_graph_arc VAR_3 = (const_conflict_graph_arc) VAR_1;

  return VAR_2->smaller == VAR_3->smaller && VAR_2->larger == VAR_3->larger;
}
