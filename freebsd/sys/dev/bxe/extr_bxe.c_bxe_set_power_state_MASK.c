
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int pcie_cap_flags; scalar_t__ pcie_pm_cap_reg; } ;
struct bxe_softc {TYPE_1__ devinfo; int dev; int wol; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_6,
                    uint8_t VAR_7)
{
    uint16_t VAR_8;


    if (!(VAR_6->devinfo.pcie_cap_flags & VAR_0)) {
        FUNC_1(VAR_6, "No power capability\n");
        return (0);
    }

    VAR_8 = FUNC_4(VAR_6->dev,
                            (VAR_6->devinfo.pcie_pm_cap_reg + VAR_5),
                            2);

    switch (VAR_7) {
    case 129:
        FUNC_5(VAR_6->dev,
                         (VAR_6->devinfo.pcie_pm_cap_reg + VAR_5),
                         ((VAR_8 & ~VAR_2) | VAR_3), 2);

        if (VAR_8 & VAR_2) {

            FUNC_3(20000);
        }

        break;

    case 128:



        if (FUNC_2(VAR_6)) {
            return (0);
        }

        VAR_8 &= ~VAR_2;
        VAR_8 |= VAR_1;

        if (VAR_6->wol) {
            VAR_8 |= VAR_4;
        }

        FUNC_5(VAR_6->dev,
                         (VAR_6->devinfo.pcie_pm_cap_reg + VAR_5),
                         VAR_8, 4);





        break;

    default:
        FUNC_0(VAR_6, "Can't support PCI power state = 0x%x pmcsr 0x%x\n",
            VAR_7, VAR_8);
        return (-1);
    }

    return (0);
}
