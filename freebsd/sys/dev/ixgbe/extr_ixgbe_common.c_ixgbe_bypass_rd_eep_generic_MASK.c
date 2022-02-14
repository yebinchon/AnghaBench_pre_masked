
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int,int*) ;
 int FUNC_1 (int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_7, u32 VAR_8, u8 *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;



 VAR_10 = VAR_3 | VAR_4;
 VAR_10 |= (VAR_8 << VAR_2) & VAR_1;
 if (FUNC_0(VAR_7, VAR_10, &VAR_11))
  return VAR_5;


 FUNC_1(100);


 VAR_10 &= ~VAR_4;
 if (FUNC_0(VAR_7, VAR_10, &VAR_11))
  return VAR_5;

 *VAR_9 = VAR_11 & VAR_0;

 return VAR_6;
}
