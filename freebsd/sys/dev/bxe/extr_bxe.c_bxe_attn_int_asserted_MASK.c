
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bxe_softc {int attn_state; TYPE_1__ devinfo; } ;


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
 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*,scalar_t__) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(struct bxe_softc *VAR_31,
                      uint32_t VAR_32)
{
    int VAR_33 = FUNC_4(VAR_31);
    uint32_t VAR_34 = VAR_33 ? VAR_28 :
                               VAR_27;
    uint32_t VAR_35 = VAR_33 ? VAR_30 :
                                        VAR_29;
    uint32_t VAR_36;
    uint32_t VAR_37 = 0;
    uint32_t VAR_38;
    uint32_t VAR_39;
    uint32_t VAR_40;

    if (VAR_31->attn_state & VAR_32) {
        FUNC_1(VAR_31, "IGU ERROR attn=0x%08x\n", VAR_32);
    }

    FUNC_5(VAR_31, VAR_16 + VAR_33);

    VAR_36 = FUNC_2(VAR_31, VAR_34);

    FUNC_0(VAR_31, VAR_11, "aeu_mask 0x%08x newly asserted 0x%08x\n",
          VAR_36, VAR_32);

    VAR_36 &= ~(VAR_32 & 0x3ff);

    FUNC_0(VAR_31, VAR_11, "new mask 0x%08x\n", VAR_36);

    FUNC_3(VAR_31, VAR_34, VAR_36);

    FUNC_8(VAR_31, VAR_16 + VAR_33);

    FUNC_0(VAR_31, VAR_11, "attn_state 0x%08x\n", VAR_31->attn_state);
    VAR_31->attn_state |= VAR_32;
    FUNC_0(VAR_31, VAR_11, "new state 0x%08x\n", VAR_31->attn_state);

    if (VAR_32 & VAR_6) {
        if (VAR_32 & VAR_7) {

     FUNC_6(VAR_31);

            VAR_37 = FUNC_2(VAR_31, VAR_35);


            if (VAR_37) {
                FUNC_3(VAR_31, VAR_35, 0);

                FUNC_7(VAR_31);
            }


        }

        if (VAR_32 & VAR_8) {
            FUNC_0(VAR_31, VAR_11, "ATTN_SW_TIMER_4_FUNC!\n");
        }

        if (VAR_32 & VAR_12) {
            FUNC_0(VAR_31, VAR_11, "GPIO_2_FUNC!\n");
        }

        if (VAR_32 & VAR_13) {
            FUNC_0(VAR_31, VAR_11, "GPIO_3_FUNC!\n");
        }

        if (VAR_32 & VAR_14) {
            FUNC_0(VAR_31, VAR_11, "GPIO_4_FUNC!\n");
        }

        if (VAR_33 == 0) {
            if (VAR_32 & VAR_0) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_1!\n");
                FUNC_3(VAR_31, VAR_21, 0x0);
            }
            if (VAR_32 & VAR_1) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_2!\n");
                FUNC_3(VAR_31, VAR_22, 0x0);
            }
            if (VAR_32 & VAR_2) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_3!\n");
                FUNC_3(VAR_31, VAR_23, 0x0);
            }
        } else {
            if (VAR_32 & VAR_3) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_4!\n");
                FUNC_3(VAR_31, VAR_24, 0x0);
            }
            if (VAR_32 & VAR_4) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_5!\n");
                FUNC_3(VAR_31, VAR_25, 0x0);
            }
            if (VAR_32 & VAR_5) {
                FUNC_0(VAR_31, VAR_11, "ATTN_GENERAL_ATTN_6!\n");
                FUNC_3(VAR_31, VAR_26, 0x0);
            }
        }
    }

    if (VAR_31->devinfo.int_block == VAR_19) {
        VAR_38 = (VAR_15 + VAR_33*32 + VAR_10);
    } else {
        VAR_38 = (VAR_9 + VAR_17*8);
    }

    FUNC_0(VAR_31, VAR_11, "about to mask 0x%08x at %s addr 0x%08x\n",
          VAR_32,
          (VAR_31->devinfo.int_block == VAR_19) ? "HC" : "IGU", VAR_38);
    FUNC_3(VAR_31, VAR_38, VAR_32);


    if (VAR_32 & VAR_7) {




        if (VAR_31->devinfo.int_block != VAR_19) {
            VAR_40 = 0;

            do {
                VAR_39 = FUNC_2(VAR_31, VAR_18);
            } while (((VAR_39 & VAR_7) == 0) &&
                     (++VAR_40 < VAR_20));

            if (!VAR_39) {
                FUNC_1(VAR_31, "Failed to verify IGU ack on time\n");
            }

            FUNC_10();
        }

        FUNC_3(VAR_31, VAR_35, VAR_37);

 FUNC_9(VAR_31);
    }
}
