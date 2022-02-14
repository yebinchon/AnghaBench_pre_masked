
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_mac_info {scalar_t__ type; int serdes_has_link; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_18,
      u16 *VAR_19, u16 *VAR_20)
{
 struct e1000_mac_info *VAR_21 = &VAR_18->mac;
 u32 VAR_22;
 u32 VAR_23;

 FUNC_0("e1000_get_pcs_speed_and_duplex_82575");






 VAR_22 = FUNC_2(VAR_18, VAR_0);




 if (VAR_22 & VAR_2) {
  VAR_21->serdes_has_link = VAR_16;


  if (VAR_22 & VAR_4)
   *VAR_19 = VAR_14;
  else if (VAR_22 & VAR_3)
   *VAR_19 = VAR_13;
  else
   *VAR_19 = VAR_12;


  if (VAR_22 & VAR_1)
   *VAR_20 = VAR_10;
  else
   *VAR_20 = VAR_11;


  if (VAR_21->type == VAR_17) {
   VAR_23 = FUNC_2(VAR_18, VAR_5);
   if ((VAR_23 & VAR_6) &&
       !(VAR_23 & VAR_7)) {
    *VAR_19 = VAR_15;
    *VAR_20 = VAR_10;
    FUNC_1("2500 Mbs, ");
    FUNC_1("Full Duplex\n");
   }
  }

 } else {
  VAR_21->serdes_has_link = VAR_9;
  *VAR_19 = 0;
  *VAR_20 = 0;
 }

 return VAR_8;
}
