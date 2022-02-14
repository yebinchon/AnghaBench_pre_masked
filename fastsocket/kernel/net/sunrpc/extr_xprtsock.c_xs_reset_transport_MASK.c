
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_xprt {struct socket* sock; struct sock* inet; scalar_t__ srcport; } ;
struct sock {scalar_t__ sk_no_check; int sk_callback_lock; int * sk_user_data; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock_xprt*,struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock_xprt *VAR_0)
{
 struct socket *VAR_1 = VAR_0->sock;
 struct sock *VAR_2 = VAR_0->inet;

 if (VAR_2 == ((void*)0))
  return;

 VAR_0->srcport = 0;

 FUNC_1(&VAR_2->sk_callback_lock);
 VAR_0->inet = ((void*)0);
 VAR_0->sock = ((void*)0);

 VAR_2->sk_user_data = ((void*)0);

 FUNC_3(VAR_0, VAR_2);
 FUNC_2(&VAR_2->sk_callback_lock);

 VAR_2->sk_no_check = 0;

 FUNC_0(VAR_1);
}
