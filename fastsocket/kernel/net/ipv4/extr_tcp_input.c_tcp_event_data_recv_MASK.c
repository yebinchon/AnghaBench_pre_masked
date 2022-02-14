
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int ato; void* lrcvtime; } ;
struct inet_connection_sock {int icsk_rto; TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_sock*,struct sk_buff*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_8(VAR_2);
 struct inet_connection_sock *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;

 FUNC_2(VAR_2);

 FUNC_6(VAR_2, VAR_3);

 FUNC_7(VAR_4);

 VAR_6 = VAR_1;

 if (!VAR_5->icsk_ack.ato) {



  FUNC_5(VAR_2);
  VAR_5->icsk_ack.ato = VAR_0;
 } else {
  int VAR_7 = VAR_6 - VAR_5->icsk_ack.lrcvtime;

  if (VAR_7 <= VAR_0 / 2) {

   VAR_5->icsk_ack.ato = (VAR_5->icsk_ack.ato >> 1) + VAR_0 / 2;
  } else if (VAR_7 < VAR_5->icsk_ack.ato) {
   VAR_5->icsk_ack.ato = (VAR_5->icsk_ack.ato >> 1) + VAR_7;
   if (VAR_5->icsk_ack.ato > VAR_5->icsk_rto)
    VAR_5->icsk_ack.ato = VAR_5->icsk_rto;
  } else if (VAR_7 > VAR_5->icsk_rto) {



   FUNC_5(VAR_2);
   FUNC_3(VAR_2);
  }
 }
 VAR_5->icsk_ack.lrcvtime = VAR_6;

 FUNC_0(VAR_4, VAR_3);

 if (VAR_3->len >= 128)
  FUNC_4(VAR_2, VAR_3);
}
