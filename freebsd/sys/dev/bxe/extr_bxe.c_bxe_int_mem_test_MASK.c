
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int* FUNC_1 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct bxe_softc*,int ) ;
 int FUNC_7 (struct bxe_softc*,scalar_t__,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*,int ,int) ;
 int FUNC_10 (struct bxe_softc*,int ,int ) ;
 int * VAR_16 ;

__attribute__((used)) static int
FUNC_11(struct bxe_softc *VAR_17)
{
    int VAR_18;
    int VAR_19, VAR_20;
    uint32_t VAR_21 = 0;

    if (FUNC_3(VAR_17)) {
        VAR_18 = 120;
    } else if (FUNC_2(VAR_17)) {
        VAR_18 = 200;
    } else {
        VAR_18 = 1;
    }


    FUNC_7(VAR_17, VAR_15, 0x0);
    FUNC_7(VAR_17, VAR_14, 0x0);
    FUNC_7(VAR_17, VAR_2, 0x1);
    FUNC_7(VAR_17, VAR_8, 0x0);


    FUNC_7(VAR_17, VAR_11, 0x0);


    FUNC_8(VAR_17);



    VAR_19 = 1000 * VAR_18;
    while (VAR_19) {
        FUNC_9(VAR_17, VAR_9, 2);
        VAR_21 = *FUNC_1(VAR_17, VAR_16[0]);
        if (VAR_21 == 0x10) {
            break;
        }

        FUNC_5(10000);
        VAR_19--;
    }

    if (VAR_21 != 0x10) {
        FUNC_0(VAR_17, "NIG timeout val=0x%x\n", VAR_21);
        return (-1);
    }


    VAR_19 = (1000 * VAR_18);
    while (VAR_19) {
        VAR_21 = FUNC_6(VAR_17, VAR_13);
        if (VAR_21 == 1) {
            break;
        }

        FUNC_5(10000);
        VAR_19--;
    }

    if (VAR_21 != 0x1) {
        FUNC_0(VAR_17, "PRS timeout val=0x%x\n", VAR_21);
        return (-2);
    }


    FUNC_7(VAR_17, VAR_3 + VAR_4, 0x03);
    FUNC_5(50000);
    FUNC_7(VAR_17, VAR_3 + VAR_5, 0x03);
    FUNC_5(50000);
    FUNC_10(VAR_17, VAR_0, VAR_10);
    FUNC_10(VAR_17, VAR_1, VAR_10);


    FUNC_7(VAR_17, VAR_15, 0x0);
    FUNC_7(VAR_17, VAR_14, 0x0);
    FUNC_7(VAR_17, VAR_2, 0x1);
    FUNC_7(VAR_17, VAR_8, 0x0);


    FUNC_7(VAR_17, VAR_11, 0x0);


    for (VAR_20 = 0; VAR_20 < 10; VAR_20++) {
        FUNC_8(VAR_17);
    }


    VAR_19 = (1000 * VAR_18);
    while (VAR_19) {
        FUNC_9(VAR_17, VAR_9, 2);
        VAR_21 = *FUNC_1(VAR_17, VAR_16[0]);
        if (VAR_21 == 0xb0) {
            break;
        }

        FUNC_5(10000);
        VAR_19--;
    }

    if (VAR_21 != 0xb0) {
        FUNC_0(VAR_17, "NIG timeout val=0x%x\n", VAR_21);
        return (-3);
    }


    VAR_21 = FUNC_6(VAR_17, VAR_13);
    if (VAR_21 != 2) {
        FUNC_0(VAR_17, "PRS timeout val=0x%x\n", VAR_21);
    }


    FUNC_7(VAR_17, VAR_11, 0x1);


    FUNC_5(10000 * VAR_18);


    VAR_21 = FUNC_6(VAR_17, VAR_13);
    if (VAR_21 != 3) {
        FUNC_0(VAR_17, "PRS timeout val=0x%x\n", VAR_21);
    }


    for (VAR_20 = 0; VAR_20 < 11; VAR_20++) {
        FUNC_6(VAR_17, VAR_7);
    }

    VAR_21 = FUNC_6(VAR_17, VAR_6);
    if (VAR_21 != 1) {
        FUNC_0(VAR_17, "clear of NIG failed val=0x%x\n", VAR_21);
        return (-4);
    }


    FUNC_7(VAR_17, VAR_3 + VAR_4, 0x03);
    FUNC_5(50000);
    FUNC_7(VAR_17, VAR_3 + VAR_5, 0x03);
    FUNC_5(50000);
    FUNC_10(VAR_17, VAR_0, VAR_10);
    FUNC_10(VAR_17, VAR_1, VAR_10);
    if (!FUNC_4(VAR_17)) {

        FUNC_7(VAR_17, VAR_12, 1);
    }


    FUNC_7(VAR_17, VAR_15, 0x7fffffff);
    FUNC_7(VAR_17, VAR_14, 0x1);
    FUNC_7(VAR_17, VAR_2, 0x0);
    FUNC_7(VAR_17, VAR_8, 0x1);

    return (0);
}
