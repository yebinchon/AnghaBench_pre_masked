
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_5, int VAR_6)
{




 if (!(VAR_6 & VAR_0))
  return;


 if ((1 << VAR_5->sk_state) &
     (VAR_2 | VAR_4 |
      VAR_3 | VAR_1)) {

  if (FUNC_0(VAR_5))
   FUNC_1(VAR_5);
 }
}
