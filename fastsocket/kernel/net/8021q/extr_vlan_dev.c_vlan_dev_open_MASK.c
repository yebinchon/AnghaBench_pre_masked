
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_info {int flags; int real_dev_addr; struct net_device* real_dev; } ;
struct net_device {int flags; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 struct vlan_dev_info* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_6)
{
 struct vlan_dev_info *VAR_7 = FUNC_9(VAR_6);
 struct net_device *VAR_8 = VAR_7->real_dev;
 int VAR_9;

 if (!(VAR_8->flags & VAR_4))
  return -VAR_0;

 if (FUNC_0(VAR_6->dev_addr, VAR_8->dev_addr)) {
  VAR_9 = FUNC_3(VAR_8, VAR_6->dev_addr);
  if (VAR_9 < 0)
   goto out;
 }

 if (VAR_6->flags & VAR_2) {
  VAR_9 = FUNC_1(VAR_8, 1);
  if (VAR_9 < 0)
   goto del_unicast;
 }
 if (VAR_6->flags & VAR_3) {
  VAR_9 = FUNC_2(VAR_8, 1);
  if (VAR_9 < 0)
   goto clear_allmulti;
 }

 FUNC_5(VAR_7->real_dev_addr, VAR_8->dev_addr, VAR_1);

 if (VAR_7->flags & VAR_5)
  FUNC_10(VAR_6);

 if (FUNC_7(VAR_8))
  FUNC_8(VAR_6);
 return 0;

clear_allmulti:
 if (VAR_6->flags & VAR_2)
  FUNC_1(VAR_8, -1);
del_unicast:
 if (FUNC_0(VAR_6->dev_addr, VAR_8->dev_addr))
  FUNC_4(VAR_8, VAR_6->dev_addr);
out:
 FUNC_6(VAR_6);
 return VAR_9;
}
