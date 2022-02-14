
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dev; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct bxe_softc *VAR_2,
                         int VAR_3,
                         int VAR_4)
{
    int VAR_5;


    if (FUNC_2(VAR_2->dev, VAR_1, &VAR_5) == 0) {
        if (VAR_5 != 0) {
            FUNC_0(VAR_2, VAR_0, "PCIe capability at 0x%04x\n", VAR_5);
            return (FUNC_3(VAR_2->dev, (VAR_5 + VAR_3), VAR_4));
        }
    }

    FUNC_1(VAR_2, "PCIe capability NOT FOUND!!!\n");

    return (0);
}
