
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 size_t VAR_12 ;

s32 FUNC_2(struct ixgbe_hw *VAR_13, u16 *VAR_14,
          u16 *VAR_15, u8 *VAR_16, u8 *VAR_17,
          u8 *VAR_18)
{
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 u8 VAR_22 = 0;





 VAR_19 = VAR_5 | VAR_4 | VAR_3;
 FUNC_1(VAR_13, VAR_2, VAR_19);







 VAR_19 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
  VAR_19 |= (VAR_18[VAR_22] << (VAR_22 * VAR_10));

 FUNC_1(VAR_13, VAR_9, VAR_19);


 for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
  VAR_20 = VAR_14[VAR_22];
  VAR_21 = VAR_15[VAR_22];
  VAR_19 = VAR_20 | (VAR_21 << VAR_8);

  VAR_19 |= (u32)(VAR_16[VAR_22]) << VAR_6;

  if (VAR_17[VAR_22] == VAR_12)
   VAR_19 |= VAR_7;

  FUNC_1(VAR_13, FUNC_0(VAR_22), VAR_19);
 }





 VAR_19 = VAR_5 | VAR_4;
 FUNC_1(VAR_13, VAR_2, VAR_19);

 return VAR_11;
}
