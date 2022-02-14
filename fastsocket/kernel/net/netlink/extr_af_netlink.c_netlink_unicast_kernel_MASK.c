
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct netlink_sock {int (* netlink_rcv ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct netlink_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct netlink_sock *VAR_4 = FUNC_2(VAR_1);

 VAR_3 = -VAR_0;
 if (VAR_4->netlink_rcv != ((void*)0)) {
  VAR_3 = VAR_2->len;
  FUNC_3(VAR_2, VAR_1);
  VAR_4->netlink_rcv(VAR_2);
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_2);
 }
 FUNC_4(VAR_1);
 return VAR_3;
}
