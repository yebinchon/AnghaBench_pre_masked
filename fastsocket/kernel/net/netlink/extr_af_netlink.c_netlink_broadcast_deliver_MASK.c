
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; } ;
struct sk_buff {int len; } ;
struct netlink_sock {int state; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static inline int FUNC_6(struct sock *VAR_0,
         struct sk_buff *VAR_1)
{
 struct netlink_sock *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(&VAR_0->sk_rmem_alloc) <= VAR_0->sk_rcvbuf &&
     !FUNC_5(0, &VAR_2->state)) {
  FUNC_3(VAR_1, VAR_0);
  FUNC_2(&VAR_0->sk_receive_queue, VAR_1);
  VAR_0->sk_data_ready(VAR_0, VAR_1->len);
  return FUNC_0(&VAR_0->sk_rmem_alloc) > VAR_0->sk_rcvbuf;
 }
 return -1;
}
