
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sleep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,long*,int) ;
 int VAR_2 ;

void FUNC_6(struct sock *VAR_3, long VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_2);

  do {
   FUNC_2(VAR_3->sk_sleep, &VAR_2,
     VAR_0);
   if (FUNC_5(VAR_3, &VAR_4, !FUNC_4(VAR_3)))
    break;
  } while (!FUNC_3(VAR_1) && VAR_4);

  FUNC_1(VAR_3->sk_sleep, &VAR_2);
 }
}
