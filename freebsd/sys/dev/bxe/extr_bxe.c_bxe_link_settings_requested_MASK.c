
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int* advertising; size_t* link_config; int* supported; } ;
struct TYPE_5__ {int num_phys; size_t* req_flow_ctrl; void** req_duplex; void** req_line_speed; int * speed_cap_mask; TYPE_1__* phy; } ;
struct bxe_softc {TYPE_3__ port; TYPE_2__ link_params; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,void*,void*,size_t,int) ;
 int FUNC_1 (struct bxe_softc*,char*,size_t,int ) ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (struct bxe_softc*,char*,void*) ;
 int FUNC_3 (struct bxe_softc*,char*,void*,void*,int) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_33)
{
    uint32_t VAR_34;
    uint32_t VAR_35;
    uint32_t VAR_36 = 0;

    VAR_33->port.advertising[0] = 0;
    VAR_33->port.advertising[1] = 0;

    switch (VAR_33->link_params.num_phys) {
    case 1:
    case 2:
        VAR_36 = 1;
        break;
    case 3:
        VAR_36 = 2;
        break;
    }

    for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++) {
        VAR_33->link_params.req_duplex[VAR_35] = VAR_10;
        VAR_34 = VAR_33->port.link_config[VAR_35];

        switch (VAR_34 & VAR_31) {
        case 128:
            if (VAR_33->port.supported[VAR_35] & VAR_29) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_21;
                VAR_33->port.advertising[VAR_35] |= VAR_33->port.supported[VAR_35];
                if (VAR_33->link_params.phy[VAR_12].type ==
                    VAR_32)
                    VAR_33->port.advertising[VAR_35] |=
                        (VAR_25 |
                         VAR_24);
            } else {

                VAR_33->link_params.req_line_speed[VAR_35] = VAR_18;
                VAR_33->port.advertising[VAR_35] |=
                    (VAR_0 | VAR_7);
                continue;
            }
            break;

        case 133:
            if (VAR_33->port.supported[VAR_35] & VAR_26) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_15;
                VAR_33->port.advertising[VAR_35] |= (VAR_4 |
                                              VAR_8);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 132:
            if (VAR_33->port.supported[VAR_35] & VAR_27) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_15;
                VAR_33->link_params.req_duplex[VAR_35] = VAR_11;
                VAR_33->port.advertising[VAR_35] |= (VAR_5 |
                                              VAR_8);
    FUNC_2(VAR_33, "driver requesting DUPLEX_HALF req_duplex = %x!\n",
        VAR_33->link_params.req_duplex[VAR_35]);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 136:
            if (VAR_33->port.supported[VAR_35] & VAR_24) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_16;
                VAR_33->port.advertising[VAR_35] |= (VAR_2 |
                                              VAR_8);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 135:
            if (VAR_33->port.supported[VAR_35] & VAR_25) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_16;
                VAR_33->link_params.req_duplex[VAR_35] = VAR_11;
                VAR_33->port.advertising[VAR_35] |= (VAR_3 |
                                              VAR_8);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 131:
            if (VAR_33->port.supported[VAR_35] & VAR_23) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_17;
                VAR_33->port.advertising[VAR_35] |= (VAR_1 |
                                              VAR_8);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 129:
            if (VAR_33->port.supported[VAR_35] & VAR_28) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_20;
                VAR_33->port.advertising[VAR_35] |= (VAR_6 |
                                              VAR_8);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 134:
            if (VAR_33->port.supported[VAR_35] & VAR_22) {
                VAR_33->link_params.req_line_speed[VAR_35] = VAR_18;
                VAR_33->port.advertising[VAR_35] |= (VAR_0 |
                                              VAR_7);
            } else {
                FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                          "speed_cap_mask=0x%08x\n",
                      VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
                return;
            }
            break;

        case 130:
            VAR_33->link_params.req_line_speed[VAR_35] = VAR_19;
            break;

        default:
            FUNC_1(VAR_33, "Invalid NVRAM config link_config=0x%08x "
                      "speed_cap_mask=0x%08x\n",
                  VAR_34, VAR_33->link_params.speed_cap_mask[VAR_35]);
            VAR_33->link_params.req_line_speed[VAR_35] = VAR_21;
            VAR_33->port.advertising[VAR_35] = VAR_33->port.supported[VAR_35];
            break;
        }

        VAR_33->link_params.req_flow_ctrl[VAR_35] =
            (VAR_34 & VAR_30);

        if (VAR_33->link_params.req_flow_ctrl[VAR_35] == VAR_13) {
            if (!(VAR_33->port.supported[VAR_35] & VAR_29)) {
                VAR_33->link_params.req_flow_ctrl[VAR_35] = VAR_14;
            } else {
                FUNC_4(VAR_33);
            }
        }

        FUNC_0(VAR_33, VAR_9, "req_line_speed=%d req_duplex=%d "
                            "req_flow_ctrl=0x%x advertising=0x%x\n",
              VAR_33->link_params.req_line_speed[VAR_35],
              VAR_33->link_params.req_duplex[VAR_35],
              VAR_33->link_params.req_flow_ctrl[VAR_35],
              VAR_33->port.advertising[VAR_35]);
  FUNC_3(VAR_33, "req_line_speed=%d req_duplex=%d "
      "advertising=0x%x\n",
      VAR_33->link_params.req_line_speed[VAR_35],
      VAR_33->link_params.req_duplex[VAR_35],
      VAR_33->port.advertising[VAR_35]);
    }
}
