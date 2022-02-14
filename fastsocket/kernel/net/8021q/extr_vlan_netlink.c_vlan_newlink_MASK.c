
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_dev_info {int vlan_id; int flags; struct net_device* real_dev; } ;
struct nlattr {int dummy; } ;
struct net_device {scalar_t__ mtu; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net* src_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct nlattr**,struct nlattr**) ;
 int FUNC_6 (struct net_device*,int ) ;
 struct vlan_dev_info* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6,
   struct nlattr *VAR_7[], struct nlattr *VAR_8[])
{
 struct vlan_dev_info *VAR_9 = FUNC_7(VAR_6);
 struct net_device *VAR_10;
 struct net *VAR_11 = FUNC_1(VAR_6)->src_net;
 int VAR_12;

 if (!VAR_8[VAR_4])
  return -VAR_0;

 if (!VAR_7[VAR_2])
  return -VAR_0;
 VAR_10 = FUNC_0(VAR_11, FUNC_3(VAR_7[VAR_2]));
 if (!VAR_10)
  return -VAR_1;

 VAR_9->vlan_id = FUNC_2(VAR_8[VAR_4]);
 VAR_9->real_dev = VAR_10;
 VAR_9->flags = VAR_5;

 VAR_12 = FUNC_6(VAR_10, VAR_9->vlan_id);
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_7[VAR_3])
  VAR_6->mtu = VAR_10->mtu;
 else if (VAR_6->mtu > VAR_10->mtu)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_4(VAR_6);
}
