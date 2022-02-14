
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {scalar_t__ ifindex; scalar_t__ mtu; scalar_t__ iflink; int dev_addr; scalar_t__ addr_len; int name; int type; } ;
struct inet6_dev {struct net_device* dev; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; int ifi_flags; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct inet6_dev*) ;
 int FUNC_5 (struct sk_buff*,void*) ;
 void* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_7, struct inet6_dev *VAR_8,
        u32 VAR_9, u32 VAR_10, int VAR_11, unsigned int VAR_12)
{
 struct net_device *VAR_13 = VAR_8->dev;
 struct ifinfomsg *VAR_14;
 struct nlmsghdr *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_10(VAR_7, VAR_9, VAR_10, VAR_11, sizeof(*VAR_14), VAR_12);
 if (VAR_15 == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_8(VAR_15);
 VAR_14->ifi_family = VAR_0;
 VAR_14->__ifi_pad = 0;
 VAR_14->ifi_type = VAR_13->type;
 VAR_14->ifi_index = VAR_13->ifindex;
 VAR_14->ifi_flags = FUNC_3(VAR_13);
 VAR_14->ifi_change = 0;

 FUNC_1(VAR_7, VAR_3, VAR_13->name);

 if (VAR_13->addr_len)
  FUNC_0(VAR_7, VAR_2, VAR_13->addr_len, VAR_13->dev_addr);

 FUNC_2(VAR_7, VAR_5, VAR_13->mtu);
 if (VAR_13->ifindex != VAR_13->iflink)
  FUNC_2(VAR_7, VAR_4, VAR_13->iflink);

 VAR_16 = FUNC_6(VAR_7, VAR_6);
 if (VAR_16 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_4(VAR_7, VAR_8) < 0)
  goto nla_put_failure;

 FUNC_5(VAR_7, VAR_16);
 return FUNC_9(VAR_7, VAR_15);

nla_put_failure:
 FUNC_7(VAR_7, VAR_15);
 return -VAR_1;
}
