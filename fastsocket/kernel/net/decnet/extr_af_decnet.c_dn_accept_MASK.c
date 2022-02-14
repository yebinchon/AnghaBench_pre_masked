
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_dn {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_allocation; int sk_dst_cache; int sk_ack_backlog; int sk_receive_queue; } ;
struct sk_buff {unsigned char* data; int len; } ;
struct optdata_dn {int dummy; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {int services; int segsize; int dst; int src; int info; int src_port; } ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ a_addr; } ;
struct TYPE_7__ {int sdn_flags; TYPE_1__ sdn_add; } ;
struct TYPE_8__ {scalar_t__ state; int services_rem; int segsize_rem; scalar_t__ accept_mode; TYPE_2__ discdata_out; TYPE_2__ conndata_out; TYPE_2__ peer; int conndata_in; int accessdata; TYPE_2__ addr; int max_window; int info_rem; int addrrem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct sk_buff*,int *) ;
 struct sock* FUNC_5 (int ,struct socket*,int ) ;
 int FUNC_6 (struct sock*,long*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 int FUNC_10 (unsigned char*,int ,TYPE_2__*,unsigned char*) ;
 struct sk_buff* FUNC_11 (struct sock*,long*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_16 (struct sock*) ;
 struct sk_buff* FUNC_17 (int *) ;
 struct dst_entry* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int *) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sock*) ;
 long FUNC_22 (struct sock*,int) ;
 int FUNC_23 (struct sock*,int ) ;
 int FUNC_24 (int *,struct dst_entry*) ;

__attribute__((used)) static int FUNC_25(struct socket *VAR_18, struct socket *VAR_19, int VAR_20)
{
 struct sock *VAR_21 = VAR_18->sk, *VAR_22;
 struct sk_buff *VAR_23 = ((void*)0);
 struct dn_skb_cb *VAR_24;
 unsigned char VAR_25;
 int VAR_26 = 0;
 unsigned char VAR_27;
 long VAR_28 = FUNC_22(VAR_21, VAR_20 & VAR_11);
 struct dst_entry *VAR_29;

 FUNC_14(VAR_21);

 if (VAR_21->sk_state != VAR_16 || FUNC_0(VAR_21)->state != VAR_6) {
  FUNC_16(VAR_21);
  return -VAR_7;
 }

 VAR_23 = FUNC_17(&VAR_21->sk_receive_queue);
 if (VAR_23 == ((void*)0)) {
  VAR_23 = FUNC_11(VAR_21, &VAR_28);
  if (FUNC_2(VAR_23)) {
   FUNC_16(VAR_21);
   return FUNC_3(VAR_23);
  }
 }

 VAR_24 = FUNC_1(VAR_23);
 VAR_21->sk_ack_backlog--;
 VAR_22 = FUNC_5(FUNC_21(VAR_21), VAR_19, VAR_21->sk_allocation);
 if (VAR_22 == ((void*)0)) {
  FUNC_16(VAR_21);
  FUNC_13(VAR_23);
  return -VAR_8;
 }
 FUNC_16(VAR_21);

 VAR_29 = FUNC_18(VAR_23);
 FUNC_12(FUNC_24(&VAR_22->sk_dst_cache, VAR_29));
 FUNC_19(VAR_23, ((void*)0));

 FUNC_0(VAR_22)->state = VAR_1;
 FUNC_0(VAR_22)->addrrem = VAR_24->src_port;
 FUNC_0(VAR_22)->services_rem = VAR_24->services;
 FUNC_0(VAR_22)->info_rem = VAR_24->info;
 FUNC_0(VAR_22)->segsize_rem = VAR_24->segsize;
 FUNC_0(VAR_22)->accept_mode = FUNC_0(VAR_21)->accept_mode;

 if (FUNC_0(VAR_22)->segsize_rem < 230)
  FUNC_0(VAR_22)->segsize_rem = 230;

 if ((FUNC_0(VAR_22)->services_rem & VAR_9) == VAR_10)
  FUNC_0(VAR_22)->max_window = VAR_17;

 VAR_22->sk_state = VAR_16;
 FUNC_15(&(FUNC_0(VAR_22)->addr), &(FUNC_0(VAR_21)->addr), sizeof(struct sockaddr_dn));





 FUNC_0(VAR_22)->addr.sdn_flags &= ~VAR_14;

 FUNC_20(VAR_23, FUNC_10(VAR_23->data, VAR_23->len, &(FUNC_0(VAR_22)->addr), &VAR_27));
 FUNC_20(VAR_23, FUNC_10(VAR_23->data, VAR_23->len, &(FUNC_0(VAR_22)->peer), &VAR_27));
 *(__le16 *)(FUNC_0(VAR_22)->peer.sdn_add.a_addr) = VAR_24->src;
 *(__le16 *)(FUNC_0(VAR_22)->addr.sdn_add.a_addr) = VAR_24->dst;

 VAR_25 = *VAR_23->data;
 FUNC_20(VAR_23, 1);

 if (VAR_25 & VAR_2)
  FUNC_4(VAR_23, &(FUNC_0(VAR_22)->accessdata));

 if (VAR_25 & VAR_5)
  FUNC_9(VAR_23, &(FUNC_0(VAR_22)->conndata_in));

 if (VAR_25 & VAR_3)
  FUNC_0(VAR_22)->peer.sdn_flags |= VAR_12;

 if (VAR_25 & VAR_4)
  FUNC_0(VAR_22)->peer.sdn_flags |= VAR_13;

 FUNC_13(VAR_23);

 FUNC_15(&(FUNC_0(VAR_22)->conndata_out), &(FUNC_0(VAR_21)->conndata_out),
  sizeof(struct optdata_dn));
 FUNC_15(&(FUNC_0(VAR_22)->discdata_out), &(FUNC_0(VAR_21)->discdata_out),
  sizeof(struct optdata_dn));

 FUNC_14(VAR_22);
 VAR_26 = FUNC_7(VAR_22);
 if (VAR_26 == 0) {
  FUNC_23(VAR_22, VAR_15);
  FUNC_8(VAR_22);





  if (FUNC_0(VAR_22)->accept_mode == VAR_0)
   VAR_26 = FUNC_6(VAR_22, &VAR_28,
      VAR_21->sk_allocation);
 }
 FUNC_16(VAR_22);
 return VAR_26;
}
