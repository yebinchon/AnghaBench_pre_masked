
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ixgbe_hw*,int*,int*,int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_5, u32 VAR_6, u32 VAR_7,
        bool VAR_8, bool VAR_9)
{
 u32 VAR_10[2];
 s32 VAR_11;
 FUNC_0(VAR_7, VAR_9);

 VAR_10[0] = VAR_1;
 VAR_10[1] = VAR_6;

 VAR_10[0] |= VAR_8 << VAR_2;

 VAR_11 = FUNC_1(VAR_5, VAR_10, VAR_10, 2);
 if (!VAR_11 && (VAR_10[0] & VAR_3))
  return VAR_0;

 return VAR_11 | (VAR_10[0] & VAR_4);
}
