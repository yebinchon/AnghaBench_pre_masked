
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; int rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; scalar_t__ rtm_table; int rtm_tos; int rtm_family; } ;
struct TYPE_10__ {int error; long expires; int metrics; scalar_t__ tclassid; TYPE_1__* dev; } ;
struct TYPE_9__ {TYPE_5__ dst; } ;
struct TYPE_8__ {scalar_t__ fl4_src; scalar_t__ iif; int fl4_tos; } ;
struct rtable {int rt_flags; scalar_t__ rt_dst; scalar_t__ rt_spec_dst; scalar_t__ rt_src; scalar_t__ rt_gateway; TYPE_4__ u; TYPE_3__ fl; TYPE_2__* peer; int rt_type; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_7__ {int ip_id_count; int tcp_ts_stamp; int tcp_ts; } ;
struct TYPE_6__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 () ;
 int FUNC_4 (struct net*,struct sk_buff*,struct rtmsg*,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 long VAR_17 ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int,int,int,int,unsigned int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,TYPE_5__*,int,int,int,long,int) ;
 struct rtable* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_18,
   struct sk_buff *VAR_19, u32 VAR_20, u32 VAR_21, int VAR_22,
   int VAR_23, unsigned int VAR_24)
{
 struct rtable *VAR_25 = FUNC_13(VAR_19);
 struct rtmsg *VAR_26;
 struct nlmsghdr *VAR_27;
 long VAR_28;
 u32 VAR_29 = 0, VAR_30 = 0, VAR_31 = 0, VAR_32;

 VAR_27 = FUNC_10(VAR_19, VAR_20, VAR_21, VAR_22, sizeof(*VAR_26), VAR_24);
 if (VAR_27 == ((void*)0))
  return -VAR_1;

 VAR_26 = FUNC_8(VAR_27);
 VAR_26->rtm_family = VAR_0;
 VAR_26->rtm_dst_len = 32;
 VAR_26->rtm_src_len = 0;
 VAR_26->rtm_tos = VAR_25->fl.fl4_tos;
 VAR_26->rtm_table = VAR_16;
 FUNC_2(VAR_19, VAR_10, VAR_16);
 VAR_26->rtm_type = VAR_25->rt_type;
 VAR_26->rtm_scope = VAR_15;
 VAR_26->rtm_protocol = VAR_14;
 VAR_26->rtm_flags = (VAR_25->rt_flags & ~0xFFFF) | VAR_12;
 if (VAR_25->rt_flags & VAR_11)
  VAR_26->rtm_flags |= VAR_13;

 FUNC_1(VAR_19, VAR_3, VAR_25->rt_dst);

 if (VAR_25->fl.fl4_src) {
  VAR_26->rtm_src_len = 32;
  FUNC_1(VAR_19, VAR_9, VAR_25->fl.fl4_src);
 }
 if (VAR_25->u.dst.dev)
  FUNC_2(VAR_19, VAR_7, VAR_25->u.dst.dev->ifindex);




 if (VAR_25->fl.iif)
  FUNC_1(VAR_19, VAR_8, VAR_25->rt_spec_dst);
 else if (VAR_25->rt_src != VAR_25->fl.fl4_src)
  FUNC_1(VAR_19, VAR_8, VAR_25->rt_src);

 if (VAR_25->rt_dst != VAR_25->rt_gateway)
  FUNC_1(VAR_19, VAR_5, VAR_25->rt_gateway);

 if (FUNC_11(VAR_19, VAR_25->u.dst.metrics) < 0)
  goto nla_put_failure;

 VAR_32 = VAR_25->u.dst.error;
 VAR_28 = VAR_25->u.dst.expires ? VAR_25->u.dst.expires - VAR_17 : 0;
 if (VAR_25->peer) {
  VAR_29 = VAR_25->peer->ip_id_count;
  if (VAR_25->peer->tcp_ts_stamp) {
   VAR_30 = VAR_25->peer->tcp_ts;
   VAR_31 = FUNC_3() - VAR_25->peer->tcp_ts_stamp;
  }
 }

 if (VAR_25->fl.iif) {
   FUNC_2(VAR_19, VAR_6, VAR_25->fl.iif);
 }

 if (FUNC_12(VAR_19, &VAR_25->u.dst, VAR_29, VAR_30, VAR_31,
          VAR_28, VAR_32) < 0)
  goto nla_put_failure;

 return FUNC_9(VAR_19, VAR_27);

nla_put_failure:
 FUNC_7(VAR_19, VAR_27);
 return -VAR_1;
}
