
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct port_tx_state {int dummy; } ;
struct fw_debug_cmd {int dummy; } ;
struct adapter {int flags; } ;
typedef int cmd_rpl ;
typedef int const __be64 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct adapter*,int,int,char*,int const*,int) ;
 int FUNC_3 (struct adapter*,char*,int const,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (int const) ;
 int FUNC_12 (struct adapter*,struct port_tx_state*) ;
 int FUNC_13 (struct adapter*,struct fw_debug_cmd*) ;
 int FUNC_14 (struct adapter*,int const*,int,int) ;
 scalar_t__ FUNC_15 (struct adapter*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (void*,int const*,int) ;
 int FUNC_18 (int const*,int ,int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct adapter*,struct port_tx_state*) ;
 int FUNC_21 (struct adapter*,int) ;
 int FUNC_22 (struct adapter*) ;
 int FUNC_23 (struct adapter*,int) ;
 int FUNC_24 (struct adapter*) ;
 int FUNC_25 (struct adapter*,int,int) ;
 int FUNC_26 (struct adapter*,int,int) ;

int FUNC_27(struct adapter *VAR_22, int VAR_23, const void *VAR_24,
       int VAR_25, void *VAR_26, bool VAR_27, int VAR_28)
{





 static const int VAR_29[] = {
  1, 1, 3, 5, 10, 10, 20, 50, 100
 };
 u32 VAR_30;
 u64 VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 u32 VAR_37 = FUNC_7(VAR_23, VAR_1);
 u32 VAR_38 = FUNC_7(VAR_23, VAR_0);
 u32 VAR_39;
 __be64 VAR_40[VAR_17/8];
 u32 VAR_41;
 struct port_tx_state VAR_42[VAR_16];

 if (VAR_22->flags & VAR_4)
  FUNC_1(VAR_22);

 if (VAR_25 <= 0 || (VAR_25 & 15) || VAR_25 > VAR_17)
  return -VAR_6;

 if (VAR_22->flags & VAR_15) {
  if (FUNC_15(VAR_22))
   VAR_37 = VAR_12;
  else
   VAR_37 = VAR_11;
  VAR_38 = FUNC_8(VAR_2);
 }




 if (VAR_28 < 0) {
  VAR_27 = 0;
  VAR_28 = -VAR_28;
 }




 for (VAR_32 = 0; VAR_32 < 4; VAR_32++) {
  VAR_39 = FUNC_23(VAR_22, VAR_38);
  VAR_30 = FUNC_6(VAR_39);
  if (VAR_30 != VAR_20)
   break;
 }




 if (VAR_30 != VAR_21) {
  FUNC_24(VAR_22);
  VAR_35 = (VAR_30 == VAR_19) ? -VAR_5 : -VAR_9;
  return VAR_35;
 }
 if (VAR_39 & VAR_13) {
  FUNC_2(VAR_22, VAR_23, VAR_37, "VLD", ((void*)0), 1);
 }




 FUNC_18(VAR_40, 0, sizeof(VAR_40));
 FUNC_17(VAR_40, VAR_24, VAR_25);
 FUNC_2(VAR_22, VAR_23, 0, "cmd", VAR_40, 0);
 for (VAR_32 = 0; VAR_32 < FUNC_0(VAR_40); VAR_32++)
  FUNC_26(VAR_22, VAR_37 + VAR_32 * 8, FUNC_11(VAR_40[VAR_32]));

 if (VAR_22->flags & VAR_15) {
  FUNC_23(VAR_22, VAR_37);
 }

 FUNC_25(VAR_22, VAR_38, VAR_13 | FUNC_10(VAR_19));
 FUNC_20(VAR_22, &VAR_42[0]);
 VAR_36 = 1000;
 VAR_34 = 0;
 VAR_33 = VAR_29[0];





 VAR_41 = 0;
 for (VAR_32 = 0; VAR_32 < VAR_28; VAR_32 += VAR_33) {
  if (!(VAR_22->flags & VAR_15)) {
   VAR_41 = FUNC_23(VAR_22, VAR_3);
   if (VAR_41 & VAR_14)
    break;
  }

  if (VAR_32 >= VAR_36) {
   FUNC_12(VAR_22, &VAR_42[0]);
   VAR_36 = VAR_32 + 1000;
  }

  if (VAR_27) {
   VAR_33 = VAR_29[VAR_34];
   if (VAR_34 < FUNC_0(VAR_29) - 1)
    VAR_34++;
   FUNC_19(VAR_33);
  } else {
   FUNC_16(VAR_33);
  }

  VAR_30 = FUNC_23(VAR_22, VAR_38);
  if (VAR_30 == VAR_18)
   continue;
  if (FUNC_6(VAR_30) == VAR_21) {
   if (!(VAR_30 & VAR_13)) {
    FUNC_25(VAR_22, VAR_38,
          FUNC_10(VAR_20));
    continue;
   }




   FUNC_14(VAR_22, VAR_40, VAR_17/8, VAR_37);
   FUNC_2(VAR_22, VAR_23, 0, "rpl", VAR_40, 0);
   FUNC_25(VAR_22, VAR_38, FUNC_10(VAR_20));

   VAR_31 = FUNC_11(VAR_40[0]);
   if (FUNC_4(VAR_31 >> 32) == VAR_10) {
    FUNC_13(VAR_22, (struct fw_debug_cmd *)VAR_40);
    VAR_31 = FUNC_9(VAR_7);
   } else if (VAR_26)
    FUNC_17(VAR_26, VAR_40, VAR_25);
   return -FUNC_5((int)VAR_31);
  }
 }






 FUNC_3(VAR_22, "command %#x in mbox %d timed out (0x%08x).\n",
     *(const u8 *)VAR_24, VAR_23, VAR_41);
 FUNC_2(VAR_22, VAR_23, 0, "cmdsent", VAR_40, 1);
 FUNC_2(VAR_22, VAR_23, VAR_37, "current", ((void*)0), 1);

 if (VAR_41 & VAR_14) {
  VAR_35 = -VAR_8;
  FUNC_24(VAR_22);
 } else {
  VAR_35 = -VAR_9;
  FUNC_22(VAR_22);
 }

 FUNC_21(VAR_22, 1);
 return VAR_35;
}
