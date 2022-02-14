
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sock {int sk_mark; int sk_priority; } ;
struct sk_buff {int network_header; int transport_header; int ip_summed; int mark; int priority; } ;
struct TYPE_8__ {TYPE_4__* dev; } ;
struct TYPE_7__ {TYPE_2__ dst; } ;
struct rtable {TYPE_1__ u; scalar_t__ rt_src; int rt_dst; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; scalar_t__ protocol; scalar_t__ check; int id; int tot_len; scalar_t__ saddr; } ;
struct inet_sock {int recverr; int dport; } ;
struct icmphdr {int type; } ;
struct TYPE_9__ {size_t mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_3 (int ,int ,struct sk_buff*,int *,TYPE_4__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (struct net*,int ) ;
 struct inet_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (unsigned char*,int) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,int,int ,int ,size_t) ;
 int FUNC_11 (struct iphdr*,TYPE_2__*,int *) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (void*,void*,int ,size_t) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,size_t) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (struct sock*,scalar_t__,unsigned int,int*) ;
 struct net* FUNC_21 (struct sock*) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_12, void *VAR_13, size_t VAR_14,
   struct rtable *VAR_15,
   unsigned int VAR_16)
{
 struct inet_sock *VAR_17 = FUNC_7(VAR_12);
 struct net *VAR_18 = FUNC_21(VAR_12);
 struct iphdr *VAR_19;
 struct sk_buff *VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 if (VAR_14 > VAR_15->u.dst.dev->mtu) {
  FUNC_10(VAR_12, VAR_3, VAR_15->rt_dst, VAR_17->dport,
          VAR_15->u.dst.dev->mtu);
  return -VAR_3;
 }
 if (VAR_16&VAR_8)
  goto out;

 VAR_20 = FUNC_20(VAR_12,
      VAR_14 + FUNC_1(VAR_15->u.dst.dev) + 15,
      VAR_16 & VAR_7, &VAR_22);
 if (VAR_20 == ((void*)0))
  goto error;
 FUNC_17(VAR_20, FUNC_2(VAR_15->u.dst.dev));

 VAR_20->priority = VAR_12->sk_priority;
 VAR_20->mark = VAR_12->sk_mark;
 FUNC_15(VAR_20, FUNC_4(&VAR_15->u.dst));

 FUNC_18(VAR_20);
 VAR_19 = FUNC_9(VAR_20);
 FUNC_16(VAR_20, VAR_14);

 VAR_20->ip_summed = VAR_0;

 VAR_20->transport_header = VAR_20->network_header;
 VAR_22 = -VAR_1;
 if (FUNC_13((void *)VAR_19, VAR_13, 0, VAR_14))
  goto error_free;

 VAR_21 = VAR_19->ihl * 4;
 VAR_22 = -VAR_2;
 if (VAR_21 > VAR_14)
  goto error_free;

 if (VAR_21 >= sizeof(*VAR_19)) {
  if (!VAR_19->saddr)
   VAR_19->saddr = VAR_15->rt_src;
  VAR_19->check = 0;
  VAR_19->tot_len = FUNC_5(VAR_14);
  if (!VAR_19->id)
   FUNC_11(VAR_19, &VAR_15->u.dst, ((void*)0));

  VAR_19->check = FUNC_8((unsigned char *)VAR_19, VAR_19->ihl);
 }
 if (VAR_19->protocol == VAR_5)
  FUNC_6(VAR_18, ((struct icmphdr *)
   FUNC_19(VAR_20))->type);

 VAR_22 = FUNC_3(VAR_10, VAR_9, VAR_20, ((void*)0), VAR_15->u.dst.dev,
        VAR_11);
 if (VAR_22 > 0)
  VAR_22 = FUNC_14(VAR_22);
 if (VAR_22)
  goto error;
out:
 return 0;

error_free:
 FUNC_12(VAR_20);
error:
 FUNC_0(VAR_18, VAR_6);
 if (VAR_22 == -VAR_4 && !VAR_17->recverr)
  VAR_22 = 0;
 return VAR_22;
}
