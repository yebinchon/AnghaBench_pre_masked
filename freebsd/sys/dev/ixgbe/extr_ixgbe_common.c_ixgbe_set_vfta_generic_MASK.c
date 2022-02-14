
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int,int,int*,int,int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_2, u32 VAR_3, u32 VAR_4,
      bool VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 s32 VAR_10;

 FUNC_0("ixgbe_set_vfta_generic");

 if (VAR_3 > 4095 || VAR_4 > 63)
  return VAR_0;
 VAR_7 = VAR_3 / 32;
 VAR_8 = 1 << (VAR_3 % 32);
 VAR_9 = FUNC_1(VAR_2, FUNC_2(VAR_7));






 VAR_8 &= VAR_5 ? ~VAR_9 : VAR_9;
 VAR_9 ^= VAR_8;




 VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8,
      VAR_9, VAR_6);
 if (VAR_10 != VAR_1) {
  if (VAR_6)
   goto vfta_update;
  return VAR_10;
 }

vfta_update:

 if (VAR_8)
  FUNC_3(VAR_2, FUNC_2(VAR_7), VAR_9);

 return VAR_1;
}
