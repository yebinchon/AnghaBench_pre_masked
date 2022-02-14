
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sfxge_softc {struct ifnet* ifnet; int dev; int enp; } ;
struct ifnet {int if_flags; int if_hwassist; int if_get_counter; int if_qflush; int if_transmit; int if_capenable; int if_capabilities; int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; int if_hw_tsomax; int if_ioctl; struct sfxge_softc* if_softc; int if_init; } ;
struct TYPE_3__ {int enc_mac_addr; scalar_t__ enc_hw_tx_insert_vlan_enabled; } ;
typedef TYPE_1__ efx_nic_cfg_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_21, struct sfxge_softc *VAR_22)
{
 const efx_nic_cfg_t *VAR_23 = FUNC_3(VAR_22->enp);
 device_t VAR_24;
 int VAR_25;

 VAR_24 = VAR_22->dev;
 VAR_22->ifnet = VAR_21;

 FUNC_6(VAR_21, FUNC_1(VAR_24), FUNC_2(VAR_24));
 VAR_21->if_init = VAR_17;
 VAR_21->if_softc = VAR_22;
 VAR_21->if_flags = VAR_8 | VAR_10 | VAR_9;
 VAR_21->if_ioctl = VAR_18;

 VAR_21->if_capabilities = VAR_12;
 VAR_21->if_capenable = VAR_13;
 VAR_21->if_hw_tsomax = VAR_14;
 VAR_21->if_hw_tsomaxsegcount = VAR_15;
 VAR_21->if_hw_tsomaxsegsize = VAR_11;






 if (VAR_23->enc_hw_tx_insert_vlan_enabled) {
  VAR_21->if_capabilities |= VAR_7;
  VAR_21->if_capenable |= VAR_7;
 }
 VAR_21->if_hwassist = VAR_1 | VAR_4 | VAR_0 | VAR_3 |
      VAR_2 | VAR_5;

 FUNC_4(VAR_21, VAR_23->enc_mac_addr);

 VAR_21->if_transmit = VAR_20;
 VAR_21->if_qflush = VAR_19;

 VAR_21->if_get_counter = VAR_16;

 FUNC_0(VAR_22->dev, "ifmedia_init");
 if ((VAR_25 = FUNC_7(VAR_22)) != 0)
  goto fail;

 return (0);

fail:
 FUNC_5(VAR_22->ifnet);
 return (VAR_25);
}
