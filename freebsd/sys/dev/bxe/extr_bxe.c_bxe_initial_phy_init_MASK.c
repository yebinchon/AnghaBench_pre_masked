
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct elink_params {scalar_t__* req_line_speed; int feature_config_flags; int* speed_cap_mask; int loopback_mode; } ;
struct TYPE_2__ {scalar_t__ link_up; } ;
struct bxe_softc {struct elink_params link_params; TYPE_1__ link_vars; } ;


 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (struct bxe_softc*,int ) ;
 int FUNC_13 (struct elink_params*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14(struct bxe_softc *VAR_12,
                     int VAR_13)
{
    int VAR_14, VAR_15 = FUNC_7(VAR_12);
    uint16_t VAR_16 = VAR_12->link_params.req_line_speed[VAR_15];
    struct elink_params *VAR_17 = &VAR_12->link_params;

    FUNC_11(VAR_12);

    if (FUNC_4(VAR_12)) {
        uint32_t VAR_18 = FUNC_0(VAR_12);
        uint32_t VAR_19 = 0;

        if (FUNC_1(VAR_12) && FUNC_3(VAR_12)) {
            VAR_19 |= VAR_0;
        } else if (VAR_18 & 0x4) {
            if (FUNC_2(VAR_12)) {
                VAR_19 |= VAR_3;
            } else {
                VAR_19 |= VAR_0;
            }
        } else if (VAR_18 & 0x8) {
            if (FUNC_2(VAR_12)) {
                VAR_19 |= VAR_2;
            } else {
                VAR_19 |= VAR_1;
            }
        }


        if (VAR_18 & 0x2) {
            VAR_19 |= VAR_1;
        }

        VAR_12->link_params.feature_config_flags |= VAR_19;
    }

    FUNC_5(VAR_12);

    if (VAR_13 == VAR_8) {
        VAR_17->loopback_mode = VAR_5;

        if (VAR_17->req_line_speed[VAR_15] < VAR_7) {
            if (VAR_17->speed_cap_mask[VAR_15] &
                VAR_10) {
                VAR_17->req_line_speed[VAR_15] = VAR_7;
            } else {
                VAR_17->req_line_speed[VAR_15] = VAR_6;
            }
        }
    }

    if (VAR_13 == VAR_9) {
        VAR_17->loopback_mode = VAR_4;
    }

    VAR_14 = FUNC_13(&VAR_12->link_params, &VAR_12->link_vars);

    FUNC_10(VAR_12);

    FUNC_6(VAR_12);

    if (VAR_12->link_vars.link_up) {
        FUNC_12(VAR_12, VAR_11);
        FUNC_8(VAR_12);
    }

    if (!FUNC_4(VAR_12)) {
        FUNC_9(VAR_12);
    }

    VAR_12->link_params.req_line_speed[VAR_15] = VAR_16;
    return (VAR_14);
}
