
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_1)
{
 u32 VAR_2 = 0;
 u8 VAR_3 = 0;
 u8 VAR_4 = 0;


 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 15 && VAR_4 < 8; VAR_3 = VAR_3 + 2, VAR_4++) {
  VAR_2 = FUNC_0(VAR_1, FUNC_1(VAR_3));
  VAR_2 |= ((0x1010101) * VAR_4);
  FUNC_3(VAR_1, FUNC_1(VAR_3), VAR_2);
  VAR_2 = FUNC_0(VAR_1, FUNC_1(VAR_3 + 1));
  VAR_2 |= ((0x1010101) * VAR_4);
  FUNC_3(VAR_1, FUNC_1(VAR_3 + 1), VAR_2);
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, FUNC_2(VAR_3));
  VAR_2 |= ((0x1010101) * VAR_3);
  FUNC_3(VAR_1, FUNC_2(VAR_3), VAR_2);
 }

 return VAR_0;
}
