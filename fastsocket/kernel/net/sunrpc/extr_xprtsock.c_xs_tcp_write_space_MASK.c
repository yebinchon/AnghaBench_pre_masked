
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 FUNC_0(&VAR_0->sk_callback_lock);


 if (FUNC_3(VAR_0) >= FUNC_2(VAR_0))
  FUNC_4(VAR_0);

 FUNC_1(&VAR_0->sk_callback_lock);
}
