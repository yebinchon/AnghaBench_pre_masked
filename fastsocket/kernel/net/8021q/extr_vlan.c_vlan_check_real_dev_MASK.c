
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device_ops {int ndo_vlan_rx_kill_vid; int ndo_vlan_rx_add_vid; int ndo_vlan_rx_register; } ;
struct net_device {char* name; int features; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(struct net_device *VAR_5, u16 VAR_6)
{
 const char *VAR_7 = VAR_5->name;
 const struct net_device_ops *VAR_8 = VAR_5->netdev_ops;

 if (VAR_5->features & VAR_4) {
  FUNC_1("8021q: VLANs not supported on %s\n", VAR_7);
  return -VAR_1;
 }

 if ((VAR_5->features & VAR_3) && !VAR_8->ndo_vlan_rx_register) {
  FUNC_1("8021q: device %s has buggy VLAN hw accel\n", VAR_7);
  return -VAR_1;
 }

 if ((VAR_5->features & VAR_2) &&
     (!VAR_8->ndo_vlan_rx_add_vid || !VAR_8->ndo_vlan_rx_kill_vid)) {
  FUNC_1("8021q: Device %s has buggy VLAN hw accel\n", VAR_7);
  return -VAR_1;
 }

 if (FUNC_0(VAR_5, VAR_6) != ((void*)0))
  return -VAR_0;

 return 0;
}
