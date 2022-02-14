
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct tcp_sock {scalar_t__ snd_cwnd; int srtt; int snd_wnd; int snd_una; int snd_nxt; } ;
struct tcp_log {scalar_t__ snd_cwnd; int srtt; int ssthresh; int snd_wnd; int snd_una; int snd_nxt; int length; int dport; int daddr; int sport; int saddr; int tstamp; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct inet_sock {int dport; int daddr; int sport; int saddr; } ;
struct TYPE_2__ {scalar_t__ lastcwnd; int head; int wait; int lock; struct tcp_log* log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 () ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4, struct sk_buff *VAR_5,
          struct tcphdr *VAR_6, unsigned VAR_7)
{
 const struct tcp_sock *VAR_8 = FUNC_8(VAR_4);
 const struct inet_sock *VAR_9 = FUNC_0(VAR_4);


 if ((VAR_2 == 0 || FUNC_3(VAR_9->dport) == VAR_2 || FUNC_3(VAR_9->sport) == VAR_2)
     && (VAR_1 || VAR_8->snd_cwnd != VAR_3.lastcwnd)) {

  FUNC_4(&VAR_3.lock);

  if (FUNC_7() > 1) {
   struct tcp_log *VAR_10 = VAR_3.log + VAR_3.head;

   VAR_10->tstamp = FUNC_2();
   VAR_10->saddr = VAR_9->saddr;
   VAR_10->sport = VAR_9->sport;
   VAR_10->daddr = VAR_9->daddr;
   VAR_10->dport = VAR_9->dport;
   VAR_10->length = VAR_5->len;
   VAR_10->snd_nxt = VAR_8->snd_nxt;
   VAR_10->snd_una = VAR_8->snd_una;
   VAR_10->snd_cwnd = VAR_8->snd_cwnd;
   VAR_10->snd_wnd = VAR_8->snd_wnd;
   VAR_10->ssthresh = FUNC_6(VAR_4);
   VAR_10->srtt = VAR_8->srtt >> 3;

   VAR_3.head = (VAR_3.head + 1) % VAR_0;
  }
  VAR_3.lastcwnd = VAR_8->snd_cwnd;
  FUNC_5(&VAR_3.lock);

  FUNC_9(&VAR_3.wait);
 }

 FUNC_1();
 return 0;
}
