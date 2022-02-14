
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cluster {int addr; } ;


 int VAR_0 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct cluster*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(struct cluster *VAR_1, u32 VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_4(0, VAR_1->addr);
 struct tipc_msg *VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_5);
  FUNC_1(VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_0);
  FUNC_3(VAR_1, VAR_5, VAR_3, VAR_4);
 } else {
  FUNC_5("Memory squeeze: broadcast of new route failed\n");
 }
}
