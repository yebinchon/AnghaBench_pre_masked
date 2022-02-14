
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int orig_autoc; scalar_t__ orig_link_settings_stored; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


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
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_11,
          ixgbe_link_speed *VAR_12,
          bool *VAR_13)
{
 s32 VAR_14 = VAR_9;
 u32 VAR_15 = 0;

 FUNC_0("ixgbe_get_link_capabilities_82598");






 if (VAR_11->mac.orig_link_settings_stored)
  VAR_15 = VAR_11->mac.orig_autoc;
 else
  VAR_15 = FUNC_1(VAR_11, VAR_1);

 switch (VAR_15 & VAR_4) {
 case 130:
  *VAR_12 = VAR_7;
  *VAR_13 = VAR_0;
  break;

 case 132:
  *VAR_12 = VAR_6;
  *VAR_13 = VAR_0;
  break;

 case 131:
  *VAR_12 = VAR_7;
  *VAR_13 = VAR_10;
  break;

 case 129:
 case 128:
  *VAR_12 = VAR_8;
  if (VAR_15 & VAR_2)
   *VAR_12 |= VAR_6;
  if (VAR_15 & VAR_3)
   *VAR_12 |= VAR_7;
  *VAR_13 = VAR_10;
  break;

 default:
  VAR_14 = VAR_5;
  break;
 }

 return VAR_14;
}
