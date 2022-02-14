
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int * supported; void* phy_addr; int * link_config; } ;
struct TYPE_9__ {int num_phys; int multi_phy_config; int* speed_cap_mask; TYPE_1__* phy; } ;
struct bxe_softc {TYPE_3__ port; TYPE_4__ link_params; } ;
struct TYPE_10__ {TYPE_2__* port_hw_config; } ;
struct TYPE_7__ {int external_phy_config2; int external_phy_config; } ;
struct TYPE_6__ {int supported; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,...) ;
 int FUNC_1 (struct bxe_softc*,char*,int ,...) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct bxe_softc*,char*,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_4 (struct bxe_softc*,size_t) ;
 size_t FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*,int ) ;
 TYPE_5__ VAR_24 ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_25,
                            uint32_t VAR_26)
{
    uint32_t VAR_27 = 0;
    uint32_t VAR_28;
    uint8_t VAR_29 = FUNC_5(VAR_25);


    VAR_25->port.supported[0] = 0;
    VAR_25->port.supported[1] = 0;

    switch (VAR_25->link_params.num_phys) {
    case 1:
        VAR_25->port.supported[0] = VAR_25->link_params.phy[VAR_3].supported;
        VAR_27 = 1;
        break;
    case 2:
        VAR_25->port.supported[0] = VAR_25->link_params.phy[VAR_1].supported;
        VAR_27 = 1;
        break;
    case 3:
        if (VAR_25->link_params.multi_phy_config &
            VAR_15) {
            VAR_25->port.supported[1] =
                VAR_25->link_params.phy[VAR_1].supported;
            VAR_25->port.supported[0] =
                VAR_25->link_params.phy[VAR_2].supported;
        } else {
            VAR_25->port.supported[0] =
                VAR_25->link_params.phy[VAR_1].supported;
            VAR_25->port.supported[1] =
                VAR_25->link_params.phy[VAR_2].supported;
        }
        VAR_27 = 2;
        break;
    }

    if (!(VAR_25->port.supported[0] || VAR_25->port.supported[1])) {
        FUNC_1(VAR_25, "Invalid phy config in NVRAM (PHY1=0x%08x PHY2=0x%08x)\n",
              FUNC_6(VAR_25,
                       VAR_24.port_hw_config[VAR_29].external_phy_config),
              FUNC_6(VAR_25,
                       VAR_24.port_hw_config[VAR_29].external_phy_config2));
        return;
    }

    if (FUNC_2(VAR_25))
        VAR_25->port.phy_addr = FUNC_4(VAR_25, VAR_12);
    else {
        switch (VAR_26) {
        case 128:
            VAR_25->port.phy_addr =
                FUNC_4(VAR_25, VAR_13 + VAR_29*0x10);
            break;
        case 129:
            VAR_25->port.phy_addr =
                FUNC_4(VAR_25, VAR_14 + VAR_29*0x18);
            break;
        default:
            FUNC_1(VAR_25, "Invalid switch config in link_config=0x%08x\n",
                  VAR_25->port.link_config[0]);
            return;
        }
    }

    FUNC_0(VAR_25, VAR_0, "PHY addr 0x%08x\n", VAR_25->port.phy_addr);


    for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_20)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_9;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_19)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_8;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_17)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_7;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_16)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_6;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_21)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_5;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_23)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_11;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_18)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_4;
        }

        if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
              VAR_22)) {
            VAR_25->port.supported[VAR_28] &= ~VAR_10;
        }
    }

    FUNC_0(VAR_25, VAR_0, "PHY supported 0=0x%08x 1=0x%08x\n",
          VAR_25->port.supported[0], VAR_25->port.supported[1]);
 FUNC_3(VAR_25, "PHY supported 0=0x%08x 1=0x%08x\n",
     VAR_25->port.supported[0], VAR_25->port.supported[1]);
}
