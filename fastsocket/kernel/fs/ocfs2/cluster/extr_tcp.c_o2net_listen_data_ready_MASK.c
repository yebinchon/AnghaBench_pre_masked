
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_user_data ) (struct sock*,int) ;void (* sk_data_ready ) (struct sock*,int) ;scalar_t__ sk_state; int sk_callback_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_4, int VAR_5)
{
 void (*VAR_6)(struct sock *VAR_7, int VAR_8);

 FUNC_2(&VAR_4->sk_callback_lock);
 VAR_6 = VAR_4->sk_user_data;
 if (VAR_6 == ((void*)0)) {
  VAR_6 = VAR_4->sk_data_ready;
  goto out;
 }





 if (VAR_4->sk_state == VAR_1) {
  FUNC_0(VAR_0, "bytes: %d\n", VAR_5);
  FUNC_1(VAR_3, &VAR_2);
 }

out:
 FUNC_3(&VAR_4->sk_callback_lock);
 VAR_6(VAR_4, VAR_5);
}
