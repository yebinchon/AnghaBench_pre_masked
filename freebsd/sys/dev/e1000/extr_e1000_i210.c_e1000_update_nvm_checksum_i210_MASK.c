
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;

s32 FUNC_9(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7, VAR_8;

 FUNC_0("e1000_update_nvm_checksum_i210");






 VAR_5 = FUNC_2(VAR_4, 0, 1, &VAR_8);
 if (VAR_5 != VAR_1) {
  FUNC_1("EEPROM read failed\n");
  goto out;
 }

 if (VAR_4->nvm.ops.acquire(VAR_4) == VAR_1) {






  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_5 = FUNC_2(VAR_4, VAR_7, 1, &VAR_8);
   if (VAR_5) {
    VAR_4->nvm.ops.release(VAR_4);
    FUNC_1("NVM Read Error while updating checksum.\n");
    goto out;
   }
   VAR_6 += VAR_8;
  }
  VAR_6 = (u16) VAR_3 - VAR_6;
  VAR_5 = FUNC_4(VAR_4, VAR_2, 1,
      &VAR_6);
  if (VAR_5 != VAR_1) {
   VAR_4->nvm.ops.release(VAR_4);
   FUNC_1("NVM Write Error while updating checksum.\n");
   goto out;
  }

  VAR_4->nvm.ops.release(VAR_4);

  VAR_5 = FUNC_3(VAR_4);
 } else {
  VAR_5 = VAR_0;
 }
out:
 return VAR_5;
}
