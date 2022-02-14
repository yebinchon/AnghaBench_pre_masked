
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {scalar_t__ pkt_type; int len; } ;
struct sctphdr {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_ep_common {int inqueue; struct sock* sk; } ;
struct sctp_endpoint {struct sctp_ep_common base; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {struct sctp_ep_common* rcvr; struct sctp_transport* transport; struct sctphdr* sctp_hdr; } ;
struct sctp_association {struct sctp_ep_common base; } ;
struct sctp_af {scalar_t__ (* skb_iif ) (struct sk_buff*) ;int (* addr_valid ) (union sctp_addr*,int *,struct sk_buff*) ;int (* from_skb ) (union sctp_addr*,struct sk_buff*,int) ;} ;
struct TYPE_6__ {struct sctp_chunk* chunk; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {struct sctp_endpoint* ep; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sctp_association* FUNC_2 (struct sk_buff*,union sctp_addr*,union sctp_addr*,struct sctp_transport**) ;
 struct sctp_endpoint* FUNC_3 (union sctp_addr*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sctp_association*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int VAR_7 ;
 int FUNC_13 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_14 (struct sk_buff*,struct sctp_association*,struct sock*) ;
 int FUNC_15 (struct sctp_endpoint*) ;
 int FUNC_16 (struct sctp_endpoint*) ;
 struct sctp_af* FUNC_17 (int) ;
 struct sock* FUNC_18 () ;
 struct sctphdr* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sctp_chunk*,union sctp_addr*,union sctp_addr*) ;
 int FUNC_21 (int *,struct sctp_chunk*) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sk_buff*) ;
 TYPE_1__* FUNC_24 (struct sock*) ;
 scalar_t__ FUNC_25 (struct sock*,struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 scalar_t__ FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*,int) ;
 int FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (struct sock*) ;
 int FUNC_31 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_32 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_33 (union sctp_addr*,int *,struct sk_buff*) ;
 int FUNC_34 (union sctp_addr*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_35 (struct sk_buff*) ;
 scalar_t__ FUNC_36 (int) ;
 int FUNC_37 (struct sock*,int ,struct sk_buff*,int) ;

int FUNC_38(struct sk_buff *VAR_8)
{
 struct sock *VAR_9;
 struct sctp_association *VAR_10;
 struct sctp_endpoint *VAR_11 = ((void*)0);
 struct sctp_ep_common *VAR_12;
 struct sctp_transport *VAR_13 = ((void*)0);
 struct sctp_chunk *VAR_14;
 struct sctphdr *VAR_15;
 union sctp_addr VAR_16;
 union sctp_addr VAR_17;
 int VAR_18;
 struct sctp_af *VAR_19;

 if (VAR_8->pkt_type!=VAR_0)
  goto discard_it;

 FUNC_0(VAR_1);

 if (FUNC_27(VAR_8))
  goto discard_it;

 VAR_15 = FUNC_19(VAR_8);


 FUNC_4(VAR_8, FUNC_29(VAR_8));
 if (VAR_8->len < sizeof(struct sctphdr))
  goto discard_it;
 if (!VAR_7 && !FUNC_26(VAR_8) &&
    FUNC_22(VAR_8) < 0)
  goto discard_it;

 FUNC_28(VAR_8, sizeof(struct sctphdr));


 if (VAR_8->len < sizeof(struct sctp_chunkhdr))
  goto discard_it;

 VAR_18 = FUNC_6(FUNC_5(VAR_8)->version);
 VAR_19 = FUNC_17(VAR_18);
 if (FUNC_36(!VAR_19))
  goto discard_it;


 VAR_19->from_skb(&VAR_16, VAR_8, 1);
 VAR_19->from_skb(&VAR_17, VAR_8, 0);
 if (!VAR_19->addr_valid(&VAR_16, ((void*)0), VAR_8) ||
     !VAR_19->addr_valid(&VAR_17, ((void*)0), VAR_8))
  goto discard_it;

 VAR_10 = FUNC_2(VAR_8, &VAR_16, &VAR_17, &VAR_13);

 if (!VAR_10)
  VAR_11 = FUNC_3(&VAR_17);


 VAR_12 = VAR_10 ? &VAR_10->base : &VAR_11->base;
 VAR_9 = VAR_12->sk;





 if (VAR_9->sk_bound_dev_if && (VAR_9->sk_bound_dev_if != VAR_19->skb_iif(VAR_8)))
 {
  if (VAR_10) {
   FUNC_10(VAR_10);
   VAR_10 = ((void*)0);
  } else {
   FUNC_16(VAR_11);
   VAR_11 = ((void*)0);
  }
  VAR_9 = FUNC_18();
  VAR_11 = FUNC_24(VAR_9)->ep;
  FUNC_15(VAR_11);
  VAR_12 = &VAR_11->base;
 }
 if (!VAR_10) {
  if (FUNC_23(VAR_8)) {
   FUNC_0(VAR_5);
   goto discard_release;
  }
 }

 if (!FUNC_37(VAR_9, VAR_6, VAR_8, VAR_18))
  goto discard_release;
 FUNC_8(VAR_8);

 if (FUNC_25(VAR_9, VAR_8))
  goto discard_release;


 VAR_14 = FUNC_14(VAR_8, VAR_10, VAR_9);
 if (!VAR_14)
  goto discard_release;
 FUNC_1(VAR_8)->chunk = VAR_14;


 VAR_14->rcvr = VAR_12;


 VAR_14->sctp_hdr = VAR_15;


 FUNC_20(VAR_14, &VAR_16, &VAR_17);


 VAR_14->transport = VAR_13;





 FUNC_11(VAR_9);

 if (VAR_9 != VAR_12->sk) {







  FUNC_12(VAR_9);
  VAR_9 = VAR_12->sk;
  FUNC_11(VAR_9);
 }

 if (FUNC_30(VAR_9)) {
  if (FUNC_9(VAR_9, VAR_8)) {
   FUNC_12(VAR_9);
   FUNC_13(VAR_14);
   VAR_8 = ((void*)0);
   goto discard_release;
  }
  FUNC_0(VAR_2);
 } else {
  FUNC_0(VAR_4);
  FUNC_21(&VAR_14->rcvr->inqueue, VAR_14);
 }

 FUNC_12(VAR_9);


 if (VAR_10)
  FUNC_10(VAR_10);
 else
  FUNC_16(VAR_11);

 return 0;

discard_it:
 FUNC_0(VAR_3);
 FUNC_7(VAR_8);
 return 0;

discard_release:

 if (VAR_10)
  FUNC_10(VAR_10);
 else
  FUNC_16(VAR_11);

 goto discard_it;
}
