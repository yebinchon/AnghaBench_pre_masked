
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isp_dev; } ;
typedef TYPE_1__ ispsoftc_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(ispsoftc_t *VAR_21, const char *VAR_22)
{
 if (VAR_22)
  FUNC_3("%s: %s\n", FUNC_2(VAR_21->isp_dev), VAR_22);
 else
  FUNC_3("%s:\n", FUNC_2(VAR_21->isp_dev));
 FUNC_3("    biu_conf1=%x", FUNC_0(VAR_21, VAR_0));
 FUNC_3(" biu_icr=%x biu_isr=%x biu_sema=%x ", FUNC_0(VAR_21, VAR_1),
     FUNC_0(VAR_21, VAR_2), FUNC_0(VAR_21, VAR_3));
 FUNC_3("risc_hccr=%x\n", FUNC_0(VAR_21, VAR_10));


 FUNC_1(VAR_21, VAR_10, VAR_11);
 FUNC_3("    cdma_conf=%x cdma_sts=%x cdma_fifostat=%x\n",
  FUNC_0(VAR_21, VAR_4), FUNC_0(VAR_21, VAR_6),
  FUNC_0(VAR_21, VAR_5));
 FUNC_3("    ddma_conf=%x ddma_sts=%x ddma_fifostat=%x\n",
  FUNC_0(VAR_21, VAR_7), FUNC_0(VAR_21, VAR_9),
  FUNC_0(VAR_21, VAR_8));
 FUNC_3("    sxp_int=%x sxp_gross=%x sxp(scsi_ctrl)=%x\n",
  FUNC_0(VAR_21, VAR_19),
  FUNC_0(VAR_21, VAR_18),
  FUNC_0(VAR_21, VAR_20));
 FUNC_1(VAR_21, VAR_10, VAR_12);
 FUNC_3("    mbox regs: %x %x %x %x %x\n",
     FUNC_0(VAR_21, VAR_13), FUNC_0(VAR_21, VAR_14),
     FUNC_0(VAR_21, VAR_15), FUNC_0(VAR_21, VAR_16),
     FUNC_0(VAR_21, VAR_17));
}
