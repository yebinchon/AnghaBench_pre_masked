
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {int addr; } ;
struct cluster {size_t highest_node; struct tipc_node** nodes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_2 (int ) ;

void FUNC_3(struct cluster *VAR_2, struct tipc_node *VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_3->addr);
 u32 VAR_5 = VAR_1;

 if (FUNC_1(VAR_3->addr))
  VAR_5 = VAR_0;
 FUNC_0(VAR_4 > 0);
 FUNC_0(VAR_4 <= VAR_5);
 FUNC_0(VAR_2->nodes[VAR_4] == ((void*)0));
 VAR_2->nodes[VAR_4] = VAR_3;
 if (VAR_4 > VAR_2->highest_node)
  VAR_2->highest_node = VAR_4;
}
