
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_4__ {scalar_t__* label; unsigned int size; int* eq_rep; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,unsigned int,int) ;
 scalar_t__ FUNC_2 (int,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_3 (constraint_graph_t VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{





  if (VAR_1->label[VAR_0 + VAR_2] == 0)
    {
      FUNC_0 (VAR_3 < VAR_1->size);

      if (VAR_1->eq_rep[VAR_3] != -1)
 {

   if (FUNC_2 (VAR_1->eq_rep[VAR_3], VAR_2))
     FUNC_1 (VAR_1, VAR_1->eq_rep[VAR_3], VAR_2, 0);
   return VAR_1->eq_rep[VAR_3];
 }
      else
 {
   VAR_1->eq_rep[VAR_3] = VAR_2;
 }
    }
  return VAR_2;
}
