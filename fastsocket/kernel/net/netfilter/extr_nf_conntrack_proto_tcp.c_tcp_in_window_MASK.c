
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct tcphdr {scalar_t__ ack; scalar_t__ syn; int rst; int window; int ack_seq; int seq; } ;
struct sk_buff {int len; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
struct ip_ct_tcp_state {int flags; int td_end; int td_maxend; scalar_t__ td_maxwin; int td_scale; int td_maxack; } ;
struct ip_ct_tcp {scalar_t__ state; int last_dir; int last_seq; int last_ack; int last_end; int last_win; scalar_t__ retrans; struct ip_ct_tcp_state* seen; } ;
typedef int s16 ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __u32 ;
struct TYPE_2__ {struct nf_conntrack_tuple tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct ip_ct_tcp_state*) ;
 int FUNC_2 (int ,struct nf_conn const*,int,int) ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct nf_conntrack_tuple const*) ;
 struct net* FUNC_6 (struct nf_conn const*) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int ,int ,struct sk_buff const*,int *,int *,int *,char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,int ,unsigned int,struct tcphdr const*) ;
 int FUNC_12 (struct tcphdr const*) ;
 int FUNC_13 (struct sk_buff const*,unsigned int,struct tcphdr const*,struct ip_ct_tcp_state*) ;
 int FUNC_14 (struct sk_buff const*,unsigned int,struct tcphdr const*,int*) ;

__attribute__((used)) static bool FUNC_15(const struct nf_conn *VAR_14,
     struct ip_ct_tcp *VAR_15,
     enum ip_conntrack_dir VAR_16,
     unsigned int VAR_17,
     const struct sk_buff *VAR_18,
     unsigned int VAR_19,
     const struct tcphdr *VAR_20,
     u_int8_t VAR_21)
{
 struct net *VAR_22 = FUNC_6(VAR_14);
 struct ip_ct_tcp_state *VAR_23 = &VAR_15->seen[VAR_16];
 struct ip_ct_tcp_state *VAR_24 = &VAR_15->seen[!VAR_16];
 const struct nf_conntrack_tuple *VAR_25 = &VAR_14->tuplehash[VAR_16].tuple;
 __u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 s16 VAR_32;
 bool VAR_33;




 VAR_26 = FUNC_8(VAR_20->seq);
 VAR_27 = VAR_28 = FUNC_8(VAR_20->ack_seq);
 VAR_30 = FUNC_9(VAR_20->window);
 VAR_29 = FUNC_11(VAR_26, VAR_18->len, VAR_19, VAR_20);

 if (VAR_24->flags & VAR_6)
  FUNC_14(VAR_18, VAR_19, VAR_20, &VAR_28);


 VAR_32 = FUNC_2(VAR_21, VAR_14, !VAR_16, VAR_27 - 1);
 VAR_27 -= VAR_32;
 VAR_28 -= VAR_32;

 FUNC_10("tcp_in_window: START\n");
 FUNC_10("tcp_in_window: ");
 FUNC_5(VAR_25);
 FUNC_10("seq=%u ack=%u+(%d) sack=%u+(%d) win=%u end=%u\n",
   VAR_26, VAR_27, VAR_32, VAR_28, VAR_32, VAR_30, VAR_29);
 FUNC_10("tcp_in_window: sender end=%u maxend=%u maxwin=%u scale=%i "
   "receiver end=%u maxend=%u maxwin=%u scale=%i\n",
   VAR_23->td_end, VAR_23->td_maxend, VAR_23->td_maxwin,
   VAR_23->td_scale,
   VAR_24->td_end, VAR_24->td_maxend, VAR_24->td_maxwin,
   VAR_24->td_scale);

 if (VAR_23->td_maxwin == 0) {



  if (VAR_20->syn) {




   VAR_23->td_end =
   VAR_23->td_maxend = VAR_29;
   VAR_23->td_maxwin = (VAR_30 == 0 ? 1 : VAR_30);

   FUNC_13(VAR_18, VAR_19, VAR_20, VAR_23);





   if (!(VAR_23->flags & VAR_7
         && VAR_24->flags & VAR_7))
    VAR_23->td_scale =
    VAR_24->td_scale = 0;
   if (!VAR_20->ack)

    return 1;
  } else {





   VAR_23->td_end = VAR_29;
   VAR_23->td_maxwin = (VAR_30 == 0 ? 1 : VAR_30);
   VAR_23->td_maxend = VAR_29 + VAR_23->td_maxwin;
  }
 } else if (((VAR_15->state == VAR_10
       && VAR_16 == VAR_1)
     || (VAR_15->state == VAR_9
       && VAR_16 == VAR_2))
     && FUNC_3(VAR_29, VAR_23->td_end)) {





  VAR_23->td_end =
  VAR_23->td_maxend = VAR_29;
  VAR_23->td_maxwin = (VAR_30 == 0 ? 1 : VAR_30);

  FUNC_13(VAR_18, VAR_19, VAR_20, VAR_23);
 }

 if (!(VAR_20->ack)) {



  VAR_27 = VAR_28 = VAR_24->td_end;
 } else if (((FUNC_12(VAR_20) & (VAR_11|VAR_12)) ==
      (VAR_11|VAR_12))
     && (VAR_27 == 0)) {




  VAR_27 = VAR_28 = VAR_24->td_end;
 }

 if (VAR_26 == VAR_29
     && (!VAR_20->rst
  || (VAR_26 == 0 && VAR_15->state == VAR_10)))







  VAR_26 = VAR_29 = VAR_23->td_end;

 FUNC_10("tcp_in_window: ");
 FUNC_5(VAR_25);
 FUNC_10("seq=%u ack=%u+(%d) sack=%u+(%d) win=%u end=%u\n",
   VAR_26, VAR_27, VAR_32, VAR_28, VAR_32, VAR_30, VAR_29);
 FUNC_10("tcp_in_window: sender end=%u maxend=%u maxwin=%u scale=%i "
   "receiver end=%u maxend=%u maxwin=%u scale=%i\n",
   VAR_23->td_end, VAR_23->td_maxend, VAR_23->td_maxwin,
   VAR_23->td_scale,
   VAR_24->td_end, VAR_24->td_maxend, VAR_24->td_maxwin,
   VAR_24->td_scale);

 FUNC_10("tcp_in_window: I=%i II=%i III=%i IV=%i\n",
   FUNC_4(VAR_26, VAR_23->td_maxend + 1),
   FUNC_3(VAR_29, VAR_23->td_end - VAR_24->td_maxwin - 1),
   FUNC_4(VAR_28, VAR_24->td_end + 1),
   FUNC_3(VAR_28, VAR_24->td_end - FUNC_1(VAR_23) - 1));

 if (FUNC_4(VAR_26, VAR_23->td_maxend + 1) &&
     FUNC_3(VAR_29, VAR_23->td_end - VAR_24->td_maxwin - 1) &&
     FUNC_4(VAR_28, VAR_24->td_end + 1) &&
     FUNC_3(VAR_28, VAR_24->td_end - FUNC_1(VAR_23) - 1)) {



  if (!VAR_20->syn)
   VAR_30 <<= VAR_23->td_scale;




  VAR_31 = VAR_30 + (VAR_28 - VAR_27);
  if (VAR_23->td_maxwin < VAR_31)
   VAR_23->td_maxwin = VAR_31;
  if (FUNC_3(VAR_29, VAR_23->td_end)) {
   VAR_23->td_end = VAR_29;
   VAR_23->flags |= VAR_4;
  }
  if (VAR_20->ack) {
   if (!(VAR_23->flags & VAR_5)) {
    VAR_23->td_maxack = VAR_27;
    VAR_23->flags |= VAR_5;
   } else if (FUNC_3(VAR_27, VAR_23->td_maxack))
    VAR_23->td_maxack = VAR_27;
  }




  if (FUNC_3(VAR_29, VAR_23->td_maxend))
   VAR_24->td_maxwin += VAR_29 - VAR_23->td_maxend;
  if (FUNC_3(VAR_28 + VAR_30, VAR_24->td_maxend - 1)) {
   VAR_24->td_maxend = VAR_28 + VAR_30;
   if (VAR_30 == 0)
    VAR_24->td_maxend++;
  }
  if (VAR_27 == VAR_24->td_end)
   VAR_24->flags &= ~VAR_4;




  if (VAR_17 == VAR_8) {
   if (VAR_15->last_dir == VAR_16
       && VAR_15->last_seq == VAR_26
       && VAR_15->last_ack == VAR_27
       && VAR_15->last_end == VAR_29
       && VAR_15->last_win == VAR_30)
    VAR_15->retrans++;
   else {
    VAR_15->last_dir = VAR_16;
    VAR_15->last_seq = VAR_26;
    VAR_15->last_ack = VAR_27;
    VAR_15->last_end = VAR_29;
    VAR_15->last_win = VAR_30;
    VAR_15->retrans = 0;
   }
  }
  VAR_33 = 1;
 } else {
  VAR_33 = 0;
  if (VAR_23->flags & VAR_3 ||
      VAR_13)
   VAR_33 = 1;
  if (!VAR_33 && FUNC_0(VAR_22, VAR_0))
   FUNC_7(VAR_21, 0, VAR_18, ((void*)0), ((void*)0), ((void*)0),
   "nf_ct_tcp: %s ",
   FUNC_4(VAR_26, VAR_23->td_maxend + 1) ?
   FUNC_3(VAR_29, VAR_23->td_end - VAR_24->td_maxwin - 1) ?
   FUNC_4(VAR_28, VAR_24->td_end + 1) ?
   FUNC_3(VAR_28, VAR_24->td_end - FUNC_1(VAR_23) - 1) ? "BUG"
   : "ACK is under the lower bound (possible overly delayed ACK)"
   : "ACK is over the upper bound (ACKed data not seen yet)"
   : "SEQ is under the lower bound (already ACKed data retransmitted)"
   : "SEQ is over the upper bound (over the window of the receiver)");
 }

 FUNC_10("tcp_in_window: res=%u sender end=%u maxend=%u maxwin=%u "
   "receiver end=%u maxend=%u maxwin=%u\n",
   VAR_33, VAR_23->td_end, VAR_23->td_maxend, VAR_23->td_maxwin,
   VAR_24->td_end, VAR_24->td_maxend, VAR_24->td_maxwin);

 return VAR_33;
}
