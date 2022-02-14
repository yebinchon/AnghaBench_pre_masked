
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
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (size_t) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 size_t VAR_15 ;
 size_t VAR_16 ;

s32 FUNC_2(struct ixgbe_hw *VAR_17, u16 *VAR_18,
        u16 *VAR_19, u8 *VAR_20, u8 *VAR_21,
        u8 *VAR_22)
{
 u32 VAR_23;
 u8 VAR_24;





 VAR_23 = VAR_6 | VAR_7 |
       (VAR_4 << VAR_5) |
       VAR_3;
 FUNC_1(VAR_17, VAR_2, VAR_23);







 VAR_23 = 0;
 for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++)
  VAR_23 |= (VAR_22[VAR_24] << (VAR_24 * VAR_13));

 FUNC_1(VAR_17, VAR_12, VAR_23);


 for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
  VAR_23 = VAR_18[VAR_24];
  VAR_23 |= (u32)(VAR_19[VAR_24]) << VAR_11;
  VAR_23 |= (u32)(VAR_20[VAR_24]) << VAR_8;

  if (VAR_21[VAR_24] == VAR_15)
   VAR_23 |= VAR_9;

  if (VAR_21[VAR_24] == VAR_16)
   VAR_23 |= VAR_10;

  FUNC_1(VAR_17, FUNC_0(VAR_24), VAR_23);
 }





 VAR_23 = VAR_6 | VAR_7 |
       (VAR_4 << VAR_5);
 FUNC_1(VAR_17, VAR_2, VAR_23);

 return VAR_14;
}
