
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_port {scalar_t__ usr_handle; } ;
struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static u32 FUNC_5(struct tipc_port *VAR_2, struct sk_buff *VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_2->usr_handle;
 u32 VAR_5;
 FUNC_0(VAR_4);
 if (!FUNC_4(VAR_4)) {
  VAR_5 = FUNC_2(VAR_4, VAR_3);
 } else {
  if (FUNC_3(VAR_4, VAR_3, VAR_4->sk_rcvbuf))
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_1;
 }
 FUNC_1(VAR_4);

 return VAR_5;
}
