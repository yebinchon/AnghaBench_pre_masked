
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; int * sk_user_data; int * sk_data_ready; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 struct socket* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 struct socket *VAR_2 = VAR_0;
 struct sock *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->sk;


 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->sk_callback_lock);
 if (VAR_3->sk_user_data) {
  VAR_3->sk_data_ready = VAR_3->sk_user_data;
  VAR_3->sk_user_data = ((void*)0);
 }
 FUNC_5(&VAR_3->sk_callback_lock);
 FUNC_2(VAR_3);


 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
 VAR_0 = ((void*)0);
}
