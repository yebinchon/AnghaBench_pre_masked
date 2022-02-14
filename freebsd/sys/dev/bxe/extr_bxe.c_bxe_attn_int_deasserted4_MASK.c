
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int sp_err_timeout_task; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bxe_softc*,char*,...) ;
 int VAR_11 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_25 ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_26,
                         uint32_t VAR_27)
{
    uint32_t VAR_28;
    boolean_t VAR_29 = VAR_12;

    if (VAR_27 & VAR_2) {
        VAR_28 = FUNC_2(VAR_26, VAR_22);
        FUNC_0(VAR_26, "PGLUE hw attention 0x%08x\n", VAR_28);
        VAR_29 = VAR_23;
        if (VAR_28 & VAR_13)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_ADDRESS_ERROR\n");
        if (VAR_28 & VAR_15)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_INCORRECT_RCV_BEHAVIOR\n");
        if (VAR_28 & VAR_21)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_WAS_ERROR_ATTN\n");
        if (VAR_28 & VAR_19)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_VF_LENGTH_VIOLATION_ATTN\n");
        if (VAR_28 & VAR_18)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_VF_GRC_SPACE_VIOLATION_ATTN\n");
        if (VAR_28 & VAR_20)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_VF_MSIX_BAR_VIOLATION_ATTN\n");
        if (VAR_28 & VAR_16)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_TCPL_ERROR_ATTN\n");
        if (VAR_28 & VAR_17)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_TCPL_IN_TWO_RCBS_ATTN\n");
        if (VAR_28 & VAR_14)
            FUNC_0(VAR_26, "PGLUE_B_PGLUE_B_INT_STS_REG_CSSNOOP_FIFO_OVERFLOW\n");
    }

    if (VAR_27 & VAR_0) {
        VAR_28 = FUNC_2(VAR_26, VAR_10);
        FUNC_0(VAR_26, "ATC hw attention 0x%08x\n", VAR_28);
 VAR_29 = VAR_23;
        if (VAR_28 & VAR_4)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ADDRESS_ERROR\n");
        if (VAR_28 & VAR_9)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ATC_TCPL_TO_NOT_PEND\n");
        if (VAR_28 & VAR_5)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ATC_GPA_MULTIPLE_HITS\n");
        if (VAR_28 & VAR_7)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ATC_RCPL_TO_EMPTY_CNT\n");
        if (VAR_28 & VAR_8)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ATC_TCPL_ERROR\n");
        if (VAR_28 & VAR_6)
            FUNC_0(VAR_26, "ATC_ATC_INT_STS_REG_ATC_IREQ_LESS_THAN_STU\n");
    }

    if (VAR_27 & (VAR_3 |
                VAR_1)) {
        FUNC_0(VAR_26, "FATAL parity attention set4 0x%08x\n",
              (uint32_t)(VAR_27 & (VAR_3 |
                                 VAR_1)));
 VAR_29 = VAR_23;
    }
    if (VAR_29) {
 FUNC_1(VAR_26, VAR_11);
 FUNC_3(VAR_25,
     &VAR_26->sp_err_timeout_task, VAR_24/10);
    }

}
