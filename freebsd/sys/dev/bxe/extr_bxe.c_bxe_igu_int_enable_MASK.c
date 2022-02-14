
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {scalar_t__ interrupt_mode; int intr_count; TYPE_1__ port; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,char*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_13)
{
    uint32_t VAR_14;
    uint8_t VAR_15 = (VAR_13->interrupt_mode == VAR_11) ? VAR_12 : VAR_1;
    uint8_t VAR_16 = ((VAR_13->interrupt_mode == VAR_11) &&
                           (VAR_13->intr_count == 1)) ? VAR_12 : VAR_1;
    uint8_t VAR_17 = (VAR_13->interrupt_mode == VAR_10) ? VAR_12 : VAR_1;

    VAR_14 = FUNC_2(VAR_13, VAR_8);

    if (VAR_15) {
        VAR_14 &= ~(VAR_4 |
                 VAR_6);
        VAR_14 |= (VAR_5 |
                VAR_2);
        if (VAR_16) {
            VAR_14 |= VAR_6;
        }
    } else if (VAR_17) {
        VAR_14 &= ~VAR_4;
        VAR_14 |= (VAR_5 |
                VAR_2 |
                VAR_6);
    } else {
        VAR_14 &= ~VAR_5;
        VAR_14 |= (VAR_4 |
                VAR_2 |
                VAR_6);
    }


    if ((!VAR_15) || VAR_16) {
        FUNC_3(VAR_13, VAR_8, VAR_14);
        FUNC_5(VAR_13);
    }

    VAR_14 |= VAR_3;

    FUNC_0(VAR_13, VAR_0, "write 0x%x to IGU mode %s\n",
          VAR_14, ((VAR_15) ? "MSI-X" : ((VAR_17) ? "MSI" : "INTx")));

    FUNC_3(VAR_13, VAR_8, VAR_14);

    FUNC_6();


    if (FUNC_1(VAR_13)) {
        VAR_14 = (0xee0f | (1 << (FUNC_4(VAR_13) + 4)));
        if (VAR_13->port.pmf) {

            VAR_14 |= 0x1100;
        }
    } else {
        VAR_14 = 0xffff;
    }

    FUNC_3(VAR_13, VAR_9, VAR_14);
    FUNC_3(VAR_13, VAR_7, VAR_14);


    FUNC_6();
}
