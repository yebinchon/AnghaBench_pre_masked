
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_sleep; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 FUNC_0(&VAR_0->sk_callback_lock);
 if (FUNC_2(VAR_0))
  FUNC_3(VAR_0->sk_sleep);
 FUNC_1(&VAR_0->sk_callback_lock);
}
