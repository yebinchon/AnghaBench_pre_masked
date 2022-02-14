
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_5__ {int* indirect_cycles; scalar_t__* succs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_6 (constraint_graph_t VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
  if (VAR_1->indirect_cycles[VAR_3] != -1)
    {






      if (VAR_1->indirect_cycles[VAR_2] == -1)
 {
   VAR_1->indirect_cycles[VAR_2] = VAR_1->indirect_cycles[VAR_3];
 }
      else
 {
   unsigned int VAR_4 = FUNC_3 (VAR_1->indirect_cycles[VAR_2]);
   unsigned int VAR_5 = FUNC_3 (VAR_1->indirect_cycles[VAR_3]);

   if (FUNC_5 (VAR_4, VAR_5))
     FUNC_4 (VAR_1, VAR_4, VAR_5, 1);
 }
    }


  if (VAR_1->succs[VAR_3])
    {
      if (!VAR_1->succs[VAR_2])
 VAR_1->succs[VAR_2] = FUNC_0 (&VAR_0);
      FUNC_1 (VAR_1->succs[VAR_2],
         VAR_1->succs[VAR_3]);
    }

  FUNC_2 (VAR_1, VAR_3);
}
