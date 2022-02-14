
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {size_t addr; } ;
struct cluster {size_t highest_node; struct tipc_node** nodes; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct tipc_node*) ;

u32 FUNC_2(struct cluster *VAR_0, u32 VAR_1)
{
 struct tipc_node *VAR_2;
 u32 VAR_3 = FUNC_0(VAR_1) + 1;

 if (!VAR_0)
  return VAR_1;
 for (; VAR_3 <= VAR_0->highest_node; VAR_3++) {
  VAR_2 = VAR_0->nodes[VAR_3];
  if (VAR_2 && FUNC_1(VAR_2))
   return VAR_2->addr;
 }
 for (VAR_3 = 1; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_2 = VAR_0->nodes[VAR_3];
  if (VAR_2 && FUNC_1(VAR_2))
   return VAR_2->addr;
 }
 return 0;
}
