
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wq; int slock; } ;
struct sock {TYPE_1__ sk_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 FUNC_0(VAR_1);

 for (;;) {
  FUNC_2(&VAR_2->sk_lock.wq, &VAR_1,
     VAR_0);
  FUNC_6(&VAR_2->sk_lock.slock);
  FUNC_3();
  FUNC_5(&VAR_2->sk_lock.slock);
  if (!FUNC_4(VAR_2))
   break;
 }
 FUNC_1(&VAR_2->sk_lock.wq, &VAR_1);
}
