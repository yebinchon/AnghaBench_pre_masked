
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
typedef int msgbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int*,int ,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 u32 VAR_8[3], VAR_9;
 u8 *VAR_10 = (u8 *)(&VAR_8[1]);
 s32 VAR_11;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));






 VAR_8[0] |= VAR_6 << VAR_2;
 VAR_8[0] |= VAR_1;
 VAR_9 = VAR_8[0];
 if (VAR_7)
  FUNC_1(VAR_10, VAR_7, 6);

 VAR_11 = FUNC_0(VAR_5, VAR_8, VAR_8, 3);
 if (!VAR_11) {
  VAR_8[0] &= ~VAR_3;

  if (VAR_8[0] == (VAR_9 | VAR_4))
   return VAR_0;
 }

 return VAR_11;
}
