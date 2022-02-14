
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_state_change ) (struct sock*) ;int sk_state; int sk_callback_lock; struct o2net_sock_container* sk_user_data; } ;
struct o2net_sock_container {void (* sc_state_change ) (struct sock*) ;int sc_shutdown_work; int sc_connect_work; } ;





 int FUNC_0 (struct o2net_sock_container*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct o2net_sock_container*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 void (*VAR_1)(struct sock *VAR_2);
 struct o2net_sock_container *VAR_3;

 FUNC_1(&VAR_0->sk_callback_lock);
 VAR_3 = VAR_0->sk_user_data;
 if (VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0->sk_state_change;
  goto out;
 }

 FUNC_3(VAR_3, "state_change to %d\n", VAR_0->sk_state);

 VAR_1 = VAR_3->sc_state_change;

 switch(VAR_0->sk_state) {

  case 128:
  case 129:
   break;
  case 130:
   FUNC_0(VAR_3, &VAR_3->sc_connect_work);
   break;
  default:
   FUNC_0(VAR_3, &VAR_3->sc_shutdown_work);
   break;
 }
out:
 FUNC_2(&VAR_0->sk_callback_lock);
 VAR_1(VAR_0);
}
