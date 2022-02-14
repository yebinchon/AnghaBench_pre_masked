
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_node_iter {int curnode; int node_map; } ;


 int FUNC_0 (int ,unsigned long*,int) ;

__attribute__((used)) static inline void FUNC_1(unsigned long *VAR_0,
          struct dlm_node_iter *VAR_1)
{
 FUNC_0(VAR_1->node_map, VAR_0, sizeof(VAR_1->node_map));
 VAR_1->curnode = -1;
}
