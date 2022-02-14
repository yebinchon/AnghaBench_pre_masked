
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; int semaphore_delay; int word_size; int address_bits; scalar_t__ word_page_size; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

s32 FUNC_4(struct ixgbe_hw *VAR_9)
{
 struct ixgbe_eeprom_info *VAR_10 = &VAR_9->eeprom;
 u32 VAR_11;
 u16 VAR_12;

 FUNC_0("ixgbe_init_eeprom_params_generic");

 if (VAR_10->type == VAR_8) {
  VAR_10->type = VAR_6;


  VAR_10->semaphore_delay = 10;

  VAR_10->word_page_size = 0;





  VAR_11 = FUNC_3(VAR_9, FUNC_2(VAR_9));
  if (VAR_11 & VAR_1) {
   VAR_10->type = VAR_7;





   VAR_12 = (u16)((VAR_11 & VAR_2) >>
         VAR_3);
   VAR_10->word_size = 1 << (VAR_12 +
          VAR_4);
  }

  if (VAR_11 & VAR_0)
   VAR_10->address_bits = 16;
  else
   VAR_10->address_bits = 8;
  FUNC_1("Eeprom params: type = %d, size = %d, address bits: "
     "%d\n", VAR_10->type, VAR_10->word_size,
     VAR_10->address_bits);
 }

 return VAR_5;
}
