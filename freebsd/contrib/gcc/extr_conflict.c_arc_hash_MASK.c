
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hashval_t ;
typedef TYPE_1__* const_conflict_graph_arc ;
struct TYPE_2__ {int larger; int smaller; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  const_conflict_graph_arc VAR_1 = (const_conflict_graph_arc) VAR_0;

  return FUNC_0 (VAR_1->smaller, VAR_1->larger);
}
