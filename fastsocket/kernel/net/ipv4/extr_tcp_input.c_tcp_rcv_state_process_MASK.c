
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {scalar_t__ fin; int window; scalar_t__ ack; int syn; int rst; } ;
struct TYPE_4__ {int snd_wscale; int tstamp_ok; scalar_t__ saw_tstamp; } ;
struct tcp_sock {int snd_wnd; int rcv_nxt; int write_seq; int snd_una; int linger2; int lsndtime; int advmss; TYPE_1__ rx_opt; int copied_seq; } ;
struct sock {int sk_state; int sk_shutdown; int (* sk_state_change ) (struct sock*) ;int sk_dst_cache; int sk_socket; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {TYPE_2__* icsk_af_ops; } ;
struct TYPE_6__ {scalar_t__ end_seq; scalar_t__ seq; int ack_seq; } ;
struct TYPE_5__ {int (* rebuild_header ) (struct sock*) ;int (* conn_request ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 struct inet_connection_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sock*,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,struct sk_buff*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,struct sk_buff*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct tcp_sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*) ;
 int FUNC_29 (struct tcp_sock*,scalar_t__) ;
 int FUNC_30 (struct sock*) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*,struct sk_buff*,struct tcphdr*,unsigned int) ;
 int FUNC_33 (struct tcp_sock*,scalar_t__) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (struct sock*,int) ;
 struct tcp_sock* FUNC_36 (struct sock*) ;
 int VAR_10 ;
 int FUNC_37 (struct sock*,int,int) ;
 int FUNC_38 (struct sock*) ;
 int FUNC_39 (struct sock*,struct sk_buff*,struct tcphdr*) ;
 int FUNC_40 (struct sock*,struct sk_buff*,struct tcphdr*,int ) ;

int FUNC_41(struct sock *VAR_11, struct sk_buff *VAR_12,
     struct tcphdr *VAR_13, unsigned VAR_14)
{
 struct tcp_sock *VAR_15 = FUNC_36(VAR_11);
 struct inet_connection_sock *VAR_16 = FUNC_6(VAR_11);
 int VAR_17 = 0;

 VAR_15->rx_opt.saw_tstamp = 0;

 switch (VAR_11->sk_state) {
 case 137:
  goto discard;

 case 130:
  if (VAR_13->ack)
   return 1;

  if (VAR_13->rst)
   goto discard;

  if (VAR_13->syn) {
   if (VAR_13->fin)
    goto discard;
   if (VAR_16->icsk_af_ops->conn_request(VAR_11, VAR_12) < 0)
    return 1;
   FUNC_8(VAR_12);
   return 0;
  }
  goto discard;

 case 128:
  VAR_17 = FUNC_32(VAR_11, VAR_12, VAR_13, VAR_14);
  if (VAR_17 >= 0)
   return VAR_17;


  FUNC_39(VAR_11, VAR_12, VAR_13);
  FUNC_2(VAR_12);
  FUNC_22(VAR_11);
  return 0;
 }

 if (!FUNC_40(VAR_11, VAR_12, VAR_13, 0))
  return 0;


 if (VAR_13->ack) {
  int VAR_18 = FUNC_19(VAR_11, VAR_12, VAR_0) > 0;

  switch (VAR_11->sk_state) {
  case 129:
   if (VAR_18) {
    VAR_15->copied_seq = VAR_15->rcv_nxt;
    FUNC_11();
    FUNC_35(VAR_11, 134);
    VAR_11->sk_state_change(VAR_11);






    if (VAR_11->sk_socket)
     FUNC_10(VAR_11,
            VAR_6, VAR_2);

    VAR_15->snd_una = FUNC_1(VAR_12)->ack_seq;
    VAR_15->snd_wnd = FUNC_9(VAR_13->window) <<
           VAR_15->rx_opt.snd_wscale;
    FUNC_29(VAR_15, FUNC_1(VAR_12)->seq);

    if (VAR_15->rx_opt.tstamp_ok)
     VAR_15->advmss -= VAR_7;




    VAR_16->icsk_af_ops->rebuild_header(VAR_11);

    FUNC_28(VAR_11);

    FUNC_27(VAR_11);




    VAR_15->lsndtime = VAR_10;

    FUNC_31(VAR_11);
    FUNC_30(VAR_11);
    FUNC_26(VAR_11);
    FUNC_24(VAR_15);
   } else {
    return 1;
   }
   break;

  case 133:
   if (VAR_15->snd_una == VAR_15->write_seq) {
    FUNC_35(VAR_11, 132);
    VAR_11->sk_shutdown |= VAR_4;
    FUNC_5(VAR_11->sk_dst_cache);

    if (!FUNC_12(VAR_11, VAR_5))

     VAR_11->sk_state_change(VAR_11);
    else {
     int VAR_19;

     if (VAR_15->linger2 < 0 ||
         (FUNC_1(VAR_12)->end_seq != FUNC_1(VAR_12)->seq &&
          FUNC_3(FUNC_1(VAR_12)->end_seq - VAR_13->fin, VAR_15->rcv_nxt))) {
      FUNC_23(VAR_11);
      FUNC_0(FUNC_13(VAR_11), VAR_1);
      return 1;
     }

     VAR_19 = FUNC_25(VAR_11);
     if (VAR_19 > VAR_8) {
      FUNC_7(VAR_11, VAR_19 - VAR_8);
     } else if (VAR_13->fin || FUNC_14(VAR_11)) {






      FUNC_7(VAR_11, VAR_19);
     } else {
      FUNC_37(VAR_11, 132, VAR_19);
      goto discard;
     }
    }
   }
   break;

  case 135:
   if (VAR_15->snd_una == VAR_15->write_seq) {
    FUNC_37(VAR_11, VAR_9, 0);
    goto discard;
   }
   break;

  case 131:
   if (VAR_15->snd_una == VAR_15->write_seq) {
    FUNC_38(VAR_11);
    FUNC_23(VAR_11);
    goto discard;
   }
   break;
  }
 } else
  goto discard;




 FUNC_33(VAR_15, FUNC_1(VAR_12)->seq);


 FUNC_39(VAR_11, VAR_12, VAR_13);


 switch (VAR_11->sk_state) {
 case 136:
 case 135:
 case 131:
  if (!FUNC_4(FUNC_1(VAR_12)->seq, VAR_15->rcv_nxt))
   break;
 case 133:
 case 132:




  if (VAR_11->sk_shutdown & VAR_3) {
   if (FUNC_1(VAR_12)->end_seq != FUNC_1(VAR_12)->seq &&
       FUNC_3(FUNC_1(VAR_12)->end_seq - VAR_13->fin, VAR_15->rcv_nxt)) {
    FUNC_0(FUNC_13(VAR_11), VAR_1);
    FUNC_34(VAR_11);
    return 1;
   }
  }

 case 134:
  FUNC_21(VAR_11, VAR_12);
  VAR_17 = 1;
  break;
 }


 if (VAR_11->sk_state != 137) {
  FUNC_22(VAR_11);
  FUNC_20(VAR_11);
 }

 if (!VAR_17) {
discard:
  FUNC_2(VAR_12);
 }
 return 0;
}
