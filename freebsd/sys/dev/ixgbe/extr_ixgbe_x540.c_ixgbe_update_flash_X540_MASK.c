
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {scalar_t__ revision_id; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;

s32 FUNC_6(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 FUNC_0("ixgbe_update_flash_X540");

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 == VAR_2) {
  FUNC_1("Flash update time out\n");
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5, FUNC_2(VAR_5)) | VAR_0;
 FUNC_4(VAR_5, FUNC_2(VAR_5), VAR_6);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 == VAR_3)
  FUNC_1("Flash update complete\n");
 else
  FUNC_1("Flash update time out\n");

 if (VAR_5->mac.type == VAR_4 && VAR_5->revision_id == 0) {
  VAR_6 = FUNC_3(VAR_5, FUNC_2(VAR_5));

  if (VAR_6 & VAR_1) {
   VAR_6 |= VAR_0;
   FUNC_4(VAR_5, FUNC_2(VAR_5), VAR_6);
  }

  VAR_7 = FUNC_5(VAR_5);
  if (VAR_7 == VAR_3)
   FUNC_1("Flash update complete\n");
  else
   FUNC_1("Flash update time out\n");
 }
out:
 return VAR_7;
}
