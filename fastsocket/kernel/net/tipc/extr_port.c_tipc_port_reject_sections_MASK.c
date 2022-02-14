
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct port {int user_port; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_msg*,struct iovec const*,int ,int ,int,struct sk_buff**) ;
 int FUNC_1 (struct sk_buff*,int) ;

int FUNC_2(struct port *VAR_1, struct tipc_msg *VAR_2,
         struct iovec const *VAR_3, u32 VAR_4,
         int VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0,
   !VAR_1->user_port, &VAR_6);
 if (!VAR_6)
  return VAR_7;

 return FUNC_1(VAR_6, VAR_5);
}
