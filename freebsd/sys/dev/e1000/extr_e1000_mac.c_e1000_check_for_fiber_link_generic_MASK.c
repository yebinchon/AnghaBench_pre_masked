
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
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 void* VAR_11 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_12)
{
 struct e1000_mac_info *VAR_13 = &VAR_12->mac;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 s32 VAR_17;

 FUNC_0("e1000_check_for_fiber_link_generic");

 VAR_15 = FUNC_2(VAR_12, VAR_0);
 VAR_16 = FUNC_2(VAR_12, VAR_6);
 VAR_14 = FUNC_2(VAR_12, VAR_4);
 if ((VAR_15 & VAR_3) && !(VAR_16 & VAR_7) &&
     !(VAR_14 & VAR_5)) {
  if (!VAR_13->autoneg_failed) {
   VAR_13->autoneg_failed = VAR_11;
   return VAR_8;
  }
  FUNC_1("NOT Rx'ing /C/, disable AutoNeg and force link.\n");


  FUNC_3(VAR_12, VAR_9, (VAR_13->txcw & ~VAR_10));


  VAR_15 = FUNC_2(VAR_12, VAR_0);
  VAR_15 |= (VAR_2 | VAR_1);
  FUNC_3(VAR_12, VAR_0, VAR_15);


  VAR_17 = FUNC_4(VAR_12);
  if (VAR_17) {
   FUNC_1("Error configuring flow control\n");
   return VAR_17;
  }
 } else if ((VAR_15 & VAR_2) && (VAR_14 & VAR_5)) {





  FUNC_1("Rx'ing /C/, enable AutoNeg and stop forcing link.\n");
  FUNC_3(VAR_12, VAR_9, VAR_13->txcw);
  FUNC_3(VAR_12, VAR_0, (VAR_15 & ~VAR_2));

  VAR_13->serdes_has_link = VAR_11;
 }

 return VAR_8;
}
