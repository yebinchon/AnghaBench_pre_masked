
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct netlink_sock {int wait; int state; } ;


 int FUNC_0 (int ,int *) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct sock *VAR_0)
{
 struct netlink_sock *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(&VAR_0->sk_receive_queue))
  FUNC_0(0, &VAR_1->state);
 if (!FUNC_3(0, &VAR_1->state))
  FUNC_4(&VAR_1->wait);
}
