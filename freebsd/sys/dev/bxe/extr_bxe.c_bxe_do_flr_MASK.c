
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bc_ver; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct bxe_softc*,int ,int ) ;
 int FUNC_5 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_3)
{
    int VAR_4;


    if (FUNC_2(VAR_3)) {
        FUNC_0(VAR_3, VAR_0, "FLR not supported in E1/E1H\n");
        return (-1);
    }


    if (VAR_3->devinfo.bc_ver < VAR_2) {
        FUNC_0(VAR_3, VAR_0, "FLR not supported by BC_VER: 0x%08x\n",
              VAR_3->devinfo.bc_ver);
        return (-1);
    }


    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (VAR_4) {
            FUNC_3(((1 << (VAR_4 - 1)) * 100) * 1000);
        }

        if (!FUNC_5(VAR_3)) {
            goto clear;
        }
    }

    FUNC_1(VAR_3, "PCIE transaction is not cleared, "
              "proceeding with reset anyway\n");

clear:

    FUNC_0(VAR_3, VAR_0, "Initiating FLR\n");
    FUNC_4(VAR_3, VAR_1, 0);

    return (0);
}
