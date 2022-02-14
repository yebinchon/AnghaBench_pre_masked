
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_user_data ) (struct sock*,int) ;void (* sk_data_ready ) (struct sock*,int) ;scalar_t__ sk_state; int sk_callback_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_3, int VAR_4)
{
 void (*VAR_5)(struct sock *VAR_6, int VAR_7);

 FUNC_1("listen data ready sk %p\n", VAR_3);

 FUNC_2(&VAR_3->sk_callback_lock);
 VAR_5 = VAR_3->sk_user_data;
 if (!VAR_5) {
  VAR_5 = VAR_3->sk_data_ready;
  goto out;
 }







 if (VAR_3->sk_state == VAR_0)
  FUNC_0(VAR_2, &VAR_1);

out:
 FUNC_3(&VAR_3->sk_callback_lock);
 VAR_5(VAR_3, VAR_4);
}
