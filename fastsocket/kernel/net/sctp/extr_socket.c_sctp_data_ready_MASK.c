
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct sock *VAR_5, int VAR_6)
{
 FUNC_0(&VAR_5->sk_callback_lock);
 if (FUNC_2(VAR_5))
  FUNC_4(VAR_5->sk_sleep, VAR_0 |
      VAR_2 | VAR_1);
 FUNC_3(VAR_5, VAR_4, VAR_3);
 FUNC_1(&VAR_5->sk_callback_lock);
}
