
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cluster {size_t highest_node; size_t highest_slave; struct cluster* nodes; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cluster*) ;
 int FUNC_1 (struct cluster) ;

void FUNC_2(struct cluster *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1)
  return;
 for (VAR_2 = 1; VAR_2 <= VAR_1->highest_node; VAR_2++) {
  FUNC_1(VAR_1->nodes[VAR_2]);
 }
 for (VAR_2 = VAR_0; VAR_2 <= VAR_1->highest_slave; VAR_2++) {
  FUNC_1(VAR_1->nodes[VAR_2]);
 }
 FUNC_0(VAR_1->nodes);
 FUNC_0(VAR_1);
}
