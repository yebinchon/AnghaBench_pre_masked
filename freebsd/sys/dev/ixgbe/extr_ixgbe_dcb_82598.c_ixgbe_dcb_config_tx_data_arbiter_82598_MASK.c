
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int FUNC_1 (size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_12 ;
 size_t VAR_13 ;

s32 FUNC_3(struct ixgbe_hw *VAR_14,
        u16 *VAR_15, u16 *VAR_16, u8 *VAR_17,
        u8 *VAR_18)
{
 u32 VAR_19;
 u8 VAR_20;

 VAR_19 = FUNC_0(VAR_14, VAR_3);

 VAR_19 &= ~VAR_4;

 VAR_19 |= (VAR_5 | VAR_6);

 FUNC_2(VAR_14, VAR_3, VAR_19);


 for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
  VAR_19 = VAR_15[VAR_20];
  VAR_19 |= (u32)(VAR_16[VAR_20]) << VAR_11;
  VAR_19 |= (u32)(VAR_17[VAR_20]) << VAR_8;

  if (VAR_18[VAR_20] == VAR_12)
   VAR_19 |= VAR_9;

  if (VAR_18[VAR_20] == VAR_13)
   VAR_19 |= VAR_10;

  FUNC_2(VAR_14, FUNC_1(VAR_20), VAR_19);
 }


 VAR_19 = FUNC_0(VAR_14, VAR_1);
 VAR_19 |= VAR_2;
 FUNC_2(VAR_14, VAR_1, VAR_19);

 return VAR_7;
}
