
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_portid {int node; int ref; } ;
struct tipc_name {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tipc_name const*,int ,struct sk_buff*,unsigned int,struct tipc_portid*,int ) ;
 int VAR_1 ;

int FUNC_1(u32 VAR_2,
         struct tipc_name const *VAR_3,
         u32 VAR_4,
         struct sk_buff *VAR_5,
         unsigned int VAR_6)
{
 struct tipc_portid VAR_7;

 VAR_7.ref = VAR_2;
 VAR_7.node = VAR_1;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7,
         VAR_0);
}
