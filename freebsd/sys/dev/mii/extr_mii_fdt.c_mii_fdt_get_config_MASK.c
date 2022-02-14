
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
typedef int pcell_t ;
struct TYPE_4__ {int macnode; int phynode; int flags; int max_speed; int con_type; } ;
typedef TYPE_1__ mii_fdt_phy_config_t ;
typedef int device_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int,char*,int *,int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,char*) ;

mii_fdt_phy_config_t *
FUNC_8(device_t VAR_13)
{
 mii_fdt_phy_config_t *VAR_14;
 device_t VAR_15, VAR_16;
 pcell_t VAR_17;

 VAR_15 = FUNC_2(VAR_13);
 VAR_16 = FUNC_2(VAR_15);

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_10, VAR_12 | VAR_11);





 if ((VAR_14->macnode = FUNC_6(VAR_16)) == -1)
  return (VAR_14);

 VAR_14->con_type = FUNC_4(VAR_14->macnode);





 if ((VAR_14->phynode = FUNC_5(VAR_14->macnode)) == -1)
  return (VAR_14);

 if (FUNC_0(VAR_14->phynode, "max-speed", &VAR_17, sizeof(VAR_17)) > 0)
  VAR_14->max_speed = VAR_17;

 if (FUNC_7(VAR_14->phynode,
     "ethernet-phy-ieee802.3-c45"))
  VAR_14->flags |= VAR_1;

 if (FUNC_1(VAR_14->phynode, "broken-turn-around"))
  VAR_14->flags |= VAR_0;
 if (FUNC_1(VAR_14->phynode, "enet-phy-lane-swap"))
  VAR_14->flags |= VAR_8;
 if (FUNC_1(VAR_14->phynode, "enet-phy-lane-no-swap"))
  VAR_14->flags |= VAR_9;
 if (FUNC_1(VAR_14->phynode, "eee-broken-100tx"))
  VAR_14->flags |= VAR_4;
 if (FUNC_1(VAR_14->phynode, "eee-broken-1000t"))
  VAR_14->flags |= VAR_3;
 if (FUNC_1(VAR_14->phynode, "eee-broken-10gt"))
  VAR_14->flags |= VAR_7;
 if (FUNC_1(VAR_14->phynode, "eee-broken-1000kx"))
  VAR_14->flags |= VAR_2;
 if (FUNC_1(VAR_14->phynode, "eee-broken-10gkx4"))
  VAR_14->flags |= VAR_6;
 if (FUNC_1(VAR_14->phynode, "eee-broken-10gkr"))
  VAR_14->flags |= VAR_5;

 return (VAR_14);
}
