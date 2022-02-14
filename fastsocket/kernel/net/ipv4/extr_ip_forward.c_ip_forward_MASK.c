
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; scalar_t__ len; int dev; int priority; int local_df; } ;
struct TYPE_7__ {int dev; scalar_t__ header_len; } ;
struct TYPE_5__ {TYPE_3__ dst; } ;
struct rtable {scalar_t__ rt_dst; scalar_t__ rt_gateway; int rt_flags; TYPE_1__ u; } ;
struct iphdr {int ttl; int frag_off; int tos; } ;
struct ip_options {int srr; scalar_t__ is_strictroute; scalar_t__ router_alert; } ;
struct TYPE_8__ {struct ip_options opt; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct iphdr*) ;
 int VAR_15 ;
 struct iphdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,scalar_t__) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 struct rtable* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int *,int ,struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;

int FUNC_26(struct sk_buff *VAR_16)
{
 struct iphdr *VAR_17;
 struct rtable *VAR_18;
 struct ip_options * VAR_19 = &(FUNC_0(VAR_16)->opt);

 if (FUNC_22(VAR_16))
  goto drop;

 if (!FUNC_24(((void*)0), VAR_14, VAR_16))
  goto drop;

 if (FUNC_0(VAR_16)->opt.router_alert && FUNC_10(VAR_16))
  return VAR_9;

 if (VAR_16->pkt_type != VAR_11)
  goto drop;

 FUNC_18(VAR_16);






 if (FUNC_12(VAR_16)->ttl <= 1)
  goto too_many_hops;

 if (!FUNC_25(VAR_16))
  goto drop;

 VAR_18 = FUNC_20(VAR_16);

 if (VAR_19->is_strictroute && VAR_18->rt_dst != VAR_18->rt_gateway)
  goto sr_failed;

 if (FUNC_23(VAR_16->len > FUNC_6(&VAR_18->u.dst) && !FUNC_19(VAR_16) &&
       (FUNC_12(VAR_16)->frag_off & FUNC_8(VAR_7))) && !VAR_16->local_df) {
  FUNC_1(FUNC_5(VAR_18->u.dst.dev), VAR_5);
  FUNC_9(VAR_16, VAR_0, VAR_2,
     FUNC_7(FUNC_6(&VAR_18->u.dst)));
  goto drop;
 }


 if (FUNC_16(VAR_16, FUNC_3(VAR_18->u.dst.dev)+VAR_18->u.dst.header_len))
  goto drop;
 VAR_17 = FUNC_12(VAR_16);


 FUNC_11(VAR_17);





 if (VAR_18->rt_flags&VAR_13 && !VAR_19->srr && !FUNC_21(VAR_16))
  FUNC_13(VAR_16);

 VAR_16->priority = FUNC_15(VAR_17->tos);

 return FUNC_4(VAR_12, VAR_10, VAR_16, VAR_16->dev, VAR_18->u.dst.dev,
         VAR_15);

sr_failed:



  FUNC_9(VAR_16, VAR_0, VAR_3, 0);
  goto drop;

too_many_hops:

 FUNC_2(FUNC_5(FUNC_17(VAR_16)->dev), VAR_6);
 FUNC_9(VAR_16, VAR_4, VAR_1, 0);
drop:
 FUNC_14(VAR_16);
 return VAR_8;
}
