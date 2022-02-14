
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ snd_una; scalar_t__ high_seq; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_8(VAR_4);

 if (FUNC_5(VAR_5)) {
  int VAR_6;




  FUNC_0(VAR_4, FUNC_2(VAR_4)->icsk_ca_state == VAR_2 ? "loss" : "retrans");
  FUNC_9(VAR_4, 1);
  if (FUNC_2(VAR_4)->icsk_ca_state == VAR_2)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;

  FUNC_1(FUNC_3(VAR_4), VAR_6);
  VAR_5->undo_marker = 0;
 }
 if (VAR_5->snd_una == VAR_5->high_seq && FUNC_4(VAR_5)) {



  FUNC_6(VAR_5);
  return 1;
 }
 FUNC_7(VAR_4, VAR_3);
 return 0;
}
