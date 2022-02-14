
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_nvm_info {int flash_bank_size; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_7 ;




 int FUNC_3 (struct e1000_hw*,int,int*) ;
 int FUNC_4 (struct e1000_hw*,int,int*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_8, u32 *VAR_9)
{
 u32 VAR_10;
 struct e1000_nvm_info *VAR_11 = &VAR_8->nvm;
 u32 VAR_12 = VAR_11->flash_bank_size * sizeof(u16);
 u32 VAR_13 = VAR_5 * 2 + 1;
 u32 VAR_14 = 0;
 u8 VAR_15 = 0;
 s32 VAR_16;

 FUNC_0("e1000_valid_nvm_bank_detect_ich8lan");

 switch (VAR_8->mac.type) {
 case 128:
 case 129:
  VAR_12 = VAR_11->flash_bank_size;
  VAR_13 = VAR_5;


  *VAR_9 = 0;


  VAR_16 = FUNC_4(VAR_8, VAR_13,
        &VAR_14);
  if (VAR_16)
   return VAR_16;
  VAR_15 = (u8)((VAR_14 & 0xFF00) >> 8);
  if ((VAR_15 & VAR_6) ==
      VAR_4) {
   *VAR_9 = 0;
   return VAR_7;
  }


  VAR_16 = FUNC_4(VAR_8, VAR_13 +
        VAR_12,
        &VAR_14);
  if (VAR_16)
   return VAR_16;
  VAR_15 = (u8)((VAR_14 & 0xFF00) >> 8);
  if ((VAR_15 & VAR_6) ==
      VAR_4) {
   *VAR_9 = 1;
   return VAR_7;
  }

  FUNC_1("ERROR: No valid NVM bank present\n");
  return -VAR_3;
 case 131:
 case 130:
  VAR_10 = FUNC_2(VAR_8, VAR_0);
  if ((VAR_10 & VAR_2) ==
      VAR_2) {
   if (VAR_10 & VAR_1)
    *VAR_9 = 1;
   else
    *VAR_9 = 0;

   return VAR_7;
  }
  FUNC_1("Unable to determine valid NVM bank via EEC - reading flash signature\n");

 default:

  *VAR_9 = 0;


  VAR_16 = FUNC_3(VAR_8, VAR_13,
       &VAR_15);
  if (VAR_16)
   return VAR_16;
  if ((VAR_15 & VAR_6) ==
      VAR_4) {
   *VAR_9 = 0;
   return VAR_7;
  }


  VAR_16 = FUNC_3(VAR_8, VAR_13 +
       VAR_12,
       &VAR_15);
  if (VAR_16)
   return VAR_16;
  if ((VAR_15 & VAR_6) ==
      VAR_4) {
   *VAR_9 = 1;
   return VAR_7;
  }

  FUNC_1("ERROR: No valid NVM bank present\n");
  return -VAR_3;
 }
}
