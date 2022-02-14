
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {char* name; int fatal; int * actions; struct intr_details const* details; scalar_t__ flags; void* enable_reg; void* cause_reg; } ;
struct intr_details {int member_0; char* member_1; } ;
struct adapter {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;


 void* FUNC_0 (int,int ) ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (struct adapter*,struct intr_info*,int ,int) ;

__attribute__((used)) static bool FUNC_6(struct adapter *VAR_10, int VAR_11, bool VAR_12)
{
 static const struct intr_details VAR_13[] = {
  { 128, "MAC Tx FIFO parity error" },
  { 129, "MAC Rx FIFO parity error" },
  { 0 }
 };
 char VAR_14[32];
 struct intr_info VAR_15;
 bool VAR_16 = 0;

 if (FUNC_3(VAR_10)) {
  FUNC_4(VAR_14, sizeof(VAR_14), "XGMAC_PORT%u_INT_CAUSE", VAR_11);
  VAR_15.name = &VAR_14[0];
  VAR_15.cause_reg = FUNC_0(VAR_11, VAR_6);
  VAR_15.enable_reg = FUNC_0(VAR_11, VAR_7);
  VAR_15.fatal = 128 | 129;
  VAR_15.flags = 0;
  VAR_15.details = VAR_13;
  VAR_15.actions = ((void*)0);
 } else {
  FUNC_4(VAR_14, sizeof(VAR_14), "MAC_PORT%u_INT_CAUSE", VAR_11);
  VAR_15.name = &VAR_14[0];
  VAR_15.cause_reg = FUNC_1(VAR_11, VAR_0);
  VAR_15.enable_reg = FUNC_1(VAR_11, VAR_1);
  VAR_15.fatal = 128 | 129;
  VAR_15.flags = 0;
  VAR_15.details = VAR_13;
  VAR_15.actions = ((void*)0);
 }
 VAR_16 |= FUNC_5(VAR_10, &VAR_15, 0, VAR_12);

 if (FUNC_2(VAR_10) >= VAR_8) {
  FUNC_4(VAR_14, sizeof(VAR_14), "MAC_PORT%u_PERR_INT_CAUSE", VAR_11);
  VAR_15.name = &VAR_14[0];
  VAR_15.cause_reg = FUNC_1(VAR_11, VAR_2);
  VAR_15.enable_reg = FUNC_1(VAR_11, VAR_4);
  VAR_15.fatal = 0;
  VAR_15.flags = 0;
  VAR_15.details = ((void*)0);
  VAR_15.actions = ((void*)0);
  VAR_16 |= FUNC_5(VAR_10, &VAR_15, 0, VAR_12);
 }

 if (FUNC_2(VAR_10) >= VAR_9) {
  FUNC_4(VAR_14, sizeof(VAR_14), "MAC_PORT%u_PERR_INT_CAUSE_100G", VAR_11);
  VAR_15.name = &VAR_14[0];
  VAR_15.cause_reg = FUNC_1(VAR_11, VAR_3);
  VAR_15.enable_reg = FUNC_1(VAR_11, VAR_5);
  VAR_15.fatal = 0;
  VAR_15.flags = 0;
  VAR_15.details = ((void*)0);
  VAR_15.actions = ((void*)0);
  VAR_16 |= FUNC_5(VAR_10, &VAR_15, 0, VAR_12);
 }

 return (VAR_16);
}
