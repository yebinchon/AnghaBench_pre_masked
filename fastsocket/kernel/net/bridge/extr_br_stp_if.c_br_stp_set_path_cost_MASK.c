
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_bridge_port {int br; int path_cost; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct net_bridge_port *VAR_0, u32 VAR_1)
{
 VAR_0->path_cost = VAR_1;
 FUNC_0(VAR_0->br);
 FUNC_1(VAR_0->br);
}
