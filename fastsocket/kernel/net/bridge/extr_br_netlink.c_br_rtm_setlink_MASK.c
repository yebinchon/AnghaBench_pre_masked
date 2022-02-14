
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {struct net_bridge_port* br_port; } ;
struct net_bridge_port {scalar_t__ state; TYPE_1__* br; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_family; int ifi_index; } ;
struct TYPE_2__ {scalar_t__ stp_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 struct ifinfomsg* FUNC_6 (struct nlmsghdr*) ;
 struct nlattr* FUNC_7 (struct nlmsghdr*,int,int ) ;
 int FUNC_8 (struct nlmsghdr*) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11, void *VAR_12)
{
 struct net *VAR_13 = FUNC_9(VAR_10->sk);
 struct ifinfomsg *VAR_14;
 struct nlattr *VAR_15;
 struct net_device *VAR_16;
 struct net_bridge_port *VAR_17;
 u8 VAR_18;

 if (FUNC_8(VAR_11) < sizeof(*VAR_14))
  return -VAR_5;

 VAR_14 = FUNC_6(VAR_11);
 if (VAR_14->ifi_family != VAR_0)
  return -VAR_8;

 VAR_15 = FUNC_7(VAR_11, sizeof(*VAR_14), VAR_9);
 if (!VAR_15 || FUNC_5(VAR_15) < sizeof(u8))
  return -VAR_5;

 VAR_18 = FUNC_4(VAR_15);
 if (VAR_18 > VAR_2)
  return -VAR_5;

 VAR_16 = FUNC_0(VAR_13, VAR_14->ifi_index);
 if (!VAR_16)
  return -VAR_7;

 VAR_17 = VAR_16->br_port;
 if (!VAR_17)
  return -VAR_5;


 if (VAR_17->br->stp_enabled == VAR_1)
  return -VAR_4;

 if (!FUNC_3(VAR_16) ||
     (!FUNC_2(VAR_16) && VAR_18 != VAR_3))
  return -VAR_6;

 VAR_17->state = VAR_18;
 FUNC_1(VAR_17);
 return 0;
}
