
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_ack_backlog; } ;
struct iucv_sock {struct sock* parent; int accept_q_lock; int accept_q; } ;


 struct iucv_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct sock *VAR_0, struct sock *VAR_1)
{
 unsigned long VAR_2;
 struct iucv_sock *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_3(&VAR_3->accept_q_lock, VAR_2);
 FUNC_1(&FUNC_0(VAR_1)->accept_q, &VAR_3->accept_q);
 FUNC_4(&VAR_3->accept_q_lock, VAR_2);
 FUNC_0(VAR_1)->parent = VAR_0;
 VAR_0->sk_ack_backlog++;
}
