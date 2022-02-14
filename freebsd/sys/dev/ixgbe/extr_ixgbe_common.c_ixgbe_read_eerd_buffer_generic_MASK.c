
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ word_size; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;

s32 FUNC_7(struct ixgbe_hw *VAR_9, u16 VAR_10,
       u16 VAR_11, u16 *VAR_12)
{
 u32 VAR_13;
 s32 VAR_14 = VAR_8;
 u32 VAR_15;

 FUNC_0("ixgbe_read_eerd_buffer_generic");

 VAR_9->eeprom.ops.init_params(VAR_9);

 if (VAR_11 == 0) {
  VAR_14 = VAR_6;
  FUNC_2(VAR_4, "Invalid EEPROM words");
  goto out;
 }

 if (VAR_10 >= VAR_9->eeprom.word_size) {
  VAR_14 = VAR_5;
  FUNC_2(VAR_4, "Invalid EEPROM offset");
  goto out;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_13 = ((VAR_10 + VAR_15) << VAR_0) |
         VAR_2;

  FUNC_4(VAR_9, VAR_3, VAR_13);
  VAR_14 = FUNC_5(VAR_9, VAR_7);

  if (VAR_14 == VAR_8) {
   VAR_12[VAR_15] = (FUNC_3(VAR_9, VAR_3) >>
       VAR_1);
  } else {
   FUNC_1("Eeprom read timed out\n");
   goto out;
  }
 }
out:
 return VAR_14;
}
