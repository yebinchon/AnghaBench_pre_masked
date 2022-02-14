
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {struct sock* v6_ctl_sk; } ;
struct net {TYPE_1__ dccp; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct flowi {int fl_ip_sport; int fl_ip_dport; int oif; int proto; int fl6_src; int fl6_dst; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_6__ {scalar_t__ dccph_type; int dccph_sport; int dccph_dport; int dccph_checksum; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (struct sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int *,int *) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,struct flowi*,int *,int ) ;
 int FUNC_8 (int *,int *) ;
 struct ipv6hdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct flowi*,int ,int) ;
 int FUNC_13 (struct sk_buff*,struct flowi*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_16 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

__attribute__((used)) static void FUNC_17(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct ipv6hdr *VAR_6;
 struct sk_buff *VAR_7;
 struct flowi VAR_8;
 struct net *VAR_9 = FUNC_4(FUNC_14(VAR_5)->dev);
 struct sock *VAR_10 = VAR_9->dccp.v6_ctl_sk;
 struct dst_entry *VAR_11;

 if (FUNC_2(VAR_5)->dccph_type == VAR_2)
  return;

 if (!FUNC_10(VAR_5))
  return;

 VAR_7 = FUNC_1(VAR_10, VAR_5);
 if (VAR_7 == ((void*)0))
  return;

 VAR_6 = FUNC_9(VAR_5);
 FUNC_2(VAR_7)->dccph_checksum = FUNC_3(VAR_7, &VAR_6->saddr,
           &VAR_6->daddr);

 FUNC_12(&VAR_8, 0, sizeof(VAR_8));
 FUNC_8(&VAR_8.fl6_dst, &VAR_6->saddr);
 FUNC_8(&VAR_8.fl6_src, &VAR_6->daddr);

 VAR_8.proto = VAR_3;
 VAR_8.oif = FUNC_5(VAR_5);
 VAR_8.fl_ip_dport = FUNC_2(VAR_7)->dccph_dport;
 VAR_8.fl_ip_sport = FUNC_2(VAR_7)->dccph_sport;
 FUNC_13(VAR_5, &VAR_8);


 if (!FUNC_6(VAR_10, &VAR_11, &VAR_8)) {
  if (FUNC_16(VAR_9, &VAR_11, &VAR_8, ((void*)0), 0) >= 0) {
   FUNC_15(VAR_7, VAR_11);
   FUNC_7(VAR_10, VAR_7, &VAR_8, ((void*)0), 0);
   FUNC_0(VAR_1);
   FUNC_0(VAR_0);
   return;
  }
 }

 FUNC_11(VAR_7);
}
