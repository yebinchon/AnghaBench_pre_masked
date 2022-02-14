
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int* routers; int last_router; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct tipc_node *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);

 VAR_1->routers[VAR_3 / 32] =
  ((1 << (VAR_3 % 32)) | VAR_1->routers[VAR_3 / 32]);
 VAR_1->last_router = VAR_0 / 32;
 while ((--VAR_1->last_router >= 0) &&
        !VAR_1->routers[VAR_1->last_router]);
}
