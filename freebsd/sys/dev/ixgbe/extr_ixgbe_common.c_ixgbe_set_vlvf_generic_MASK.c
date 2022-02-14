
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_5, u32 VAR_6, u32 VAR_7,
      bool VAR_8, u32 *VAR_9, u32 VAR_10,
      bool VAR_11)
{
 u32 VAR_12;
 s32 VAR_13;

 FUNC_0("ixgbe_set_vlvf_generic");

 if (VAR_6 > 4095 || VAR_7 > 63)
  return VAR_0;
 if (!(FUNC_1(VAR_5, VAR_3) & VAR_4))
  return VAR_1;

 VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_5, FUNC_4(VAR_13 * 2 + VAR_7 / 32));


 VAR_12 |= 1 << (VAR_7 % 32);
 if (VAR_8)
  goto vlvf_update;


 VAR_12 ^= 1 << (VAR_7 % 32);

 if (!VAR_12 &&
     !FUNC_1(VAR_5, FUNC_4(VAR_13 * 2 + 1 - VAR_7 / 32))) {




  if (*VAR_9)
   FUNC_5(VAR_5, FUNC_2(VAR_6 / 32), VAR_10);


  FUNC_5(VAR_5, FUNC_3(VAR_13), 0);
  FUNC_5(VAR_5, FUNC_4(VAR_13 * 2 + VAR_7 / 32), 0);

  return VAR_1;
 }
 *VAR_9 = 0;

vlvf_update:

 FUNC_5(VAR_5, FUNC_4(VAR_13 * 2 + VAR_7 / 32), VAR_12);
 FUNC_5(VAR_5, FUNC_3(VAR_13), VAR_2 | VAR_6);

 return VAR_1;
}
