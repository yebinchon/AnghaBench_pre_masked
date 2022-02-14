
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {int addr; int * links; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tipc_node*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tipc_node *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0("node %x deleted\n", VAR_1->addr);
 FUNC_1(VAR_1);
}
