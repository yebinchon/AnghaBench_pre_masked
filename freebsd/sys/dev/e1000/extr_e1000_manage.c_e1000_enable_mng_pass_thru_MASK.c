
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ has_fwsm; int asf_firmware_present; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int*) ;

bool FUNC_3(struct e1000_hw *VAR_16)
{
 u32 VAR_17;
 u32 VAR_18, VAR_19;

 FUNC_0("e1000_enable_mng_pass_thru");

 if (!VAR_16->mac.asf_firmware_present)
  return VAR_10;

 VAR_17 = FUNC_1(VAR_16, VAR_5);

 if (!(VAR_17 & VAR_7))
  return VAR_10;

 if (VAR_16->mac.has_fwsm) {
  VAR_18 = FUNC_1(VAR_16, VAR_2);
  VAR_19 = FUNC_1(VAR_16, VAR_0);

  if (!(VAR_19 & VAR_1) &&
      ((VAR_18 & VAR_3) ==
       (VAR_15 << VAR_4)))
   return VAR_12;
 } else if ((VAR_16->mac.type == VAR_13) ||
     (VAR_16->mac.type == VAR_14)) {
  u16 VAR_20;
  s32 VAR_21;

  VAR_19 = FUNC_1(VAR_16, VAR_0);
  VAR_21 = FUNC_2(VAR_16, VAR_11, 1, &VAR_20);
  if (VAR_21)
   return VAR_10;

  if (!(VAR_19 & VAR_1) &&
      ((VAR_20 & VAR_9) ==
       (VAR_15 << 13)))
   return VAR_12;
 } else if ((VAR_17 & VAR_8) &&
     !(VAR_17 & VAR_6)) {
  return VAR_12;
 }

 return VAR_10;
}
