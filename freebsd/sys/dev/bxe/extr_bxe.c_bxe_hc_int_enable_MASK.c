
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {scalar_t__ interrupt_mode; int intr_count; TYPE_1__ port; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,int,...) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*,int,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct bxe_softc *VAR_14)
{
    int VAR_15 = FUNC_5(VAR_14);
    uint32_t VAR_16 = (VAR_15) ? VAR_7 : VAR_6;
    uint32_t VAR_17 = FUNC_3(VAR_14, VAR_16);
    uint8_t VAR_18 = (VAR_14->interrupt_mode == VAR_12) ? VAR_13 : VAR_1;
    uint8_t VAR_19 = ((VAR_14->interrupt_mode == VAR_12) &&
                           (VAR_14->intr_count == 1)) ? VAR_13 : VAR_1;
    uint8_t VAR_20 = (VAR_14->interrupt_mode == VAR_11) ? VAR_13 : VAR_1;

    if (VAR_18) {
        VAR_17 &= ~(VAR_5 |
                 VAR_3);
        VAR_17 |= (VAR_4 |
                VAR_2);
        if (VAR_19) {
            VAR_17 |= VAR_5;
        }
    } else if (VAR_20) {
        VAR_17 &= ~VAR_3;
        VAR_17 |= (VAR_5 |
                VAR_4 |
                VAR_2);
    } else {
        VAR_17 |= (VAR_5 |
                VAR_4 |
                VAR_3 |
                VAR_2);

        if (!FUNC_1(VAR_14)) {
            FUNC_0(VAR_14, VAR_0, "write %x to HC %d (addr 0x%x)\n",
                  VAR_17, VAR_15, VAR_16);

            FUNC_4(VAR_14, VAR_16, VAR_17);

            VAR_17 &= ~VAR_4;
        }
    }

    if (FUNC_1(VAR_14)) {
        FUNC_4(VAR_14, (VAR_8 + VAR_15*4), 0x1FFFF);
    }

    FUNC_0(VAR_14, VAR_0, "write %x to HC %d (addr 0x%x) mode %s\n",
          VAR_17, VAR_15, VAR_16, ((VAR_18) ? "MSI-X" : ((VAR_20) ? "MSI" : "INTx")));

    FUNC_4(VAR_14, VAR_16, VAR_17);


    FUNC_7();

    if (!FUNC_1(VAR_14)) {

        if (FUNC_2(VAR_14)) {
            VAR_17 = (0xee0f | (1 << (FUNC_6(VAR_14) + 4)));
            if (VAR_14->port.pmf) {

                VAR_17 |= 0x1100;
            }
        } else {
            VAR_17 = 0xffff;
        }

        FUNC_4(VAR_14, (VAR_10 + VAR_15*8), VAR_17);
        FUNC_4(VAR_14, (VAR_9 + VAR_15*8), VAR_17);
    }


    FUNC_7();
}
