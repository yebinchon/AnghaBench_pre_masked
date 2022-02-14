
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

s32 FUNC_3(struct ixgbe_hw *VAR_6)
{
 u32 VAR_7;

 FUNC_0("ixgbe_check_reset_blocked");


 if (VAR_6->mac.type == VAR_5)
  return VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (VAR_7 & VAR_3) {
  FUNC_1(VAR_1,
         "MNG_VETO bit detected.\n");
  return VAR_4;
 }

 return VAR_0;
}
