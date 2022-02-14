
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct arm_sync_icache_args {int len; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct arm_sync_icache_args*) ;

int
FUNC_1(u_int VAR_1, int VAR_2)
{
 struct arm_sync_icache_args VAR_3;

 VAR_3.addr = VAR_1;
 VAR_3.len = VAR_2;
 FUNC_0(VAR_0, &VAR_3);
 return (0);
}
