
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sock {TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int users; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 & VAR_1) {
  VAR_5 = -VAR_0;
  FUNC_5(&VAR_2->sk_receive_queue.lock);
  if (VAR_3 == FUNC_4(&VAR_2->sk_receive_queue)) {
   FUNC_0(VAR_3, &VAR_2->sk_receive_queue);
   FUNC_1(&VAR_3->users);
   VAR_5 = 0;
  }
  FUNC_6(&VAR_2->sk_receive_queue.lock);
 }

 FUNC_2(VAR_3);
 FUNC_3(VAR_2);

 return VAR_5;
}
