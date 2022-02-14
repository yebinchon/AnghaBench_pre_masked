
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topo_info {int visited; } ;
typedef int constraint_graph_t ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,struct topo_info*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (constraint_graph_t VAR_2,
      struct topo_info *VAR_3)
{
  unsigned int VAR_4;
  unsigned int VAR_5 = FUNC_1 (VAR_0, VAR_1);

  for (VAR_4 = 0; VAR_4 != VAR_5; ++VAR_4)
    if (!FUNC_0 (VAR_3->visited, VAR_4) && FUNC_2 (VAR_4) == VAR_4)
      FUNC_3 (VAR_2, VAR_3, VAR_4);
}
