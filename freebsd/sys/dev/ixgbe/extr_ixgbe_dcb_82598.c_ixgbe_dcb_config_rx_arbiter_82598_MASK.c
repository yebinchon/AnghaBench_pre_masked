
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_16 ;

s32 FUNC_3(struct ixgbe_hw *VAR_17, u16 *VAR_18,
          u16 *VAR_19, u8 *VAR_20)
{
 u32 VAR_21 = 0;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u8 VAR_24 = 0;

 VAR_21 = FUNC_0(VAR_17, VAR_11) | VAR_12;
 FUNC_2(VAR_17, VAR_11, VAR_21);

 VAR_21 = FUNC_0(VAR_17, VAR_5);

 VAR_21 &= ~VAR_6;

 VAR_21 |= VAR_8;

 VAR_21 |= VAR_7;

 FUNC_2(VAR_17, VAR_5, VAR_21);


 for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
  VAR_22 = VAR_18[VAR_24];
  VAR_23 = VAR_19[VAR_24];

  VAR_21 = VAR_22 | (VAR_23 << VAR_10);

  if (VAR_20[VAR_24] == VAR_16)
   VAR_21 |= VAR_9;

  FUNC_2(VAR_17, FUNC_1(VAR_24), VAR_21);
 }

 VAR_21 = FUNC_0(VAR_17, VAR_1);
 VAR_21 |= VAR_4;
 VAR_21 |= VAR_3;
 VAR_21 |= VAR_2;
 FUNC_2(VAR_17, VAR_1, VAR_21);

 VAR_21 = FUNC_0(VAR_17, VAR_13);

 VAR_21 &= ~VAR_14;
 FUNC_2(VAR_17, VAR_13, VAR_21);

 return VAR_15;
}
