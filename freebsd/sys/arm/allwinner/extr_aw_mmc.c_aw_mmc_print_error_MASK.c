
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_8)
{
 if(VAR_8 & VAR_6)
  FUNC_0("AW_MMC_INT_RESP_ERR ");
 if (VAR_8 & VAR_5)
  FUNC_0("AW_MMC_INT_RESP_CRC_ERR ");
 if (VAR_8 & VAR_1)
  FUNC_0("AW_MMC_INT_DATA_CRC_ERR ");
 if (VAR_8 & VAR_7)
  FUNC_0("AW_MMC_INT_RESP_TIMEOUT ");
 if (VAR_8 & VAR_4)
  FUNC_0("AW_MMC_INT_FIFO_RUN_ERR ");
 if (VAR_8 & VAR_0)
  FUNC_0("AW_MMC_INT_CMD_BUSY ");
 if (VAR_8 & VAR_3)
  FUNC_0("AW_MMC_INT_DATA_START_ERR ");
 if (VAR_8 & VAR_2)
  FUNC_0("AW_MMC_INT_DATA_END_BIT_ERR");
 FUNC_0("\n");
}
