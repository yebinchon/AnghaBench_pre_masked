
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bxe_softc {int attn_state; TYPE_1__ devinfo; struct attn_route* attn_group; int sp_err_timeout_task; } ;
struct attn_route {int* sig; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_4 (struct bxe_softc*,int) ;
 int FUNC_5 (struct bxe_softc*,int,int) ;
 int FUNC_6 (struct bxe_softc*) ;
 int VAR_17 ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*,scalar_t__) ;
 int FUNC_9 (struct bxe_softc*,int) ;
 int FUNC_10 (struct bxe_softc*,int) ;
 int FUNC_11 (struct bxe_softc*,int) ;
 int FUNC_12 (struct bxe_softc*,int) ;
 int FUNC_13 (struct bxe_softc*,int) ;
 scalar_t__ FUNC_14 (struct bxe_softc*,int *,int ) ;
 int FUNC_15 (struct bxe_softc*) ;
 int FUNC_16 (struct bxe_softc*) ;
 int FUNC_17 (struct bxe_softc*,scalar_t__) ;
 int VAR_18 ;
 int FUNC_18 (int ,int *,int) ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_19(struct bxe_softc *VAR_20,
                        uint32_t VAR_21)
{
    struct attn_route VAR_22;
    struct attn_route *VAR_23;
    int VAR_24 = FUNC_6(VAR_20);
    int VAR_25;
    uint32_t VAR_26;
    uint32_t VAR_27;
    uint32_t VAR_28;
    uint8_t VAR_29 = VAR_4;





    FUNC_7(VAR_20);

    if (FUNC_14(VAR_20, &VAR_29, VAR_17)) {






        FUNC_15(VAR_20);
        FUNC_2(VAR_20, VAR_1);
        FUNC_18(VAR_19,
           &VAR_20->sp_err_timeout_task, VAR_18/10);
        FUNC_16(VAR_20);
        return;
    }

    VAR_22.sig[0] = FUNC_4(VAR_20, VAR_10 + VAR_24*4);
    VAR_22.sig[1] = FUNC_4(VAR_20, VAR_11 + VAR_24*4);
    VAR_22.sig[2] = FUNC_4(VAR_20, VAR_12 + VAR_24*4);
    VAR_22.sig[3] = FUNC_4(VAR_20, VAR_13 + VAR_24*4);
    if (!FUNC_3(VAR_20)) {
        VAR_22.sig[4] = FUNC_4(VAR_20, VAR_14 + VAR_24*4);
    } else {
        VAR_22.sig[4] = 0;
    }

    FUNC_0(VAR_20, VAR_3, "attn: 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n",
          VAR_22.sig[0], VAR_22.sig[1], VAR_22.sig[2], VAR_22.sig[3], VAR_22.sig[4]);

    for (VAR_25 = 0; VAR_25 < VAR_9; VAR_25++) {
        if (VAR_21 & (1 << VAR_25)) {
            VAR_23 = &VAR_20->attn_group[VAR_25];

            FUNC_0(VAR_20, VAR_3,
                  "group[%d]: 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n", VAR_25,
                  VAR_23->sig[0], VAR_23->sig[1],
                  VAR_23->sig[2], VAR_23->sig[3],
                  VAR_23->sig[4]);

            FUNC_13(VAR_20, VAR_22.sig[4] & VAR_23->sig[4]);
            FUNC_12(VAR_20, VAR_22.sig[3] & VAR_23->sig[3]);
            FUNC_10(VAR_20, VAR_22.sig[1] & VAR_23->sig[1]);
            FUNC_11(VAR_20, VAR_22.sig[2] & VAR_23->sig[2]);
            FUNC_9(VAR_20, VAR_22.sig[0] & VAR_23->sig[0]);
        }
    }

    FUNC_16(VAR_20);

    if (VAR_20->devinfo.int_block == VAR_8) {
        VAR_26 = (VAR_5 + VAR_24*32 +
                    VAR_2);
    } else {
        VAR_26 = (VAR_0 + VAR_7*8);
    }

    VAR_27 = ~VAR_21;
    FUNC_0(VAR_20, VAR_3,
          "about to mask 0x%08x at %s addr 0x%08x\n", VAR_27,
          (VAR_20->devinfo.int_block == VAR_8) ? "HC" : "IGU", VAR_26);
    FUNC_5(VAR_20, VAR_26, VAR_27);

    if (~VAR_20->attn_state & VAR_21) {
        FUNC_1(VAR_20, "IGU error\n");
    }

    VAR_26 = VAR_24 ? VAR_16 :
                      VAR_15;

    FUNC_8(VAR_20, VAR_6 + VAR_24);

    VAR_28 = FUNC_4(VAR_20, VAR_26);

    FUNC_0(VAR_20, VAR_3, "aeu_mask 0x%08x newly deasserted 0x%08x\n",
          VAR_28, VAR_21);
    VAR_28 |= (VAR_21 & 0x3ff);
    FUNC_0(VAR_20, VAR_3, "new mask 0x%08x\n", VAR_28);

    FUNC_5(VAR_20, VAR_26, VAR_28);
    FUNC_17(VAR_20, VAR_6 + VAR_24);

    FUNC_0(VAR_20, VAR_3, "attn_state 0x%08x\n", VAR_20->attn_state);
    VAR_20->attn_state &= ~VAR_21;
    FUNC_0(VAR_20, VAR_3, "new state 0x%08x\n", VAR_20->attn_state);
}
