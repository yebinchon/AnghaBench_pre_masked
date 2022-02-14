
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct bxe_mac_vals {int bmac_addr; int umac_addr; int xmac_addr; int emac_addr; int* bmac_val; void* umac_val; void* xmac_val; void* emac_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_16 ;
 void* FUNC_4 (struct bxe_softc*,int) ;
 int FUNC_5 (struct bxe_softc*,int,int) ;
 int FUNC_6 (struct bxe_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_21,
                          struct bxe_mac_vals *VAR_22)
{
    uint32_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    uint8_t VAR_28 = VAR_4;
    uint8_t VAR_29 = FUNC_6(VAR_21);
    uint32_t VAR_30[2];


    VAR_22->bmac_addr = 0;
    VAR_22->umac_addr = 0;
    VAR_22->xmac_addr = 0;
    VAR_22->emac_addr = 0;

    VAR_27 = FUNC_4(VAR_21, VAR_12);

    if (!FUNC_2(VAR_21)) {
        VAR_23 = FUNC_4(VAR_21, VAR_13 + VAR_29 * 4);
        VAR_26 = VAR_9 << VAR_29;
        if ((VAR_26 & VAR_27) && VAR_23) {
            FUNC_0(VAR_21, VAR_2, "Disable BMAC Rx\n");
            VAR_24 = FUNC_6(VAR_21) ? VAR_15
                                    : VAR_14;
            VAR_25 = FUNC_1(VAR_21) ? VAR_0
                                    : VAR_1;







            VAR_30[0] = FUNC_4(VAR_21, VAR_24 + VAR_25);
            VAR_30[1] = FUNC_4(VAR_21, VAR_24 + VAR_25 + 0x4);
            VAR_22->bmac_addr = VAR_24 + VAR_25;
            VAR_22->bmac_val[0] = VAR_30[0];
            VAR_22->bmac_val[1] = VAR_30[1];
            VAR_30[0] &= ~VAR_3;
            FUNC_5(VAR_21, VAR_22->bmac_addr, VAR_30[0]);
            FUNC_5(VAR_21, VAR_22->bmac_addr + 0x4, VAR_30[1]);
        }

        FUNC_0(VAR_21, VAR_2, "Disable EMAC Rx\n");
        VAR_22->emac_addr = VAR_16 + FUNC_6(VAR_21)*4;
        VAR_22->emac_val = FUNC_4(VAR_21, VAR_22->emac_addr);
        FUNC_5(VAR_21, VAR_22->emac_addr, 0);
        VAR_28 = VAR_17;
    } else {
        if (VAR_27 & VAR_11) {
            FUNC_0(VAR_21, VAR_2, "Disable XMAC Rx\n");
            VAR_24 = FUNC_6(VAR_21) ? VAR_8 : VAR_7;
            VAR_23 = FUNC_4(VAR_21, VAR_24 + VAR_20);
            FUNC_5(VAR_21, VAR_24 + VAR_20, VAR_23 & ~(1 << 1));
            FUNC_5(VAR_21, VAR_24 + VAR_20, VAR_23 | (1 << 1));
            VAR_22->xmac_addr = VAR_24 + VAR_19;
            VAR_22->xmac_val = FUNC_4(VAR_21, VAR_22->xmac_addr);
            FUNC_5(VAR_21, VAR_22->xmac_addr, 0);
            VAR_28 = VAR_17;
        }

        VAR_26 = VAR_10 << VAR_29;
        if (VAR_26 & VAR_27) {
            FUNC_0(VAR_21, VAR_2, "Disable UMAC Rx\n");
            VAR_24 = FUNC_6(VAR_21) ? VAR_6 : VAR_5;
            VAR_22->umac_addr = VAR_24 + VAR_18;
            VAR_22->umac_val = FUNC_4(VAR_21, VAR_22->umac_addr);
            FUNC_5(VAR_21, VAR_22->umac_addr, 0);
            VAR_28 = VAR_17;
        }
    }

    if (VAR_28) {
        FUNC_3(20000);
    }
}
