
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int dest; int seq; int source; } ;
struct tcp_sock {int snd_una; int srtt; int snd_nxt; } ;
struct sock {int sk_state; int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {int len; int dev; scalar_t__ data; } ;
struct request_sock {int sk; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int saddr; int daddr; } ;
struct inet_sock {scalar_t__ recverr; } ;
struct inet_connection_sock {int icsk_backoff; int icsk_rto; int icsk_retransmits; } ;
typedef int __u32 ;
struct TYPE_8__ {scalar_t__ when; } ;
struct TYPE_7__ {int errno; } ;
struct TYPE_6__ {int type; int code; } ;
struct TYPE_5__ {int snt_isn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_4 ;
 int const VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net*,int ) ;
 int const VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 TYPE_4__* FUNC_3 (struct sk_buff*) ;


 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 struct net* FUNC_9 (int ) ;
 int FUNC_10 (struct sock*,struct iphdr*,int ) ;
 TYPE_3__* VAR_14 ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 struct inet_connection_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct request_sock*,struct request_sock**) ;
 int FUNC_14 (struct sock*,int ,int,int ) ;
 struct request_sock* FUNC_15 (struct sock*,struct request_sock***,int ,int ,int ) ;
 int FUNC_16 (struct sk_buff*) ;
 struct sock* FUNC_17 (struct net*,int *,int ,int ,int ,int ,int ) ;
 struct inet_sock* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int,scalar_t__) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*) ;
 int VAR_15 ;
 int FUNC_29 (struct sock*) ;
 TYPE_1__* FUNC_30 (struct request_sock*) ;
 struct tcp_sock* FUNC_31 (struct sock*) ;
 scalar_t__ VAR_16 ;
 struct sk_buff* FUNC_32 (struct sock*) ;

void FUNC_33(struct sk_buff *VAR_17, u32 VAR_18)
{
 struct iphdr *VAR_19 = (struct iphdr *)VAR_17->data;
 struct tcphdr *VAR_20 = (struct tcphdr *)(VAR_17->data + (VAR_19->ihl << 2));
 struct inet_connection_sock *VAR_21;
 struct tcp_sock *VAR_22;
 struct inet_sock *VAR_23;
 const int VAR_24 = FUNC_11(VAR_17)->type;
 const int VAR_25 = FUNC_11(VAR_17)->code;
 struct sock *VAR_26;
 struct sk_buff *VAR_27;
 __u32 VAR_28;
 __u32 VAR_29;
 int VAR_30;
 struct net *VAR_31 = FUNC_9(VAR_17->dev);

 if (VAR_17->len < (VAR_19->ihl << 2) + 8) {
  FUNC_1(VAR_31, VAR_4);
  return;
 }

 VAR_26 = FUNC_17(VAR_31, &VAR_15, VAR_19->daddr, VAR_20->dest,
   VAR_19->saddr, VAR_20->source, FUNC_16(VAR_17));
 if (!VAR_26) {
  FUNC_1(VAR_31, VAR_4);
  return;
 }
 if (VAR_26->sk_state == VAR_13) {
  FUNC_20(FUNC_19(VAR_26));
  return;
 }

 FUNC_7(VAR_26);



 if (FUNC_23(VAR_26))
  FUNC_2(VAR_31, VAR_7);

 if (VAR_26->sk_state == VAR_10)
  goto out;

 VAR_21 = FUNC_12(VAR_26);
 VAR_22 = FUNC_31(VAR_26);
 VAR_28 = FUNC_22(VAR_20->seq);
 if (VAR_26->sk_state != 130 &&
     !FUNC_6(VAR_28, VAR_22->snd_una, VAR_22->snd_nxt)) {
  FUNC_2(VAR_31, VAR_8);
  goto out;
 }

 switch (VAR_24) {
 case 132:

  goto out;
 case 133:
  VAR_30 = VAR_1;
  break;
 case 134:
  if (VAR_25 > VAR_9)
   goto out;

  if (VAR_25 == VAR_2) {
   if (!FUNC_23(VAR_26))
    FUNC_10(VAR_26, VAR_19, VAR_18);
   goto out;
  }

  VAR_30 = VAR_14[VAR_25].errno;


  if (VAR_25 != VAR_5 && VAR_25 != VAR_3)
   break;
  if (VAR_28 != VAR_22->snd_una || !VAR_21->icsk_retransmits ||
      !VAR_21->icsk_backoff)
   break;

  if (FUNC_23(VAR_26))
   break;

  VAR_21->icsk_backoff--;
  FUNC_12(VAR_26)->icsk_rto = (VAR_22->srtt ? FUNC_5(VAR_22) :
   VAR_12) << VAR_21->icsk_backoff;
  FUNC_27(VAR_26);

  VAR_27 = FUNC_32(VAR_26);
  FUNC_0(!VAR_27);

  VAR_29 = VAR_21->icsk_rto - FUNC_21(VAR_21->icsk_rto,
    VAR_16 - FUNC_3(VAR_27)->when);

  if (VAR_29) {
   FUNC_14(VAR_26, VAR_6,
        VAR_29, VAR_11);
  } else {


   FUNC_29(VAR_26);
  }

  break;
 case 131:
  VAR_30 = VAR_0;
  break;
 default:
  goto out;
 }

 switch (VAR_26->sk_state) {
  struct request_sock *VAR_32, **VAR_33;
 case 130:
  if (FUNC_23(VAR_26))
   goto out;

  VAR_32 = FUNC_15(VAR_26, &VAR_33, VAR_20->dest,
       VAR_19->daddr, VAR_19->saddr);
  if (!VAR_32)
   goto out;




  FUNC_4(VAR_32->sk);

  if (VAR_28 != FUNC_30(VAR_32)->snt_isn) {
   FUNC_2(VAR_31, VAR_8);
   goto out;
  }







  FUNC_13(VAR_26, VAR_32, VAR_33);
  goto out;

 case 128:
 case 129:


  if (!FUNC_23(VAR_26)) {
   VAR_26->sk_err = VAR_30;

   VAR_26->sk_error_report(VAR_26);

   FUNC_28(VAR_26);
  } else {
   VAR_26->sk_err_soft = VAR_30;
  }
  goto out;
 }
 VAR_23 = FUNC_18(VAR_26);
 if (!FUNC_23(VAR_26) && VAR_23->recverr) {
  VAR_26->sk_err = VAR_30;
  VAR_26->sk_error_report(VAR_26);
 } else {
  VAR_26->sk_err_soft = VAR_30;
 }

out:
 FUNC_8(VAR_26);
 FUNC_24(VAR_26);
}
