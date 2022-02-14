
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int word_size; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int,int*,int*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int,int*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_10, u16 *VAR_11, u32 VAR_12)
{
 u16 VAR_13[VAR_1 + 1];
 u16 *VAR_14;
 s32 VAR_15;
 u16 VAR_16 = 0;
 u16 VAR_17, VAR_18, VAR_19;

 FUNC_0("ixgbe_calc_eeprom_checksum_X550");

 VAR_10->eeprom.ops.init_params(VAR_10);

 if (!VAR_11) {

  VAR_15 = FUNC_3(VAR_10, 0,
           VAR_1 + 1,
           VAR_13);
  if (VAR_15) {
   FUNC_1("Failed to read EEPROM image\n");
   return VAR_15;
  }
  VAR_14 = VAR_13;
 } else {
  if (VAR_12 < VAR_1)
   return VAR_3;
  VAR_14 = VAR_11;
 }





 for (VAR_18 = 0; VAR_18 <= VAR_1; VAR_18++)
  if (VAR_18 != VAR_0)
   VAR_16 += VAR_14[VAR_18];





 for (VAR_18 = VAR_7; VAR_18 < VAR_4; VAR_18++) {
  if (VAR_18 == VAR_9 || VAR_18 == VAR_6)
   continue;

  VAR_17 = VAR_14[VAR_18];


  if (VAR_17 == 0xFFFF || VAR_17 == 0 ||
      VAR_17 >= VAR_10->eeprom.word_size)
   continue;

  switch (VAR_18) {
  case 128:
   VAR_19 = VAR_5;
   break;
  case 130:
  case 129:
   VAR_19 = VAR_8;
   break;
  default:
   VAR_19 = 0;
   break;
  }

  VAR_15 = FUNC_2(VAR_10, VAR_17, VAR_19, &VAR_16,
      VAR_11, VAR_12);
  if (VAR_15)
   return VAR_15;
 }

 VAR_16 = (u16)VAR_2 - VAR_16;

 return (s32)VAR_16;
}
