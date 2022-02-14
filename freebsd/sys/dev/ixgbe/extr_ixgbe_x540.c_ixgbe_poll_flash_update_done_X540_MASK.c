
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 s32 VAR_8 = VAR_2;

 FUNC_0("ixgbe_poll_flash_update_done_X540");

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_3(VAR_5, FUNC_2(VAR_5));
  if (VAR_7 & VAR_0) {
   VAR_8 = VAR_4;
   break;
  }
  FUNC_4(5);
 }

 if (VAR_6 == VAR_3)
  FUNC_1(VAR_1,
        "Flash update status polling timed out");

 return VAR_8;
}
