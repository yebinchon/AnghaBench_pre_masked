
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_name {int instance; int type; } ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;

int FUNC_1(struct tipc_name const *VAR_0)
{
 u32 VAR_1 = 0;

 return(FUNC_0(VAR_0->type, VAR_0->instance,&VAR_1) != 0);
}
