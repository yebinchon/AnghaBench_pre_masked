
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_data_ready; scalar_t__ sk_user_data; int sk_callback_lock; int sk_state_change; } ;
struct o2net_sock_container {scalar_t__ sc_data_ready; int sc_send_lock; int sc_state_change; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct o2net_sock_container*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3,
         struct o2net_sock_container *VAR_4)
{
 FUNC_3(&VAR_3->sk_callback_lock);


 if (VAR_3->sk_data_ready == VAR_1) {
  VAR_3->sk_data_ready = VAR_3->sk_user_data;
  VAR_3->sk_user_data = ((void*)0);
 }

 FUNC_0(VAR_3->sk_user_data != ((void*)0));
 VAR_3->sk_user_data = VAR_4;
 FUNC_2(VAR_4);

 VAR_4->sc_data_ready = VAR_3->sk_data_ready;
 VAR_4->sc_state_change = VAR_3->sk_state_change;
 VAR_3->sk_data_ready = VAR_0;
 VAR_3->sk_state_change = VAR_2;

 FUNC_1(&VAR_4->sc_send_lock);

 FUNC_4(&VAR_3->sk_callback_lock);
}
