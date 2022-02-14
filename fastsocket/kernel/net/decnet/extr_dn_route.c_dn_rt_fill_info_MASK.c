
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; int rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_table; scalar_t__ rtm_tos; int rtm_family; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct TYPE_7__ {scalar_t__ fld_src; scalar_t__ iif; } ;
struct TYPE_8__ {long expires; int error; int metrics; TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_4__ dst; } ;
struct dn_route {int rt_flags; scalar_t__ rt_daddr; scalar_t__ rt_local_src; scalar_t__ rt_gateway; TYPE_3__ fl; TYPE_2__ u; int rt_type; } ;
struct TYPE_5__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 struct rtmsg* FUNC_0 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*,int ,int,scalar_t__*) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 long VAR_14 ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,TYPE_4__*,int ,int ,int ,long,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_15, u32 VAR_16, u32 VAR_17,
      int VAR_18, int VAR_19, unsigned int VAR_20)
{
 struct dn_route *VAR_21 = (struct dn_route *)FUNC_7(VAR_15);
 struct rtmsg *VAR_22;
 struct nlmsghdr *VAR_23;
 unsigned char *VAR_24 = FUNC_8(VAR_15);
 long VAR_25;

 VAR_23 = FUNC_1(VAR_15, VAR_16, VAR_17, VAR_18, sizeof(*VAR_22), VAR_20);
 VAR_22 = FUNC_0(VAR_23);
 VAR_22->rtm_family = VAR_0;
 VAR_22->rtm_dst_len = 16;
 VAR_22->rtm_src_len = 0;
 VAR_22->rtm_tos = 0;
 VAR_22->rtm_table = VAR_13;
 FUNC_3(VAR_15, VAR_7, VAR_13);
 VAR_22->rtm_type = VAR_21->rt_type;
 VAR_22->rtm_flags = (VAR_21->rt_flags & ~0xFFFF) | VAR_9;
 VAR_22->rtm_scope = VAR_12;
 VAR_22->rtm_protocol = VAR_11;
 if (VAR_21->rt_flags & VAR_8)
  VAR_22->rtm_flags |= VAR_10;
 FUNC_2(VAR_15, VAR_1, 2, &VAR_21->rt_daddr);
 if (VAR_21->fl.fld_src) {
  VAR_22->rtm_src_len = 16;
  FUNC_2(VAR_15, VAR_6, 2, &VAR_21->fl.fld_src);
 }
 if (VAR_21->u.dst.dev)
  FUNC_2(VAR_15, VAR_4, sizeof(int), &VAR_21->u.dst.dev->ifindex);





 FUNC_2(VAR_15, VAR_5, 2, &VAR_21->rt_local_src);
 if (VAR_21->rt_daddr != VAR_21->rt_gateway)
  FUNC_2(VAR_15, VAR_2, 2, &VAR_21->rt_gateway);
 if (FUNC_5(VAR_15, VAR_21->u.dst.metrics) < 0)
  goto rtattr_failure;
 VAR_25 = VAR_21->u.dst.expires ? VAR_21->u.dst.expires - VAR_14 : 0;
 if (FUNC_6(VAR_15, &VAR_21->u.dst, 0, 0, 0, VAR_25,
          VAR_21->u.dst.error) < 0)
  goto rtattr_failure;
 if (VAR_21->fl.iif)
  FUNC_2(VAR_15, VAR_3, sizeof(int), &VAR_21->fl.iif);

 VAR_23->nlmsg_len = FUNC_8(VAR_15) - VAR_24;
 return VAR_15->len;

nlmsg_failure:
rtattr_failure:
 FUNC_4(VAR_15, VAR_24);
 return -1;
}
