
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int tsq_flags; } ;
struct sock {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct sock *VAR_7)
{
 struct tcp_sock *VAR_8 = FUNC_1(VAR_7);

 if (FUNC_3(VAR_6, &VAR_8->tsq_flags)) {
  if ((1 << VAR_7->sk_state) &
      (VAR_3 | VAR_4 |
       VAR_2 | VAR_1 | VAR_5))
   FUNC_2(VAR_7,
           FUNC_0(VAR_7),
           0, 0,
           VAR_0);
 }
}
