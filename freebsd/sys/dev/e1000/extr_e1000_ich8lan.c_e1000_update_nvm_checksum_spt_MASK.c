
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int (* reload ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ type; scalar_t__ flash_bank_size; TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {int value; scalar_t__ modified; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_6->nvm;
 struct e1000_dev_spec_ich8lan *VAR_8 = &VAR_6->dev_spec.ich8lan;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 s32 VAR_14;
 u32 VAR_15 = 0;

 FUNC_0("e1000_update_nvm_checksum_spt");

 VAR_14 = FUNC_6(VAR_6);
 if (VAR_14)
  goto out;

 if (VAR_7->type != VAR_5)
  goto out;

 VAR_7->ops.acquire(VAR_6);





 VAR_14 = FUNC_7(VAR_6, &VAR_13);
 if (VAR_14 != VAR_3) {
  FUNC_1("Could not detect valid bank, assuming bank 0\n");
  VAR_13 = 0;
 }

 if (VAR_13 == 0) {
  VAR_11 = VAR_7->flash_bank_size;
  VAR_12 = 0;
  VAR_14 = FUNC_3(VAR_6, 1);
  if (VAR_14)
   goto release;
 } else {
  VAR_12 = VAR_7->flash_bank_size;
  VAR_11 = 0;
  VAR_14 = FUNC_3(VAR_6, 0);
  if (VAR_14)
   goto release;
 }
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9 += 2) {




  VAR_14 = FUNC_4(VAR_6,
        VAR_9 + VAR_12,
        &VAR_15);

  if (VAR_8->shadow_ram[VAR_9].modified) {
   VAR_15 &= 0xffff0000;
   VAR_15 |= (VAR_8->shadow_ram[VAR_9].value & 0xffff);
  }
  if (VAR_8->shadow_ram[VAR_9 + 1].modified) {
   VAR_15 &= 0x0000ffff;
   VAR_15 |= ((VAR_8->shadow_ram[VAR_9 + 1].value & 0xffff)
      << 16);
  }
  if (VAR_14)
   break;
  if (VAR_9 == VAR_1 - 1)
   VAR_15 |= VAR_0 << 16;


  VAR_10 = (VAR_9 + VAR_11) << 1;

  FUNC_12(100);


  VAR_10 = VAR_9 + VAR_11;
  VAR_14 = FUNC_5(VAR_6, VAR_10,
        VAR_15);
  if (VAR_14)
   break;
  }




 if (VAR_14) {
  FUNC_1("Flash commit failed.\n");
  goto release;
 }






 VAR_10 = VAR_11 + VAR_1;


 --VAR_10;
 VAR_14 = FUNC_4(VAR_6, VAR_10, &VAR_15);

 if (VAR_14)
  goto release;

 VAR_15 &= 0xBFFFFFFF;
 VAR_14 = FUNC_5(VAR_6, VAR_10, VAR_15);

 if (VAR_14)
  goto release;






 VAR_10 = (VAR_12 + VAR_1) * 2 + 1;


 VAR_10 = VAR_12 + VAR_1 - 1;
 VAR_14 = FUNC_4(VAR_6, VAR_10, &VAR_15);

 if (VAR_14)
  goto release;

 VAR_15 &= 0x00FFFFFF;
 VAR_14 = FUNC_5(VAR_6, VAR_10, VAR_15);

 if (VAR_14)
  goto release;


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8->shadow_ram[VAR_9].modified = VAR_4;
  VAR_8->shadow_ram[VAR_9].value = 0xFFFF;
 }

release:
 VAR_7->ops.release(VAR_6);




 if (!VAR_14) {
  VAR_7->ops.reload(VAR_6);
  FUNC_8(10);
 }

out:
 if (VAR_14)
  FUNC_2("NVM update error: %d\n", VAR_14);

 return VAR_14;
}
