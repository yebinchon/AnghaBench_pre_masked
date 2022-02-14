
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bxe_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_9)
{
    uint32_t VAR_10;

    VAR_10 = FUNC_1(VAR_9, VAR_0);
    FUNC_0(VAR_9, VAR_1, "CFC_REG_WEAK_ENABLE_PF is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_5);
    FUNC_0(VAR_9, VAR_1, "PBF_REG_DISABLE_PF is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_4);
    FUNC_0(VAR_9, VAR_1, "IGU_REG_PCI_PF_MSI_EN is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_2);
    FUNC_0(VAR_9, VAR_1, "IGU_REG_PCI_PF_MSIX_EN is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_3);
    FUNC_0(VAR_9, VAR_1, "IGU_REG_PCI_PF_MSIX_FUNC_MASK is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_8);
    FUNC_0(VAR_9, VAR_1, "PGLUE_B_REG_SHADOW_BME_PF_7_0_CLR is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_6);
    FUNC_0(VAR_9, VAR_1, "PGLUE_B_REG_FLR_REQUEST_PF_7_0_CLR is 0x%x\n", VAR_10);

    VAR_10 = FUNC_1(VAR_9, VAR_7);
    FUNC_0(VAR_9, VAR_1, "PGLUE_B_REG_INTERNAL_PFID_ENABLE_MASTER is 0x%x\n", VAR_10);
}
