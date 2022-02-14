
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (int *) ;

struct sk_buff *FUNC_2(struct sock *VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_1(&VAR_1->sk_receive_queue);

 if (VAR_1->sk_state == VAR_0)
  FUNC_0(VAR_1);
 return VAR_2;
}
