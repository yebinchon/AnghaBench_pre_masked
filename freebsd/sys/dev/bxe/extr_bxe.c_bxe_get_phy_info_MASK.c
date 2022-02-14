
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int eee_mode; int feature_config_flags; int switch_cfg; int * speed_cap_mask; int lane_config; } ;
struct TYPE_5__ {int config; int * link_config; } ;
struct bxe_softc {scalar_t__ autogreeen; int media; TYPE_3__ link_params; TYPE_1__ port; } ;
struct TYPE_8__ {TYPE_2__* port_feature_config; } ;
struct TYPE_6__ {int eee_power_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int FUNC_1 (struct bxe_softc*,char*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 (struct bxe_softc*) ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_11)
{
    uint8_t VAR_12 = FUNC_2(VAR_11);
    uint32_t VAR_13 = VAR_11->port.config;
    uint32_t VAR_14;



    FUNC_1(VAR_11, "lane_config=0x%08x speed_cap_mask0=0x%08x "
                        "link_config0=0x%08x\n",
               VAR_11->link_params.lane_config,
               VAR_11->link_params.speed_cap_mask[0],
               VAR_11->port.link_config[0]);


    FUNC_5(VAR_11, VAR_11->link_params.switch_cfg);
    FUNC_4(VAR_11);

    if (VAR_11->autogreeen == VAR_1) {
        VAR_11->link_params.feature_config_flags |=
            VAR_5;
    } else if (VAR_11->autogreeen == VAR_0) {
        VAR_11->link_params.feature_config_flags &=
            ~VAR_5;
    } else if (VAR_13 & VAR_6) {
        VAR_11->link_params.feature_config_flags |=
            VAR_5;
    }


    VAR_14 =
        (((FUNC_3(VAR_11, VAR_10.port_feature_config[VAR_12].eee_power_mode)) &
          VAR_8) >>
         VAR_9);
    if (VAR_14 != VAR_7) {
        VAR_11->link_params.eee_mode = (VAR_2 |
                                    VAR_3 |
                                    VAR_4);
    } else {
        VAR_11->link_params.eee_mode = 0;
    }


    FUNC_6(VAR_11);
 FUNC_0(VAR_11, "detected media type\n", VAR_11->media);
}
