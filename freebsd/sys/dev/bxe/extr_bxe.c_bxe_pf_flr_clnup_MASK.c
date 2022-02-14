
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 scalar_t__ FUNC_8 (struct bxe_softc*) ;
 scalar_t__ FUNC_9 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_10 (struct bxe_softc*,int ,int ) ;
 int FUNC_11 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_12(struct bxe_softc *VAR_3)
{
    uint32_t VAR_4 = FUNC_6(VAR_3);

    FUNC_0(VAR_3, VAR_0, "Cleanup after FLR PF[%d]\n", FUNC_4(VAR_3));


    FUNC_3(VAR_3, VAR_2, 1);


    FUNC_0(VAR_3, VAR_0, "Polling usage counters\n");
    if (FUNC_9(VAR_3, VAR_4)) {
        return (-1);
    }




    if (FUNC_10(VAR_3, (uint8_t)FUNC_5(VAR_3), VAR_4)) {
        return (-1);
    }




    FUNC_11(VAR_3, VAR_4);


    FUNC_2(100000);


    if (FUNC_8(VAR_3)) {
        FUNC_1(VAR_3, "PCIE Transactions still pending\n");
    }


    FUNC_7(VAR_3);





    FUNC_3(VAR_3, VAR_1, 1);

    return (0);
}
