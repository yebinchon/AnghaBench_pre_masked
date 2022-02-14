
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_node_iter {int curnode; int node_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct dlm_node_iter *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_2->node_map, VAR_1, VAR_2->curnode+1);
 if (VAR_3 >= VAR_1) {
  VAR_2->curnode = VAR_1;
  return -VAR_0;
 }
 VAR_2->curnode = VAR_3;
 return VAR_3;
}
