
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct TYPE_2__ {struct sock* parent; int accept_q; } ;


 int FUNC_0 (char*,struct sock*,struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0, struct sock *VAR_1)
{
 FUNC_0("parent %p, sk %p", VAR_0, VAR_1);

 FUNC_3(VAR_1);
 FUNC_2(&FUNC_1(VAR_1)->accept_q, &FUNC_1(VAR_0)->accept_q);
 FUNC_1(VAR_1)->parent = VAR_0;
 VAR_0->sk_ack_backlog++;
}
