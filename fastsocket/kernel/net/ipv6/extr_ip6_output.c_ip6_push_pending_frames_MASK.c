
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_mark; int sk_priority; int sk_write_queue; } ;
struct sk_buff {scalar_t__ data; int local_df; scalar_t__ len; int mark; int priority; int * sk; int * destructor; scalar_t__ truesize; int data_len; struct sk_buff* next; } ;
struct TYPE_8__ {int dst; } ;
struct rt6_info {int rt6i_idev; TYPE_3__ u; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {unsigned char nexthdr; struct in6_addr daddr; struct in6_addr saddr; int hop_limit; } ;
struct ipv6_txoptions {scalar_t__ opt_nflen; scalar_t__ opt_flen; } ;
struct TYPE_7__ {int hop_limit; scalar_t__ tclass; struct ipv6_txoptions* opt; } ;
struct ipv6_pinfo {scalar_t__ pmtudisc; TYPE_2__ cork; } ;
struct flowi {unsigned char proto; int fl6_flowlabel; struct in6_addr fl6_src; struct in6_addr fl6_dst; } ;
struct TYPE_6__ {struct flowi fl; scalar_t__ dst; } ;
struct inet_sock {TYPE_1__ cork; } ;
struct inet6_dev {int dummy; } ;
typedef int __be32 ;
struct TYPE_10__ {int icmp6_type; } ;
struct TYPE_9__ {struct sk_buff* frag_list; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net*,int ,int ) ;
 int FUNC_3 (struct net*,int ,int ,scalar_t__) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 TYPE_5__* FUNC_8 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_9 (struct sock*) ;
 struct inet_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct inet_sock*,struct ipv6_pinfo*) ;
 struct inet6_dev* FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct in6_addr*,struct in6_addr*) ;
 struct ipv6hdr* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct ipv6_txoptions*,unsigned char*) ;
 int FUNC_17 (struct sk_buff*,struct ipv6_txoptions*,unsigned char*,struct in6_addr**) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*) ;
 TYPE_4__* FUNC_26 (struct sk_buff*) ;
 struct net* FUNC_27 (struct sock*) ;

int FUNC_28(struct sock *VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7;
 struct sk_buff **VAR_8;
 struct in6_addr VAR_9, *VAR_10 = &VAR_9;
 struct inet_sock *VAR_11 = FUNC_10(VAR_5);
 struct ipv6_pinfo *VAR_12 = FUNC_9(VAR_5);
 struct net *VAR_13 = FUNC_27(VAR_5);
 struct ipv6hdr *VAR_14;
 struct ipv6_txoptions *VAR_15 = VAR_12->cork.opt;
 struct rt6_info *VAR_16 = (struct rt6_info *)VAR_11->cork.dst;
 struct flowi *VAR_17 = &VAR_11->cork.fl;
 unsigned char VAR_18 = VAR_17->proto;
 int VAR_19 = 0;

 if ((VAR_6 = FUNC_4(&VAR_5->sk_write_queue)) == ((void*)0))
  goto out;
 VAR_8 = &(FUNC_26(VAR_6)->frag_list);


 if (VAR_6->data < FUNC_21(VAR_6))
  FUNC_5(VAR_6, FUNC_23(VAR_6));
 while ((VAR_7 = FUNC_4(&VAR_5->sk_write_queue)) != ((void*)0)) {
  FUNC_5(VAR_7, FUNC_22(VAR_6));
  *VAR_8 = VAR_7;
  VAR_8 = &(VAR_7->next);
  VAR_6->len += VAR_7->len;
  VAR_6->data_len += VAR_7->len;
  VAR_6->truesize += VAR_7->truesize;
  VAR_7->destructor = ((void*)0);
  VAR_7->sk = ((void*)0);
 }


 if (VAR_12->pmtudisc < VAR_4)
  VAR_6->local_df = 1;

 FUNC_14(VAR_10, &VAR_17->fl6_dst);
 FUNC_5(VAR_6, FUNC_22(VAR_6));
 if (VAR_15 && VAR_15->opt_flen)
  FUNC_16(VAR_6, VAR_15, &VAR_18);
 if (VAR_15 && VAR_15->opt_nflen)
  FUNC_17(VAR_6, VAR_15, &VAR_18, &VAR_10);

 FUNC_24(VAR_6, sizeof(struct ipv6hdr));
 FUNC_25(VAR_6);
 VAR_14 = FUNC_15(VAR_6);

 *(__be32*)VAR_14 = VAR_17->fl6_flowlabel |
       FUNC_7(0x60000000 | ((int)VAR_12->cork.tclass << 20));

 VAR_14->hop_limit = VAR_12->cork.hop_limit;
 VAR_14->nexthdr = VAR_18;
 FUNC_14(&VAR_14->saddr, &VAR_17->fl6_src);
 FUNC_14(&VAR_14->daddr, VAR_10);

 VAR_6->priority = VAR_5->sk_priority;
 VAR_6->mark = VAR_5->sk_mark;

 FUNC_20(VAR_6, FUNC_6(&VAR_16->u.dst));
 FUNC_3(VAR_13, VAR_16->rt6i_idev, VAR_2, VAR_6->len);
 if (VAR_18 == VAR_1) {
  struct inet6_dev *VAR_20 = FUNC_12(FUNC_19(VAR_6));

  FUNC_0(VAR_13, VAR_20, FUNC_8(VAR_6)->icmp6_type);
  FUNC_1(VAR_13, VAR_20, VAR_0);
 }

 VAR_19 = FUNC_13(VAR_6);
 if (VAR_19) {
  if (VAR_19 > 0)
   VAR_19 = FUNC_18(VAR_19);
  if (VAR_19)
   goto error;
 }

out:
 FUNC_11(VAR_11, VAR_12);
 return VAR_19;
error:
 FUNC_2(VAR_13, VAR_16->rt6i_idev, VAR_3);
 goto out;
}
