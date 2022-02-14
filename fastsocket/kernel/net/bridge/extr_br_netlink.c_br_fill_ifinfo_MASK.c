
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {scalar_t__ ifindex; scalar_t__ mtu; scalar_t__ iflink; int dev_addr; scalar_t__ addr_len; int name; int type; int operstate; } ;
struct net_bridge_port {int state; struct net_device* dev; struct net_bridge* br; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; int ifi_flags; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;
struct TYPE_2__ {scalar_t__ ifindex; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct net_device const*) ;
 scalar_t__ FUNC_5 (struct net_device const*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 int FUNC_10 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_11, const struct net_bridge_port *VAR_12,
     u32 VAR_13, u32 VAR_14, int VAR_15, unsigned int VAR_16)
{
 const struct net_bridge *VAR_17 = VAR_12->br;
 const struct net_device *VAR_18 = VAR_12->dev;
 struct ifinfomsg *VAR_19;
 struct nlmsghdr *VAR_20;
 u8 VAR_21 = FUNC_5(VAR_18) ? VAR_18->operstate : VAR_9;

 FUNC_10("br_fill_info event %d port %s master %s\n",
   VAR_15, VAR_18->name, VAR_17->dev->name);

 VAR_20 = FUNC_9(VAR_11, VAR_13, VAR_14, VAR_15, sizeof(*VAR_19), VAR_16);
 if (VAR_20 == ((void*)0))
  return -VAR_1;

 VAR_19 = FUNC_7(VAR_20);
 VAR_19->ifi_family = VAR_0;
 VAR_19->__ifi_pad = 0;
 VAR_19->ifi_type = VAR_18->type;
 VAR_19->ifi_index = VAR_18->ifindex;
 VAR_19->ifi_flags = FUNC_4(VAR_18);
 VAR_19->ifi_change = 0;

 FUNC_1(VAR_11, VAR_3, VAR_18->name);
 FUNC_2(VAR_11, VAR_5, VAR_17->dev->ifindex);
 FUNC_2(VAR_11, VAR_6, VAR_18->mtu);
 FUNC_3(VAR_11, VAR_7, VAR_21);

 if (VAR_18->addr_len)
  FUNC_0(VAR_11, VAR_2, VAR_18->addr_len, VAR_18->dev_addr);

 if (VAR_18->ifindex != VAR_18->iflink)
  FUNC_2(VAR_11, VAR_4, VAR_18->iflink);

 if (VAR_15 == VAR_10)
  FUNC_3(VAR_11, VAR_8, VAR_12->state);

 return FUNC_8(VAR_11, VAR_20);

nla_put_failure:
 FUNC_6(VAR_11, VAR_20);
 return -VAR_1;
}
