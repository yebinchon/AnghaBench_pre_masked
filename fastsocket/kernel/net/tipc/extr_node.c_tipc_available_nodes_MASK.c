
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_node {int addr; struct tipc_node* next; } ;


 int FUNC_0 (scalar_t__ const,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct tipc_node*) ;
 struct tipc_node* VAR_1 ;

u32 FUNC_4(const u32 VAR_2)
{
 struct tipc_node *VAR_3;
 u32 VAR_4 = 0;

 FUNC_1(&VAR_0);
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (!FUNC_0(VAR_2, VAR_3->addr))
   continue;
  if (FUNC_3(VAR_3))
   VAR_4++;
 }
 FUNC_2(&VAR_0);
 return VAR_4;
}
