
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {scalar_t__* req_line_speed; TYPE_1__* phy; } ;
struct TYPE_12__ {int* supported; int phy_addr; int * advertising; } ;
struct TYPE_10__ {int line_speed; int duplex; scalar_t__ link_up; } ;
struct bxe_softc {scalar_t__ state; int flags; TYPE_5__ link_params; TYPE_4__ port; TYPE_2__ link_vars; } ;
struct TYPE_14__ {int supported; int autoneg; int phy_address; int port; int speed; int duplex; int advertising; } ;
typedef TYPE_6__ bxe_dev_setting_t ;
struct TYPE_15__ {TYPE_3__* port_hw_config; } ;
struct TYPE_11__ {int external_phy_config; } ;
struct TYPE_9__ {scalar_t__ media_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int VAR_15 ;
 size_t FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 TYPE_7__ VAR_16 ;

__attribute__((used)) static int
FUNC_9(struct bxe_softc *VAR_17, bxe_dev_setting_t *VAR_18)
{
    uint32_t VAR_19;
    int VAR_20 = FUNC_3(VAR_17);
    int VAR_21 = FUNC_6(VAR_17);

    VAR_18->supported = VAR_17->port.supported[VAR_21] |
            (VAR_17->port.supported[VAR_21 ^ 1] &
            (VAR_10 | VAR_9));
    VAR_18->advertising = VAR_17->port.advertising[VAR_21];
    if(VAR_17->link_params.phy[FUNC_5(VAR_17)].media_type ==
        VAR_6) {
        VAR_18->supported = ~(VAR_8);
        VAR_18->advertising &= ~(VAR_0);
    }
    if ((VAR_17->state == VAR_4) && VAR_17->link_vars.link_up &&
        !(VAR_17->flags & VAR_3)) {
        VAR_18->duplex = VAR_17->link_vars.duplex;
        if (FUNC_2(VAR_17) && !FUNC_0(VAR_17))
            VAR_18->speed = FUNC_7(VAR_17);
        else
            VAR_18->speed = VAR_17->link_vars.line_speed;
    } else {
        VAR_18->duplex = VAR_5;
        VAR_18->speed = VAR_15;
    }

    VAR_18->port = FUNC_8(VAR_17);

    VAR_19 = FUNC_4(VAR_17,
                         VAR_16.port_hw_config[VAR_20].external_phy_config);
    if((VAR_19 & VAR_13) ==
        VAR_11)
        VAR_18->phy_address = VAR_17->port.phy_addr;
    else if(((VAR_19 & VAR_13) !=
            VAR_12) &&
        ((VAR_19 & VAR_13) !=
            VAR_14))
        VAR_18->phy_address = FUNC_1(VAR_19);
    else
        VAR_18->phy_address = 0;

    if(VAR_17->link_params.req_line_speed[VAR_21] == VAR_7)
        VAR_18->autoneg = VAR_2;
    else
       VAR_18->autoneg = VAR_1;


    return 0;
}
