
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_sleep; } ;


 int FUNC_0 (char*,struct sock*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (unsigned long) ;
 int VAR_4 ;

int FUNC_11(struct sock *VAR_5, int VAR_6, unsigned long VAR_7)
{
 FUNC_1(VAR_4, VAR_3);
 int VAR_8 = 0;

 FUNC_0("sk %p", VAR_5);

 FUNC_2(VAR_5->sk_sleep, &VAR_4);
 while (VAR_5->sk_state != VAR_6) {
  FUNC_7(VAR_1);

  if (!VAR_7) {
   VAR_8 = -VAR_0;
   break;
  }

  if (FUNC_8(VAR_3)) {
   VAR_8 = FUNC_10(VAR_7);
   break;
  }

  FUNC_4(VAR_5);
  VAR_7 = FUNC_6(VAR_7);
  FUNC_3(VAR_5);

  VAR_8 = FUNC_9(VAR_5);
  if (VAR_8)
   break;
 }
 FUNC_7(VAR_2);
 FUNC_5(VAR_5->sk_sleep, &VAR_4);
 return VAR_8;
}
