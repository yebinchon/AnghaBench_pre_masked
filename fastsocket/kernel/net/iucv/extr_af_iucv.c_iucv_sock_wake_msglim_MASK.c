
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 FUNC_0(&VAR_2->sk_callback_lock);
 if (FUNC_2(VAR_2))
  FUNC_4(VAR_2->sk_sleep);
 FUNC_3(VAR_2, VAR_1, VAR_0);
 FUNC_1(&VAR_2->sk_callback_lock);
}
