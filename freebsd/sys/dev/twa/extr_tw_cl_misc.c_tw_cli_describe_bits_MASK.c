
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TW_UINT32 ;
typedef int TW_INT8 ;


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
 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (int *) ;

TW_INT8 *
FUNC_2(TW_UINT32 VAR_11, TW_INT8 *VAR_12)
{
 FUNC_0(VAR_12, "[");

 if (VAR_11 & VAR_2)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "CMD_Q_EMPTY,");
 if (VAR_11 & VAR_5)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "MC_RDY,");
 if (VAR_11 & VAR_10)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "RESP_Q_EMPTY,");
 if (VAR_11 & VAR_3)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "CMD_Q_FULL,");
 if (VAR_11 & VAR_9)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "RESP_INTR,");
 if (VAR_11 & VAR_1)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "CMD_INTR,");
 if (VAR_11 & VAR_0)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "ATTN_INTR,");
 if (VAR_11 & VAR_4)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "HOST_INTR,");
 if (VAR_11 & VAR_6)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "PCI_ABRT,");
 if (VAR_11 & VAR_8)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "Q_ERR,");
 if (VAR_11 & VAR_7)
  FUNC_0(&VAR_12[FUNC_1(VAR_12)], "PCI_PERR");

 FUNC_0(&VAR_12[FUNC_1(VAR_12)], "]");
 return(VAR_12);
}
