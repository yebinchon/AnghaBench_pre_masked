
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*,int,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,int ,int ) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_11(struct bxe_softc *VAR_11)
{
    int VAR_12 = 10;
    uint32_t VAR_13, VAR_14, VAR_15;
    uint32_t VAR_16 = 0;





    FUNC_8(VAR_11);


    VAR_14 =
        (FUNC_5(VAR_11) <= 5) ?
            (VAR_9 + FUNC_5(VAR_11) * 8) :
            (VAR_10 + (FUNC_5(VAR_11) - 6) * 8);

    VAR_15 = (FUNC_3(VAR_11, VAR_14));
    if (VAR_15) {
        if (VAR_15 & VAR_4) {
            FUNC_0(VAR_11, VAR_1, "Releasing previously held NVRAM lock\n");
            FUNC_4(VAR_11, VAR_8,
                   (VAR_6 << FUNC_6(VAR_11)));
        }
        FUNC_0(VAR_11, VAR_1, "Releasing previously held HW lock\n");
        FUNC_4(VAR_11, VAR_14, 0xffffffff);
    } else {
        FUNC_0(VAR_11, VAR_1, "No need to release HW/NVRAM locks\n");
    }

    if (VAR_5 & FUNC_3(VAR_11, VAR_7)) {
        FUNC_0(VAR_11, VAR_1, "Releasing previously held ALR\n");
        FUNC_4(VAR_11, VAR_7, 0);
    }

    do {

        VAR_13 = FUNC_7(VAR_11, VAR_2, 0);
        if (!VAR_13) {
            FUNC_1(VAR_11, "MCP response failure, aborting\n");
            VAR_16 = -1;
            break;
        }

        if (VAR_13 == VAR_3) {
            VAR_16 = FUNC_9(VAR_11);
            break;
        }


        VAR_16 = FUNC_10(VAR_11);
        if (VAR_16 != VAR_0) {
            break;
        }

        FUNC_2(20000);
    } while (--VAR_12);

    if (!VAR_12 || VAR_16) {
        FUNC_1(VAR_11, "Failed to unload previous driver!"
            " time_counter %d rc %d\n", VAR_12, VAR_16);
        VAR_16 = -1;
    }

    return (VAR_16);
}
