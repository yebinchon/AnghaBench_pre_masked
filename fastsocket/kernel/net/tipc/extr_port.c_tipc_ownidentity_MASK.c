
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_portid {int node; int ref; } ;


 int VAR_0 ;

int FUNC_0(u32 VAR_1, struct tipc_portid *VAR_2)
{
 VAR_2->ref = VAR_1;
 VAR_2->node = VAR_0;
 return 0;
}
