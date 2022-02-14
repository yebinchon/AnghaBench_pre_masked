
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
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_6, u32 VAR_7, u32 VAR_8,
        u32 VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0;


 VAR_11 = VAR_7;
 if (FUNC_0(VAR_6, VAR_11, &VAR_10))
  return VAR_4;


 VAR_11 = (VAR_10 & ~VAR_8) | VAR_2 | VAR_9;
 if (FUNC_0(VAR_6, VAR_11, &VAR_10))
  return VAR_4;


 if ((VAR_11 & VAR_1) == VAR_0) {
  VAR_12 = VAR_0;
  do {
   if (VAR_13++ > 5)
    return VAR_3;

   if (FUNC_0(VAR_6, VAR_12, &VAR_10))
    return VAR_4;
  } while (!FUNC_1(VAR_11, VAR_10));
 } else {

  FUNC_2(100);
 }

 return VAR_5;
}
