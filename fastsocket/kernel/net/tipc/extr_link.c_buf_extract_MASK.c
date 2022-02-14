
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 struct sk_buff* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sk_buff *VAR_0, u32 VAR_1)
{
 struct tipc_msg *VAR_2 = (struct tipc_msg *)(VAR_0->data + VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2);
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
