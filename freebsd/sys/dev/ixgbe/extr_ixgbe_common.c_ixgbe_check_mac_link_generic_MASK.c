
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int type; scalar_t__ max_link_up_time; } ;
struct ixgbe_hw {int device_id; TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;


 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_20, ixgbe_link_speed *VAR_21,
     bool *VAR_22, bool VAR_23)
{
 u32 VAR_24, VAR_25;
 u32 VAR_26;

 FUNC_0("ixgbe_check_mac_link_generic");




 if (FUNC_3(VAR_20)) {
  u32 VAR_27;

  switch (VAR_20->mac.type) {
  case 130:
   VAR_27 = FUNC_2(VAR_20, VAR_3) &
     VAR_5;
   break;
  case 128:
  case 129:
   VAR_27 = FUNC_2(VAR_20, VAR_3) &
     VAR_4;
   break;
  default:

   VAR_27 = VAR_0;
   break;
  }

  if (!VAR_27) {
   *VAR_22 = VAR_0;
   *VAR_21 = VAR_16;
   return VAR_17;
  }
 }


 VAR_25 = FUNC_2(VAR_20, VAR_6);

 VAR_24 = FUNC_2(VAR_20, VAR_6);

 if (VAR_25 != VAR_24) {
  FUNC_1("LINKS changed from %08X to %08X\n",
     VAR_25, VAR_24);
 }

 if (VAR_23) {
  for (VAR_26 = 0; VAR_26 < VAR_20->mac.max_link_up_time; VAR_26++) {
   if (VAR_24 & VAR_9) {
    *VAR_22 = VAR_18;
    break;
   } else {
    *VAR_22 = VAR_0;
   }
   FUNC_4(100);
   VAR_24 = FUNC_2(VAR_20, VAR_6);
  }
 } else {
  if (VAR_24 & VAR_9)
   *VAR_22 = VAR_18;
  else
   *VAR_22 = VAR_0;
 }

 switch (VAR_24 & VAR_7) {
 case 133:
  *VAR_21 = VAR_11;
  if (VAR_20->mac.type >= VAR_19) {
   if (VAR_24 & VAR_8)
    *VAR_21 = VAR_14;
  }
  break;
 case 131:
  *VAR_21 = VAR_13;
  break;
 case 134:
  *VAR_21 = VAR_10;
  if (VAR_20->mac.type == VAR_19) {
   if (VAR_24 & VAR_8)
    *VAR_21 = VAR_15;
  }
  break;
 case 132:
  *VAR_21 = VAR_16;
  if (VAR_20->device_id == VAR_1 ||
      VAR_20->device_id == VAR_2)
   *VAR_21 = VAR_12;
  break;
 default:
  *VAR_21 = VAR_16;
 }

 return VAR_17;
}
