
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct octeon_device {int pf_num; int pcie_port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int,int) ;
 int VAR_11 ;
 int FUNC_16 (struct octeon_device*,int) ;
 scalar_t__ FUNC_17 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_18(char *VAR_12, struct octeon_device *VAR_13)
{
 uint32_t VAR_14;
 int VAR_15, VAR_16 = 0;
 uint8_t VAR_17 = VAR_13->pf_num;



 VAR_16 += FUNC_17(VAR_12 + VAR_16, "\t Octeon CSR Registers\n\n");


 VAR_14 = FUNC_15(VAR_13->pcie_port, VAR_13->pf_num);
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_MAC%d_PF%d_RINFO): %016llx\n",
         VAR_14, VAR_13->pcie_port, VAR_13->pf_num,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = FUNC_6(VAR_13->pcie_port, VAR_13->pf_num);
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_MAC%d_PF%d_INT_ENB): %016llx\n",
         VAR_14, VAR_13->pcie_port, VAR_13->pf_num,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = FUNC_7(VAR_13->pcie_port, VAR_13->pf_num);
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_MAC%d_PF%d_INT_SUM): %016llx\n",
         VAR_14, VAR_13->pcie_port, VAR_13->pf_num,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = 0x29120;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_MEM_CTL): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = 0x27300 + VAR_13->pcie_port * VAR_0 +
     (VAR_13->pf_num) * VAR_2;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_MAC%d_PF%d_PKT_VF_INT): %016llx\n",
         VAR_14, VAR_13->pcie_port, VAR_13->pf_num,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = 0x27200 + VAR_13->pcie_port * VAR_0 +
     (VAR_13->pf_num) * VAR_2;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_MAC%d_PF%d_PP_VF_INT): %016llx\n",
         VAR_14, VAR_13->pcie_port, VAR_13->pf_num,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = VAR_9;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_CNT_INT): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = VAR_11;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_TIME_INT): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = 0x29160;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_INT): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = VAR_6;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_OUTPUT_WMARK): %016llx\n",
         VAR_14, FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = VAR_10;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_RING_RST): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = VAR_5;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_GBL_CONTROL): %016llx\n", VAR_14,
         FUNC_0(FUNC_16(VAR_13, VAR_14)));


 VAR_14 = 0x29220;
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_BIST_STATUS): %016llx\n",
         VAR_14, FUNC_0(FUNC_16(VAR_13, VAR_14)));


 if (VAR_17 == 0) {

  VAR_14 = VAR_8;
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_OUT_BP_EN_W1S):  %016llx\n",
          VAR_14, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 } else if (VAR_17 == 1) {

  VAR_14 = VAR_7;
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_OUT_BP_EN2_W1S): %016llx\n",
          VAR_14, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_9(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_OUT_SIZE): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_14 = FUNC_3(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_IN_DONE%d_CNTS): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_10(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_SLIST_BAOFF_DBELL): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_14(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_SLIST_FIFO_RSIZE): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_12(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d__OUTPUT_CONTROL): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_8(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_SLIST_BADDR): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_13(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_INT_LEVELS): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_11(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_CNTS): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = 0x100c0 + VAR_15 * VAR_1;
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_ERROR_INFO): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_14 = FUNC_4(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_INPUT_CONTROL): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_14 = FUNC_1(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_INSTR_BADDR): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_14 = FUNC_2(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_INSTR_BAOFF_DBELL): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_14 = FUNC_5(VAR_15);
  VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT%d_INSTR_FIFO_RSIZE): %016llx\n",
          VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));
 }


 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  VAR_14 = FUNC_3(VAR_15);
 VAR_16 += FUNC_17(VAR_12 + VAR_16, "[%08x] (SLI_PKT_IN_DONE%d_CNTS): %016llx\n",
         VAR_14, VAR_15, FUNC_0(FUNC_16(VAR_13, VAR_14)));

 return (VAR_16);
}
