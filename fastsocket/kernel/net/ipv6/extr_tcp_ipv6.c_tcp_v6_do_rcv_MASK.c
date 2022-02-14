
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; } ;
struct sock {int sk_state; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; int rxhash; } ;
struct TYPE_7__ {scalar_t__ rxtclass; scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_8__ {TYPE_1__ bits; scalar_t__ all; } ;
struct ipv6_pinfo {int pktoptions; TYPE_2__ rxopt; int mcast_hops; int mcast_oif; } ;
struct TYPE_11__ {scalar_t__ end_seq; } ;
struct TYPE_10__ {int hop_limit; } ;
struct TYPE_9__ {int rcv_tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_6 (struct sock*) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_3__* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sock*,struct sock*,struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sock*,struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_22 (struct sock*,struct sk_buff*,int ,scalar_t__) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_25 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_26 (struct sock*,struct sk_buff*) ;
 int FUNC_27 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_28 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_29(struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct ipv6_pinfo *VAR_9 = FUNC_6(VAR_7);
 struct tcp_sock *VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 if (VAR_8->protocol == FUNC_4(VAR_0))
  return FUNC_24(VAR_7, VAR_8);






 if (FUNC_12(VAR_7, VAR_8))
  goto discard;
 if (VAR_9->rxopt.all)
  VAR_11 = FUNC_13(VAR_8, VAR_1);

 if (VAR_7->sk_state == VAR_4) {
  FUNC_0(VAR_7);
  FUNC_16(VAR_7, VAR_8->rxhash);
  if (FUNC_21(VAR_7, VAR_8, FUNC_19(VAR_8), VAR_8->len))
   goto reset;
  FUNC_0(VAR_7);
  if (VAR_11)
   goto ipv6_pktoptions;
  return 0;
 }

 if (VAR_8->len < FUNC_20(VAR_8) || FUNC_17(VAR_8))
  goto csum_err;

 if (VAR_7->sk_state == VAR_5) {
  struct sock *VAR_12 = FUNC_25(VAR_7, VAR_8);
  if (!VAR_12)
   goto discard;






  if(VAR_12 != VAR_7) {
   FUNC_16(VAR_12, VAR_8->rxhash);
   if (FUNC_18(VAR_7, VAR_12, VAR_8))
    goto reset;
   if (VAR_11)
    FUNC_3(VAR_11);
   return 0;
  }
 } else
  FUNC_16(VAR_7, VAR_8->rxhash);

 FUNC_0(VAR_7);
 if (FUNC_22(VAR_7, VAR_8, FUNC_19(VAR_8), VAR_8->len))
  goto reset;
 FUNC_0(VAR_7);
 if (VAR_11)
  goto ipv6_pktoptions;
 return 0;

reset:
 FUNC_27(VAR_7, VAR_8);
discard:
 if (VAR_11)
  FUNC_3(VAR_11);
 FUNC_10(VAR_8);
 return 0;
csum_err:
 FUNC_1(FUNC_15(VAR_7), VAR_6);
 goto discard;


ipv6_pktoptions:







 VAR_10 = FUNC_23(VAR_7);
 if (FUNC_2(VAR_11)->end_seq == VAR_10->rcv_nxt &&
     !((1 << VAR_7->sk_state) & (VAR_2 | VAR_3))) {
  if (VAR_9->rxopt.bits.rxinfo || VAR_9->rxopt.bits.rxoinfo)
   VAR_9->mcast_oif = FUNC_5(VAR_11);
  if (VAR_9->rxopt.bits.rxhlim || VAR_9->rxopt.bits.rxohlim)
   VAR_9->mcast_hops = FUNC_7(VAR_11)->hop_limit;
  if (VAR_9->rxopt.bits.rxtclass)
   FUNC_11(VAR_7)->rcv_tos = FUNC_9(FUNC_7(VAR_8));
  if (FUNC_8(VAR_7, VAR_11)) {
   FUNC_14(VAR_11, VAR_7);
   VAR_11 = FUNC_28(&VAR_9->pktoptions, VAR_11);
  } else {
   FUNC_3(VAR_11);
   VAR_11 = FUNC_28(&VAR_9->pktoptions, ((void*)0));
  }
 }

 FUNC_10(VAR_11);
 return 0;
}
