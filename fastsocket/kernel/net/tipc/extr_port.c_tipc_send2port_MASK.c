
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_portid {int node; int ref; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tipc_portid const*,unsigned int,struct iovec const*,struct tipc_portid*,int ) ;
 int VAR_1 ;

int FUNC_1(u32 VAR_2,
     struct tipc_portid const *VAR_3,
     unsigned int VAR_4,
     struct iovec const *VAR_5)
{
 struct tipc_portid VAR_6;

 VAR_6.ref = VAR_2;
 VAR_6.node = VAR_1;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6,
     VAR_0);
}
