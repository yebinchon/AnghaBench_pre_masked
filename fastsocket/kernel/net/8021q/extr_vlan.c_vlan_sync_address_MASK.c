
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_info {int real_dev_addr; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct vlan_dev_info* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
         struct net_device *VAR_2)
{
 struct vlan_dev_info *VAR_3 = FUNC_4(VAR_2);


 if (!FUNC_0(VAR_3->real_dev_addr, VAR_1->dev_addr))
  return;



 if (FUNC_0(VAR_2->dev_addr, VAR_3->real_dev_addr) &&
     !FUNC_0(VAR_2->dev_addr, VAR_1->dev_addr))
  FUNC_2(VAR_1, VAR_2->dev_addr);



 if (!FUNC_0(VAR_2->dev_addr, VAR_3->real_dev_addr) &&
     FUNC_0(VAR_2->dev_addr, VAR_1->dev_addr))
  FUNC_1(VAR_1, VAR_2->dev_addr);

 FUNC_3(VAR_3->real_dev_addr, VAR_1->dev_addr, VAR_0);
}
