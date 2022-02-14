
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_ethhdr {int h_vlan_encapsulated_proto; int h_source; int h_dest; } ;
struct sk_buff {scalar_t__ data; struct net_device* dev; } ;
struct net_device {int dev_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct vlan_ethhdr *VAR_4 = (struct vlan_ethhdr *)(VAR_2->data);

 switch (VAR_4->h_vlan_encapsulated_proto) {






 default:
  FUNC_4("%s: unable to resolve type %X addresses.\n",
    VAR_3->name, FUNC_3(VAR_4->h_vlan_encapsulated_proto));

  FUNC_2(VAR_4->h_source, VAR_3->dev_addr, VAR_0);
  break;
 }

 return 0;
}
