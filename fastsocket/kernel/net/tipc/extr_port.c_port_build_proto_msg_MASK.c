
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*,char*) ;
 int FUNC_3 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_10(u32 VAR_1, u32 VAR_2,
         u32 VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7,
         u32 VAR_8, u32 VAR_9)
{
 struct sk_buff *VAR_10;
 struct tipc_msg *VAR_11;

 VAR_10 = FUNC_0(VAR_0);
 if (VAR_10) {
  VAR_11 = FUNC_1(VAR_10);
  FUNC_3(VAR_11, VAR_5, VAR_6, VAR_0, VAR_2);
  FUNC_5(VAR_11, VAR_7);
  FUNC_4(VAR_11, VAR_1);
  FUNC_8(VAR_11, VAR_3);
  FUNC_7(VAR_11, VAR_4);
  FUNC_9(VAR_11, VAR_8);
  FUNC_6(VAR_11, VAR_9);
  FUNC_2(VAR_11, "PORT>SEND>:");
 }
 return VAR_10;
}
