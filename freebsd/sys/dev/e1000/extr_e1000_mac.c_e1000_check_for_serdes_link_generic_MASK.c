
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_mac_info {int txcw; void* serdes_has_link; void* autoneg_failed; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_14)
{
 struct e1000_mac_info *VAR_15 = &VAR_14->mac;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 s32 VAR_19;

 FUNC_0("e1000_check_for_serdes_link_generic");

 VAR_17 = FUNC_2(VAR_14, VAR_0);
 VAR_18 = FUNC_2(VAR_14, VAR_7);
 VAR_16 = FUNC_2(VAR_14, VAR_3);
 if (!(VAR_18 & VAR_8) && !(VAR_16 & VAR_4)) {
  if (!VAR_15->autoneg_failed) {
   VAR_15->autoneg_failed = VAR_13;
   return VAR_9;
  }
  FUNC_1("NOT Rx'ing /C/, disable AutoNeg and force link.\n");


  FUNC_3(VAR_14, VAR_10, (VAR_15->txcw & ~VAR_11));


  VAR_17 = FUNC_2(VAR_14, VAR_0);
  VAR_17 |= (VAR_2 | VAR_1);
  FUNC_3(VAR_14, VAR_0, VAR_17);


  VAR_19 = FUNC_4(VAR_14);
  if (VAR_19) {
   FUNC_1("Error configuring flow control\n");
   return VAR_19;
  }
 } else if ((VAR_17 & VAR_2) && (VAR_16 & VAR_4)) {





  FUNC_1("Rx'ing /C/, enable AutoNeg and stop forcing link.\n");
  FUNC_3(VAR_14, VAR_10, VAR_15->txcw);
  FUNC_3(VAR_14, VAR_0, (VAR_17 & ~VAR_2));

  VAR_15->serdes_has_link = VAR_13;
 } else if (!(VAR_11 & FUNC_2(VAR_14, VAR_10))) {





  FUNC_5(10);
  VAR_16 = FUNC_2(VAR_14, VAR_3);
  if (VAR_16 & VAR_6) {
   if (!(VAR_16 & VAR_5)) {
    VAR_15->serdes_has_link = VAR_13;
    FUNC_1("SERDES: Link up - forced.\n");
   }
  } else {
   VAR_15->serdes_has_link = VAR_12;
   FUNC_1("SERDES: Link down - force failed.\n");
  }
 }

 if (VAR_11 & FUNC_2(VAR_14, VAR_10)) {
  VAR_18 = FUNC_2(VAR_14, VAR_7);
  if (VAR_18 & VAR_8) {

   FUNC_5(10);
   VAR_16 = FUNC_2(VAR_14, VAR_3);
   if (VAR_16 & VAR_6) {
    if (!(VAR_16 & VAR_5)) {
     VAR_15->serdes_has_link = VAR_13;
     FUNC_1("SERDES: Link up - autoneg completed successfully.\n");
    } else {
     VAR_15->serdes_has_link = VAR_12;
     FUNC_1("SERDES: Link down - invalid codewords detected in autoneg.\n");
    }
   } else {
    VAR_15->serdes_has_link = VAR_12;
    FUNC_1("SERDES: Link down - no sync.\n");
   }
  } else {
   VAR_15->serdes_has_link = VAR_12;
   FUNC_1("SERDES: Link down - autoneg failed\n");
  }
 }

 return VAR_9;
}
