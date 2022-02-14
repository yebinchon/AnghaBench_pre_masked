
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int dummy; } ;
struct cluster {int highest_node; struct tipc_node** nodes; int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tipc_node*) ;

struct tipc_node *FUNC_3(struct cluster *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_0;
 u32 VAR_5;

 FUNC_0(!FUNC_1(VAR_1->addr));
 if (!VAR_1->highest_node)
  return ((void*)0);


 while (VAR_4 > VAR_1->highest_node) {
  VAR_4 >>= 1;
 }
 VAR_5 = (VAR_2 & VAR_4) ? VAR_2 & VAR_4 : 1u;
 FUNC_0(VAR_5 <= VAR_1->highest_node);


 for (VAR_3 = VAR_5; VAR_3 <= VAR_1->highest_node; VAR_3++) {
  if (FUNC_2(VAR_1->nodes[VAR_3]))
   return VAR_1->nodes[VAR_3];
 }
 for (VAR_3 = 1; VAR_3 < VAR_5; VAR_3++) {
  if (FUNC_2(VAR_1->nodes[VAR_3]))
   return VAR_1->nodes[VAR_3];
 }
 return ((void*)0);
}
