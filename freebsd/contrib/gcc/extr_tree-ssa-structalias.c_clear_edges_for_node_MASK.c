
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_3__ {scalar_t__* succs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (constraint_graph_t VAR_0, unsigned int VAR_1)
{
  if (VAR_0->succs[VAR_1])
    FUNC_0 (VAR_0->succs[VAR_1]);
}
