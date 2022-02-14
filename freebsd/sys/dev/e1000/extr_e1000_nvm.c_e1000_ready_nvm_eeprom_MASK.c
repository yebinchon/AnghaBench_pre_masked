
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_nvm_info {scalar_t__ type; int opcode_bits; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int) ;
 int FUNC_6 (struct e1000_hw*,int ,int ) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_11)
{
 struct e1000_nvm_info *VAR_12 = &VAR_11->nvm;
 u32 VAR_13 = FUNC_2(VAR_11, VAR_0);
 u8 VAR_14;

 FUNC_0("e1000_ready_nvm_eeprom");

 if (VAR_12->type == VAR_9) {

  VAR_13 &= ~(VAR_2 | VAR_3);
  FUNC_4(VAR_11, VAR_0, VAR_13);

  VAR_13 |= VAR_1;
  FUNC_4(VAR_11, VAR_0, VAR_13);
 } else if (VAR_12->type == VAR_10) {
  u16 VAR_15 = VAR_6;


  VAR_13 &= ~(VAR_1 | VAR_3);
  FUNC_4(VAR_11, VAR_0, VAR_13);
  FUNC_3(VAR_11);
  FUNC_8(1);






  while (VAR_15) {
   FUNC_6(VAR_11, VAR_7,
       VAR_11->nvm.opcode_bits);
   VAR_14 = (u8)FUNC_5(VAR_11, 8);
   if (!(VAR_14 & VAR_8))
    break;

   FUNC_8(5);
   FUNC_7(VAR_11);
   VAR_15--;
  }

  if (!VAR_15) {
   FUNC_1("SPI NVM Status error\n");
   return -VAR_4;
  }
 }

 return VAR_5;
}
