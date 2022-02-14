
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {scalar_t__ syn; scalar_t__ rst; } ;
struct TYPE_3__ {scalar_t__ saw_tstamp; } ;
struct tcp_sock {scalar_t__ rcv_nxt; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ seq; int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct tcphdr*,struct tcp_sock*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct tcp_sock*,scalar_t__,int ) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;

__attribute__((used)) static bool FUNC_12(struct sock *VAR_3, struct sk_buff *VAR_4,
         struct tcphdr *VAR_5, int VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_11(VAR_3);


 if (FUNC_5(VAR_4, VAR_5, VAR_7) && VAR_7->rx_opt.saw_tstamp &&
     FUNC_6(VAR_3, VAR_4)) {
  if (!VAR_5->rst) {
   FUNC_0(FUNC_4(VAR_3), VAR_0);
   FUNC_9(VAR_3, VAR_4);
   goto discard;
  }

 }


 if (!FUNC_10(VAR_7, FUNC_2(VAR_4)->seq, FUNC_2(VAR_4)->end_seq)) {






  if (!VAR_5->rst) {
   if (VAR_5->syn)
    goto syn_challenge;
   FUNC_9(VAR_3, VAR_4);
  }
  goto discard;
 }


 if (VAR_5->rst) {






  if (FUNC_2(VAR_4)->seq == VAR_7->rcv_nxt)
   FUNC_7(VAR_3);
  else
   FUNC_8(VAR_3);
  goto discard;
 }






 if (VAR_5->syn) {
syn_challenge:
  if (VAR_6)
   FUNC_1(FUNC_4(VAR_3), VAR_2);
  FUNC_0(FUNC_4(VAR_3), VAR_1);
  FUNC_8(VAR_3);
  goto discard;
 }

 return 1;

discard:
 FUNC_3(VAR_4);
 return 0;
}
