
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scc_info {int visited; } ;
typedef TYPE_1__* constraint_graph_t ;
struct TYPE_4__ {unsigned int size; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct scc_info*) ;
 struct scc_info* FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_1__*,struct scc_info*,unsigned int) ;

__attribute__((used)) static void
FUNC_6 (constraint_graph_t VAR_1)
{
  unsigned int VAR_2;
  unsigned int VAR_3 = VAR_1->size;
  struct scc_info *VAR_4 = FUNC_4 (VAR_3);

  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0, VAR_3); VAR_2 ++ )
    if (!FUNC_1 (VAR_4->visited, VAR_2) && FUNC_2 (VAR_2) == VAR_2)
      FUNC_5 (VAR_1, VAR_4, VAR_2);

  FUNC_3 (VAR_4);
}
