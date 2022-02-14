
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_data_ready ) (struct sock*,int) ;int sk_callback_lock; struct o2net_sock_container* sk_user_data; } ;
struct o2net_sock_container {void (* sc_data_ready ) (struct sock*,int) ;int sc_rx_work; int sc_tv_data_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct o2net_sock_container*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct o2net_sock_container*,char*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, int VAR_1)
{
 void (*VAR_2)(struct sock *VAR_3, int VAR_4);

 FUNC_2(&VAR_0->sk_callback_lock);
 if (VAR_0->sk_user_data) {
  struct o2net_sock_container *VAR_5 = VAR_0->sk_user_data;
  FUNC_4(VAR_5, "data_ready hit\n");
  FUNC_0(&VAR_5->sc_tv_data_ready);
  FUNC_1(VAR_5, &VAR_5->sc_rx_work);
  VAR_2 = VAR_5->sc_data_ready;
 } else {
  VAR_2 = VAR_0->sk_data_ready;
 }
 FUNC_3(&VAR_0->sk_callback_lock);

 VAR_2(VAR_0, VAR_1);
}
