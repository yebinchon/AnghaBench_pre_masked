
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ retrans_out; scalar_t__ retrans_stamp; int frto_counter; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3, int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_4(VAR_3);

 FUNC_6(VAR_5);

 if (!VAR_5->frto_counter && VAR_5->retrans_out == 0)
  VAR_5->retrans_stamp = 0;

 if (VAR_4 & VAR_0)
  FUNC_2(VAR_3, 1);

 if (FUNC_0(VAR_3)->icsk_ca_state != VAR_1) {
  FUNC_5(VAR_3);
  if (FUNC_0(VAR_3)->icsk_ca_state != VAR_2)
   FUNC_3(VAR_5);
 } else {
  FUNC_1(VAR_3, VAR_4);
 }
}
