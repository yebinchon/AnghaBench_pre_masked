
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_una; scalar_t__ snd_cwnd; scalar_t__ srtt; int sacked_out; scalar_t__ max_window; scalar_t__ snd_nxt; scalar_t__ fackets_out; int packets_out; scalar_t__ frto_highmark; scalar_t__ frto_counter; int rcv_tstamp; int mss_cache; int bytes_acked; } ;
struct sock {int sk_dst_cache; scalar_t__ sk_err_soft; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; scalar_t__ icsk_probes_out; } ;
struct TYPE_2__ {scalar_t__ seq; scalar_t__ ack_seq; scalar_t__ end_seq; scalar_t__ sacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (struct tcp_sock*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 struct inet_connection_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_10 (struct sock*,int) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct sock*,int ) ;
 int FUNC_14 (struct sock*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct sock*,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct sock*,int,int,int,int) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sock*,int) ;
 scalar_t__ FUNC_19 (struct tcp_sock*) ;
 int FUNC_20 (struct sock*,int) ;
 int FUNC_21 (struct sock*,struct sk_buff*,scalar_t__) ;
 int FUNC_22 (struct sock*) ;
 scalar_t__ FUNC_23 (struct sock*) ;
 struct tcp_sock* FUNC_24 (struct sock*) ;
 int VAR_16 ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct tcp_sock*,scalar_t__) ;

__attribute__((used)) static int FUNC_27(struct sock *VAR_17, struct sk_buff *VAR_18, int VAR_19)
{
 struct inet_connection_sock *VAR_20 = FUNC_7(VAR_17);
 struct tcp_sock *VAR_21 = FUNC_24(VAR_17);
 u32 VAR_22 = VAR_21->snd_una;
 u32 VAR_23 = FUNC_3(VAR_18)->seq;
 u32 VAR_24 = FUNC_3(VAR_18)->ack_seq;
 bool VAR_25 = 0;
 u32 VAR_26, VAR_27 = VAR_21->snd_cwnd, VAR_28 = VAR_21->srtt;
 u32 VAR_29;
 int VAR_30;
 int VAR_31 = VAR_21->sacked_out;
 int VAR_32 = 0;
 int VAR_33 = 0;
 int VAR_34 = 0;




 if (FUNC_5(VAR_24, VAR_22)) {

  if (FUNC_5(VAR_24, VAR_22 - VAR_21->max_window)) {
   FUNC_22(VAR_17);
   return -1;
  }
  goto old_ack;
 }




 if (FUNC_4(VAR_24, VAR_21->snd_nxt))
  goto invalid_ack;

 if (FUNC_4(VAR_24, VAR_22))
  VAR_19 |= VAR_9;

 if (VAR_15) {
  if (VAR_20->icsk_ca_state < VAR_13)
   VAR_21->bytes_acked += VAR_24 - VAR_22;
  else if (VAR_20->icsk_ca_state == VAR_14)

   VAR_21->bytes_acked += FUNC_8(VAR_24 - VAR_22,
            VAR_21->mss_cache);
 }

 VAR_29 = VAR_21->fackets_out;
 VAR_26 = FUNC_19(VAR_21);

 if (!(VAR_19 & VAR_8) && FUNC_4(VAR_24, VAR_22)) {




  FUNC_26(VAR_21, VAR_23);
  VAR_21->snd_una = VAR_24;
  VAR_19 |= VAR_10;

  FUNC_13(VAR_17, VAR_0);

  FUNC_0(FUNC_9(VAR_17), VAR_11);
 } else {
  if (VAR_23 != FUNC_3(VAR_18)->end_seq)
   VAR_19 |= VAR_2;
  else
   FUNC_0(FUNC_9(VAR_17), VAR_12);

  VAR_19 |= FUNC_12(VAR_17, VAR_18, VAR_24, VAR_23);

  if (FUNC_3(VAR_18)->sacked)
   VAR_19 |= FUNC_21(VAR_17, VAR_18, VAR_22);

  if (FUNC_2(VAR_21, FUNC_17(VAR_18)))
   VAR_19 |= VAR_5;

  FUNC_13(VAR_17, VAR_1);
 }




 VAR_17->sk_err_soft = 0;
 VAR_20->icsk_probes_out = 0;
 VAR_21->rcv_tstamp = VAR_16;
 VAR_30 = VAR_21->packets_out;
 if (!VAR_30)
  goto no_queue;


 VAR_19 |= FUNC_14(VAR_17, VAR_29, VAR_22);

 VAR_32 = VAR_30 - VAR_21->packets_out;
 VAR_33 = (VAR_30 - VAR_31) -
        (VAR_21->packets_out - VAR_21->sacked_out);

 if (VAR_21->frto_counter)
  VAR_34 = FUNC_20(VAR_17, VAR_19);

 if (FUNC_5(VAR_21->frto_highmark, VAR_21->snd_una))
  VAR_21->frto_highmark = 0;

 if (FUNC_10(VAR_17, VAR_19)) {

  if ((VAR_19 & VAR_3) && !VAR_34 &&
      FUNC_18(VAR_17, VAR_19))
   FUNC_15(VAR_17, VAR_24, VAR_26);
  VAR_25 = !(VAR_19 & (VAR_9 | VAR_7));
  FUNC_16(VAR_17, VAR_32, VAR_33,
          VAR_25, VAR_19);
 } else {
  if ((VAR_19 & VAR_3) && !VAR_34)
   FUNC_15(VAR_17, VAR_24, VAR_26);
 }

 if ((VAR_19 & VAR_6) || !(VAR_19 & VAR_7))
  FUNC_6(VAR_17->sk_dst_cache);

 if (VAR_21->srtt != VAR_28 || VAR_21->snd_cwnd != VAR_27)
  FUNC_25(VAR_17);
 return 1;

no_queue:

 if (VAR_19 & VAR_4)
  FUNC_16(VAR_17, VAR_32, VAR_33,
          VAR_25, VAR_19);




 if (FUNC_23(VAR_17))
  FUNC_11(VAR_17);
 return 1;

invalid_ack:
 FUNC_1(VAR_17, "Ack %u after %u:%u\n", VAR_24, VAR_21->snd_una, VAR_21->snd_nxt);
 return -1;

old_ack:



 if (FUNC_3(VAR_18)->sacked) {
  VAR_19 |= FUNC_21(VAR_17, VAR_18, VAR_22);
  VAR_33 = VAR_21->sacked_out - VAR_31;
  FUNC_16(VAR_17, VAR_32, VAR_33,
          VAR_25, VAR_19);
 }

 FUNC_1(VAR_17, "Ack %u before %u:%u\n", VAR_24, VAR_21->snd_una, VAR_21->snd_nxt);
 return 0;
}
