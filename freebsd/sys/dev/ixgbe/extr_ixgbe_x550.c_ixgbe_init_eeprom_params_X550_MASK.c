
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; int semaphore_delay; int word_size; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

s32 FUNC_3(struct ixgbe_hw *VAR_7)
{
 struct ixgbe_eeprom_info *VAR_8 = &VAR_7->eeprom;
 u32 VAR_9;
 u16 VAR_10;

 FUNC_0("ixgbe_init_eeprom_params_X550");

 if (VAR_8->type == VAR_5) {
  VAR_8->semaphore_delay = 10;
  VAR_8->type = VAR_6;

  VAR_9 = FUNC_2(VAR_7, VAR_0);
  VAR_10 = (u16)((VAR_9 & VAR_1) >>
        VAR_2);
  VAR_8->word_size = 1 << (VAR_10 +
       VAR_3);

  FUNC_1("Eeprom params: type = %d, size = %d\n",
     VAR_8->type, VAR_8->word_size);
 }

 return VAR_4;
}
