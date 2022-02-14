
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; int rtm_table; int rtm_flags; int rtm_protocol; int rtm_scope; void* rtm_type; scalar_t__ rtm_tos; int rtm_family; } ;
struct TYPE_16__ {int error; scalar_t__ dev; TYPE_5__* neighbour; int metrics; } ;
struct TYPE_15__ {TYPE_8__ dst; } ;
struct TYPE_12__ {int addr; scalar_t__ plen; } ;
struct in6_addr {int dummy; } ;
struct TYPE_11__ {int plen; struct in6_addr addr; } ;
struct TYPE_10__ {int plen; struct in6_addr addr; } ;
struct rt6_info {int rt6i_flags; int rt6i_metric; long rt6i_expires; TYPE_7__ u; TYPE_6__* rt6i_dev; TYPE_4__ rt6i_prefsrc; TYPE_3__ rt6i_dst; TYPE_2__ rt6i_src; int rt6i_protocol; TYPE_1__* rt6i_table; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_14__ {int flags; int ifindex; } ;
struct TYPE_13__ {struct in6_addr primary_key; } ;
struct TYPE_9__ {int tb6_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct in6_addr*) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_2 (struct net*,struct rt6_info*,struct in6_addr*,int ,struct in6_addr*) ;
 int FUNC_3 (struct net*,struct sk_buff*,struct rtmsg*,int) ;
 int FUNC_4 (struct in6_addr*,int *) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;
 long VAR_28 ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int,int,int,int,unsigned int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,TYPE_8__*,int ,int ,int ,long,int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_29,
    struct sk_buff *VAR_30, struct rt6_info *VAR_31,
    struct in6_addr *VAR_32, struct in6_addr *VAR_33,
    int VAR_34, int VAR_35, u32 VAR_36, u32 VAR_37,
    int VAR_38, int VAR_39, unsigned int VAR_40)
{
 struct rtmsg *VAR_41;
 struct nlmsghdr *VAR_42;
 long VAR_43;
 u32 VAR_44;

 if (VAR_38) {
  if (!(VAR_31->rt6i_flags & VAR_18)) {

   return 1;
  }
 }

 VAR_42 = FUNC_9(VAR_30, VAR_36, VAR_37, VAR_35, sizeof(*VAR_41), VAR_40);
 if (VAR_42 == ((void*)0))
  return -VAR_1;

 VAR_41 = FUNC_7(VAR_42);
 VAR_41->rtm_family = VAR_0;
 VAR_41->rtm_dst_len = VAR_31->rt6i_dst.plen;
 VAR_41->rtm_src_len = VAR_31->rt6i_src.plen;
 VAR_41->rtm_tos = 0;
 if (VAR_31->rt6i_table)
  VAR_44 = VAR_31->rt6i_table->tb6_id;
 else
  VAR_44 = VAR_3;
 VAR_41->rtm_table = VAR_44;
 FUNC_1(VAR_30, VAR_11, VAR_44);
 if (VAR_31->rt6i_flags&VAR_19)
  VAR_41->rtm_type = VAR_23;
 else if (VAR_31->rt6i_flags&VAR_17)
  VAR_41->rtm_type = VAR_21;
 else if (VAR_31->rt6i_dev && (VAR_31->rt6i_dev->flags&VAR_2))
  VAR_41->rtm_type = VAR_21;
 else
  VAR_41->rtm_type = VAR_22;
 VAR_41->rtm_flags = 0;
 VAR_41->rtm_scope = VAR_27;
 VAR_41->rtm_protocol = VAR_31->rt6i_protocol;
 if (VAR_31->rt6i_flags&VAR_15)
  VAR_41->rtm_protocol = VAR_26;
 else if (VAR_31->rt6i_flags & VAR_12)
  VAR_41->rtm_protocol = VAR_24;
 else if (VAR_31->rt6i_flags&VAR_14)
  VAR_41->rtm_protocol = VAR_25;

 if (VAR_31->rt6i_flags&VAR_13)
  VAR_41->rtm_flags |= VAR_20;

 if (VAR_32) {
  FUNC_0(VAR_30, VAR_4, 16, VAR_32);
  VAR_41->rtm_dst_len = 128;
 } else if (VAR_41->rtm_dst_len)
  FUNC_0(VAR_30, VAR_4, 16, &VAR_31->rt6i_dst.addr);







 if (VAR_34) {
   FUNC_1(VAR_30, VAR_6, VAR_34);
 } else if (VAR_32) {
  struct in6_addr VAR_45;
  if (FUNC_2(VAR_29, VAR_31, VAR_32, 0, &VAR_45) == 0)
   FUNC_0(VAR_30, VAR_8, 16, &VAR_45);
 }

 if (VAR_31->rt6i_prefsrc.plen) {
  struct in6_addr VAR_46;
  FUNC_4(&VAR_46, &VAR_31->rt6i_prefsrc.addr);
  FUNC_0(VAR_30, VAR_8, 16, &VAR_46);
 }

 if (FUNC_10(VAR_30, VAR_31->u.dst.metrics) < 0)
  goto nla_put_failure;

 if (VAR_31->u.dst.neighbour)
  FUNC_0(VAR_30, VAR_5, 16, &VAR_31->u.dst.neighbour->primary_key);

 if (VAR_31->u.dst.dev)
  FUNC_1(VAR_30, VAR_7, VAR_31->rt6i_dev->ifindex);

 FUNC_1(VAR_30, VAR_9, VAR_31->rt6i_metric);

 VAR_43 = (VAR_31->rt6i_flags & VAR_16) ? VAR_31->rt6i_expires - VAR_28 : 0;

 if (FUNC_11(VAR_30, &VAR_31->u.dst, 0, 0, 0,
          VAR_43, VAR_31->u.dst.error) < 0)
  goto nla_put_failure;

 return FUNC_8(VAR_30, VAR_42);

nla_put_failure:
 FUNC_6(VAR_30, VAR_42);
 return -VAR_1;
}
