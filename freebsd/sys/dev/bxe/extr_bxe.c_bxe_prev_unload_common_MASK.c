
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int link_params; } ;
struct bxe_mac_vals {int * bmac_val; scalar_t__ bmac_addr; int emac_val; scalar_t__ emac_addr; int umac_val; scalar_t__ umac_addr; int xmac_val; scalar_t__ xmac_addr; } ;
typedef int mac_vals ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct bxe_softc*,scalar_t__) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_5 (struct bxe_softc*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,scalar_t__) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*,struct bxe_mac_vals*) ;
 int FUNC_10 (struct bxe_softc*,int ,int) ;
 int FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct bxe_mac_vals*,int ,int) ;

__attribute__((used)) static int
FUNC_14(struct bxe_softc *VAR_9)
{
    uint32_t VAR_10, VAR_11 = 0, VAR_12;
    uint8_t VAR_13 = VAR_3;
    struct bxe_mac_vals VAR_14;
    uint32_t VAR_15 = 1000;
    uint32_t VAR_16;






    FUNC_0(VAR_9, VAR_1, "Common unload Flow\n");

    FUNC_13(&VAR_14, 0, sizeof(VAR_14));

    if (FUNC_6(VAR_9)) {
        return (FUNC_8(VAR_9));
    }

    VAR_10 = FUNC_3(VAR_9, VAR_6);


    if (VAR_10 & VAR_4) {

        FUNC_9(VAR_9, &VAR_14);


        FUNC_12(&VAR_9->link_params, 0);





        if (VAR_10 & VAR_5) {
            VAR_11 = FUNC_3(VAR_9, VAR_2);
            if (VAR_11 == 0x7) {
                FUNC_0(VAR_9, VAR_1, "UNDI previously loaded\n");
                VAR_13 = VAR_8;

                FUNC_4(VAR_9, VAR_2, 0);

                FUNC_3(VAR_9, VAR_7);
            }
        }


        VAR_11 = FUNC_3(VAR_9, VAR_0);
        while (VAR_15) {
            VAR_16 = VAR_11;

            VAR_11 = FUNC_3(VAR_9, VAR_0);
            if (!VAR_11) {
                break;
            }

            FUNC_0(VAR_9, VAR_1, "BRB still has 0x%08x\n", VAR_11);


            if (VAR_16 > VAR_11) {
                VAR_15 = 1000;
            } else {
                VAR_15--;
            }


            if (VAR_13) {
                FUNC_10(VAR_9, FUNC_5(VAR_9), 1);
            }

            FUNC_2(10);
        }

        if (!VAR_15) {
            FUNC_1(VAR_9, "Failed to empty BRB\n");
        }
    }


    FUNC_11(VAR_9);

    if (VAR_14.xmac_addr) {
        FUNC_4(VAR_9, VAR_14.xmac_addr, VAR_14.xmac_val);
    }
    if (VAR_14.umac_addr) {
        FUNC_4(VAR_9, VAR_14.umac_addr, VAR_14.umac_val);
    }
    if (VAR_14.emac_addr) {
        FUNC_4(VAR_9, VAR_14.emac_addr, VAR_14.emac_val);
    }
    if (VAR_14.bmac_addr) {
        FUNC_4(VAR_9, VAR_14.bmac_addr, VAR_14.bmac_val[0]);
        FUNC_4(VAR_9, VAR_14.bmac_addr + 4, VAR_14.bmac_val[1]);
    }

    VAR_12 = FUNC_7(VAR_9, VAR_13);
    if (VAR_12) {
        FUNC_8(VAR_9);
        return (VAR_12);
    }

    return (FUNC_8(VAR_9));
}
