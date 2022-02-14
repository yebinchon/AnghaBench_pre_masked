
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sock {scalar_t__ sk_protocol; int sk_wmem_alloc; int sk_write_queue; int sk_allocation; } ;
struct sk_buff {size_t len; scalar_t__ ip_summed; int data_len; int truesize; scalar_t__ csum; scalar_t__ network_header; scalar_t__ transport_header; } ;
struct TYPE_7__ {TYPE_6__* dev; } ;
struct TYPE_8__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; int rt_dst; } ;
struct page {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; } ;
struct TYPE_10__ {int flags; int fragsize; size_t length; struct ip_options* opt; scalar_t__ dst; } ;
struct inet_sock {TYPE_4__ cork; int dport; scalar_t__ hdrincl; } ;
typedef int ssize_t ;
typedef int __wsum ;
struct TYPE_12__ {int features; } ;
struct TYPE_11__ {int gso_size; int nr_frags; TYPE_3__* frags; int gso_type; } ;
struct TYPE_9__ {int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,unsigned int) ;
 int FUNC_5 (struct page*,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct page*) ;
 struct inet_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int,int ,int ,int) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int,struct page*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,unsigned int,int ,unsigned int,int ) ;
 int FUNC_13 (struct sk_buff*,int,struct page*,int,int) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 struct sk_buff* FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*) ;
 TYPE_5__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sock*) ;
 struct sk_buff* FUNC_23 (struct sock*,int,int,int ) ;
 scalar_t__ FUNC_24 (int) ;

ssize_t FUNC_25(struct sock *VAR_14, struct page *VAR_15,
         int VAR_16, size_t VAR_17, int VAR_18)
{
 struct inet_sock *VAR_19 = FUNC_8(VAR_14);
 struct sk_buff *VAR_20;
 struct rtable *VAR_21;
 struct ip_options *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 unsigned int VAR_27, VAR_28, VAR_29;

 if (VAR_19->hdrincl)
  return -VAR_5;

 if (VAR_18&VAR_10)
  return 0;

 if (FUNC_17(&VAR_14->sk_write_queue))
  return -VAR_1;

 VAR_21 = (struct rtable *)VAR_19->cork.dst;
 if (VAR_19->cork.flags & VAR_6)
  VAR_22 = VAR_19->cork.opt;

 if (!(VAR_21->u.dst.dev->features&VAR_11))
  return -VAR_4;

 VAR_23 = FUNC_1(VAR_21->u.dst.dev);
 VAR_24 = VAR_19->cork.fragsize;

 VAR_28 = sizeof(struct iphdr) + (VAR_22 ? VAR_22->optlen : 0);
 VAR_27 = ((VAR_24 - VAR_28) & ~7) + VAR_28;

 if (VAR_19->cork.length + VAR_17 > 0xFFFF - VAR_28) {
  FUNC_9(VAR_14, VAR_2, VAR_21->rt_dst, VAR_19->dport, VAR_24);
  return -VAR_2;
 }

 if ((VAR_20 = FUNC_15(&VAR_14->sk_write_queue)) == ((void*)0))
  return -VAR_1;

 VAR_19->cork.length += VAR_17;
 if ((VAR_17 + VAR_20->len > VAR_24) &&
     (VAR_14->sk_protocol == VAR_7) &&
     (VAR_21->u.dst.dev->features & VAR_12)) {
  FUNC_20(VAR_20)->gso_size = VAR_24 - VAR_28;
  FUNC_20(VAR_20)->gso_type = VAR_13;
 }


 while (VAR_17 > 0) {
  int VAR_30;

  if (FUNC_14(VAR_20))
   VAR_25 = VAR_17;
  else {


   VAR_25 = VAR_24 - VAR_20->len;
   if (VAR_25 < VAR_17)
    VAR_25 = VAR_27 - VAR_20->len;
  }
  if (VAR_25 <= 0) {
   struct sk_buff *VAR_31;
   int VAR_32;

   VAR_31 = VAR_20;
   VAR_29 = VAR_31->len - VAR_27;

   VAR_32 = VAR_28 + VAR_23 + VAR_29 + 15;
   VAR_20 = FUNC_23(VAR_14, VAR_32, 1, VAR_14->sk_allocation);
   if (FUNC_24(!VAR_20)) {
    VAR_26 = -VAR_3;
    goto error;
   }




   VAR_20->ip_summed = VAR_0;
   VAR_20->csum = 0;
   FUNC_18(VAR_20, VAR_23);




   FUNC_16(VAR_20, VAR_28 + VAR_29);
   FUNC_19(VAR_20);
   VAR_20->transport_header = (VAR_20->network_header +
       VAR_28);
   if (VAR_29) {
    VAR_20->csum = FUNC_12(VAR_31,
           VAR_27,
          FUNC_21(VAR_20),
           VAR_29, 0);
    VAR_31->csum = FUNC_6(VAR_31->csum,
         VAR_20->csum);
    FUNC_10(VAR_31, VAR_27);
   }




   FUNC_2(&VAR_14->sk_write_queue, VAR_20);
   continue;
  }

  VAR_30 = FUNC_20(VAR_20)->nr_frags;
  if (VAR_25 > VAR_17)
   VAR_25 = VAR_17;
  if (FUNC_11(VAR_20, VAR_30, VAR_15, VAR_16)) {
   FUNC_20(VAR_20)->frags[VAR_30-1].size += VAR_25;
  } else if (VAR_30 < VAR_9) {
   FUNC_7(VAR_15);
   FUNC_13(VAR_20, VAR_30, VAR_15, VAR_16, VAR_25);
  } else {
   VAR_26 = -VAR_2;
   goto error;
  }

  if (VAR_20->ip_summed == VAR_0) {
   __wsum VAR_33;
   VAR_33 = FUNC_5(VAR_15, VAR_16, VAR_25);
   VAR_20->csum = FUNC_4(VAR_20->csum, VAR_33, VAR_20->len);
  }

  VAR_20->len += VAR_25;
  VAR_20->data_len += VAR_25;
  VAR_20->truesize += VAR_25;
  FUNC_3(VAR_25, &VAR_14->sk_wmem_alloc);
  VAR_16 += VAR_25;
  VAR_17 -= VAR_25;
 }
 return 0;

error:
 VAR_19->cork.length -= VAR_17;
 FUNC_0(FUNC_22(VAR_14), VAR_8);
 return VAR_26;
}
