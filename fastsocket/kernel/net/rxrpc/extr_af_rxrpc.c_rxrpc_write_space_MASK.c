
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 FUNC_0("%p", VAR_2);
 FUNC_1(&VAR_2->sk_callback_lock);
 if (FUNC_3(VAR_2)) {
  if (FUNC_4(VAR_2))
   FUNC_6(VAR_2->sk_sleep);
  FUNC_5(VAR_2, VAR_1, VAR_0);
 }
 FUNC_2(&VAR_2->sk_callback_lock);
}
