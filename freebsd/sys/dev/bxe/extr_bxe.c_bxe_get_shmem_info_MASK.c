
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int port; int hw_led_mode; int switch_cfg; int* mac_addr; void* multi_phy_config; int feature_config_flags; void* lane_config; void** speed_cap_mask; struct bxe_softc* sc; } ;
struct TYPE_14__ {int* link_config; void* ext_phy_config; void* config; } ;
struct TYPE_11__ {int hw_config; void* hw_config2; } ;
struct bxe_softc {scalar_t__* mac_addr_str; TYPE_7__ link_params; TYPE_5__ port; TYPE_2__ devinfo; } ;
struct TYPE_13__ {int config; } ;
struct TYPE_10__ {int config2; int config; } ;
struct TYPE_18__ {TYPE_6__* port_hw_config; TYPE_4__ shared_feature_config; TYPE_3__* port_feature_config; TYPE_1__ shared_hw_config; } ;
struct TYPE_17__ {int mac_lower; int mac_upper; } ;
struct TYPE_15__ {int mac_lower; int mac_upper; int external_phy_config; int multi_phy_config; int lane_config; int speed_capability_mask2; int speed_capability_mask; } ;
struct TYPE_12__ {int link_config2; int link_config; int config; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int VAR_4 ;
 size_t FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_6 (struct bxe_softc*,int ) ;
 int FUNC_7 (struct bxe_softc*) ;
 TYPE_9__ VAR_8 ;
 TYPE_8__* VAR_9 ;
 int FUNC_8 (scalar_t__*,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_9(struct bxe_softc *VAR_10)
{
    int VAR_11;
    uint32_t VAR_12, VAR_13, VAR_14;

    VAR_11 = FUNC_5(VAR_10);
    VAR_12 = VAR_13 = 0;

    VAR_10->link_params.sc = VAR_10;
    VAR_10->link_params.port = VAR_11;


    VAR_10->devinfo.hw_config =
        FUNC_6(VAR_10, VAR_8.shared_hw_config.config);
    VAR_10->devinfo.hw_config2 =
        FUNC_6(VAR_10, VAR_8.shared_hw_config.config2);

    VAR_10->link_params.hw_led_mode =
        ((VAR_10->devinfo.hw_config & VAR_6) >>
         VAR_7);


    VAR_10->port.config =
        FUNC_6(VAR_10, VAR_8.port_feature_config[VAR_11].config);


    VAR_10->link_params.speed_cap_mask[0] =
        FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].speed_capability_mask);
    VAR_10->link_params.speed_cap_mask[1] =
        FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].speed_capability_mask2);


    VAR_10->link_params.lane_config =
        FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].lane_config);


    VAR_14 = FUNC_6(VAR_10, VAR_8.port_feature_config[VAR_11].link_config);
    VAR_10->port.link_config[VAR_3] = VAR_14;
    VAR_10->link_params.switch_cfg = (VAR_14 & VAR_4);
    VAR_10->port.link_config[VAR_1] =
        FUNC_6(VAR_10, VAR_8.port_feature_config[VAR_11].link_config2);


    VAR_14 = FUNC_6(VAR_10, VAR_8.shared_feature_config.config);
    if (VAR_14 & VAR_5) {
        VAR_10->link_params.feature_config_flags |=
            VAR_2;
    } else {
        VAR_10->link_params.feature_config_flags &=
            ~VAR_2;
    }


    VAR_10->link_params.multi_phy_config =
        FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].multi_phy_config);


    VAR_10->port.ext_phy_config =
        FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].external_phy_config);


    FUNC_7(VAR_10);


    if (FUNC_2(VAR_10)) {
        VAR_12 = FUNC_3(VAR_10, VAR_9[FUNC_4(VAR_10)].mac_upper);
        VAR_13 = FUNC_3(VAR_10, VAR_9[FUNC_4(VAR_10)].mac_lower);
    } else {
        VAR_12 = FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].mac_upper);
        VAR_13 = FUNC_6(VAR_10, VAR_8.port_hw_config[VAR_11].mac_lower);
    }

    if ((VAR_13 == 0) && (VAR_12 == 0)) {
        *VAR_10->mac_addr_str = 0;
        FUNC_1(VAR_10, "No Ethernet address programmed!\n");
    } else {
        VAR_10->link_params.mac_addr[0] = (uint8_t)(VAR_12 >> 8);
        VAR_10->link_params.mac_addr[1] = (uint8_t)(VAR_12);
        VAR_10->link_params.mac_addr[2] = (uint8_t)(VAR_13 >> 24);
        VAR_10->link_params.mac_addr[3] = (uint8_t)(VAR_13 >> 16);
        VAR_10->link_params.mac_addr[4] = (uint8_t)(VAR_13 >> 8);
        VAR_10->link_params.mac_addr[5] = (uint8_t)(VAR_13);
        FUNC_8(VAR_10->mac_addr_str, sizeof(VAR_10->mac_addr_str),
                 "%02x:%02x:%02x:%02x:%02x:%02x",
                 VAR_10->link_params.mac_addr[0], VAR_10->link_params.mac_addr[1],
                 VAR_10->link_params.mac_addr[2], VAR_10->link_params.mac_addr[3],
                 VAR_10->link_params.mac_addr[4], VAR_10->link_params.mac_addr[5]);
        FUNC_0(VAR_10, VAR_0, "Ethernet address: %s\n", VAR_10->mac_addr_str);
    }

    return (0);
}
