
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int periodic_flags; } ;
struct TYPE_9__ {scalar_t__ pmf; } ;
struct TYPE_7__ {int * mf_config; } ;
struct TYPE_8__ {TYPE_1__ mf_info; } ;
struct bxe_softc {int sp_err_timeout_task; TYPE_4__ link_vars; TYPE_3__ port; TYPE_2__ devinfo; } ;
struct TYPE_12__ {int drv_status; } ;
struct TYPE_11__ {int config; } ;


 int FUNC_0 (struct bxe_softc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (struct bxe_softc*,int ) ;
 int FUNC_7 (struct bxe_softc*,scalar_t__,int) ;
 size_t FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 size_t FUNC_10 (struct bxe_softc*) ;
 size_t FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (struct bxe_softc*,int ) ;
 int FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (struct bxe_softc*,int) ;
 int FUNC_15 (struct bxe_softc*) ;
 int FUNC_16 (struct bxe_softc*) ;
 int FUNC_17 (struct bxe_softc*) ;
 int FUNC_18 (struct bxe_softc*) ;
 int FUNC_19 (struct bxe_softc*) ;
 int FUNC_20 (struct bxe_softc*) ;
 int FUNC_21 (struct bxe_softc*) ;
 int FUNC_22 (struct bxe_softc*) ;
 int FUNC_23 (struct bxe_softc*) ;
 int FUNC_24 (struct bxe_softc*) ;
 TYPE_6__* VAR_23 ;
 TYPE_5__* VAR_24 ;
 int VAR_25 ;
 int FUNC_25 (int ,int *,int) ;
 int VAR_26 ;

__attribute__((used)) static void
FUNC_26(struct bxe_softc *VAR_27,
                         uint32_t VAR_28)
{
    int VAR_29 = FUNC_9(VAR_27);
    uint32_t VAR_30;

    if (VAR_28 & VAR_12) {

        if (VAR_28 & FUNC_1(VAR_27)) {

            FUNC_7(VAR_27, VAR_17 + VAR_29*4, 0);
            FUNC_22(VAR_27);
            VAR_27->devinfo.mf_info.mf_config[FUNC_11(VAR_27)] =
                FUNC_5(VAR_27, VAR_24[FUNC_8(VAR_27)].config);
            VAR_30 = FUNC_12(VAR_27, VAR_23[FUNC_10(VAR_27)].drv_status);

            if (VAR_30 & VAR_6)
                FUNC_14(VAR_27, (VAR_30 & VAR_6));

            if (VAR_30 & VAR_10)
                FUNC_24(VAR_27);

            if (VAR_30 & VAR_7)
                FUNC_15(VAR_27);

            if ((VAR_27->port.pmf == 0) && (VAR_30 & VAR_9))
                FUNC_21(VAR_27);

            if (VAR_30 & VAR_8)
                FUNC_16(VAR_27);

            if (VAR_27->link_vars.periodic_flags &
                VAR_11) {

  FUNC_13(VAR_27);
                VAR_27->link_vars.periodic_flags &=
                    ~VAR_11;
  FUNC_23(VAR_27);
                if (FUNC_4(VAR_27))
                    ;
                FUNC_18(VAR_27);
            }





            FUNC_19(VAR_27);

        } else if (VAR_28 & VAR_5) {

            FUNC_0(VAR_27, "MC assert!\n");
            FUNC_20(VAR_27);
            FUNC_7(VAR_27, VAR_15, 0);
            FUNC_7(VAR_27, VAR_20, 0);
            FUNC_7(VAR_27, VAR_19, 0);
            FUNC_7(VAR_27, VAR_18, 0);
            FUNC_17(VAR_27);
            FUNC_2(VAR_27, VAR_1);
            FUNC_25(VAR_26,
                &VAR_27->sp_err_timeout_task, VAR_25/10);

        } else if (VAR_28 & VAR_4) {

            FUNC_0(VAR_27, "MCP assert!\n");
            FUNC_7(VAR_27, VAR_16, 0);
            FUNC_2(VAR_27, VAR_0);
            FUNC_25(VAR_26,
                &VAR_27->sp_err_timeout_task, VAR_25/10);
            FUNC_17(VAR_27);


        } else {
            FUNC_0(VAR_27, "Unknown HW assert! (attn 0x%08x)\n", VAR_28);
        }
    }

    if (VAR_28 & VAR_13) {
        FUNC_0(VAR_27, "LATCHED attention 0x%08x (masked)\n", VAR_28);
        if (VAR_28 & VAR_3) {
            VAR_30 = FUNC_3(VAR_27) ? 0 : FUNC_6(VAR_27, VAR_22);
            FUNC_0(VAR_27, "GRC time-out 0x%08x\n", VAR_30);
        }
        if (VAR_28 & VAR_2) {
            VAR_30 = FUNC_3(VAR_27) ? 0 : FUNC_6(VAR_27, VAR_21);
            FUNC_0(VAR_27, "GRC reserved 0x%08x\n", VAR_30);
        }
        FUNC_7(VAR_27, VAR_14, 0x7ff);
    }
}
