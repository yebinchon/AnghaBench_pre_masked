
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int dummy; } ;
struct sk_buff {int deliver_no_wcard; int pkt_type; struct net_device* dev; int iif; } ;
struct net_device {int flags; int ifindex; int master; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 struct net_device* FUNC_7 (struct vlan_group*,int) ;

int FUNC_8(struct sk_buff *VAR_4, struct vlan_group *VAR_5,
        u16 VAR_6, int VAR_7)
{
 struct net_device *VAR_8;
 u16 VAR_9;

 if (FUNC_5(VAR_4))
  return VAR_1;

 if (FUNC_6(VAR_4, FUNC_0(VAR_4->dev->master)))
  VAR_4->deliver_no_wcard = 1;

 VAR_4->iif = VAR_4->dev->ifindex;
 VAR_9 = VAR_6 & VAR_3;
 if (VAR_9)
  FUNC_1(VAR_4, VAR_6);
 VAR_8 = FUNC_7(VAR_5, VAR_9);

 if (VAR_8)
  VAR_4->dev = VAR_8;
 else if (VAR_9) {
  if (!(VAR_4->dev->flags & VAR_0))
   goto drop;
  VAR_4->pkt_type = VAR_2;
 }

 return (VAR_7 ? FUNC_3(VAR_4) : FUNC_4(VAR_4));

drop:
 FUNC_2(VAR_4);
 return VAR_1;
}
