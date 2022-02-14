
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ packets_out; scalar_t__ snd_cwnd; } ;
struct sock {int sk_userlocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_1(VAR_4);




 if (VAR_4->sk_userlocks & VAR_0)
  return 0;


 if (VAR_3)
  return 0;


 if (FUNC_0(&VAR_2) >= VAR_1[0])
  return 0;


 if (VAR_5->packets_out >= VAR_5->snd_cwnd)
  return 0;

 return 1;
}
