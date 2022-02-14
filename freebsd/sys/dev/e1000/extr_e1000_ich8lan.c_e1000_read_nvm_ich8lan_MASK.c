
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; scalar_t__ flash_bank_size; TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ value; scalar_t__ modified; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct e1000_hw*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_2, u16 VAR_3, u16 VAR_4,
      u16 *VAR_5)
{
 struct e1000_nvm_info *VAR_6 = &VAR_2->nvm;
 struct e1000_dev_spec_ich8lan *VAR_7 = &VAR_2->dev_spec.ich8lan;
 u32 VAR_8;
 s32 VAR_9 = VAR_1;
 u32 VAR_10 = 0;
 u16 VAR_11, VAR_12;

 FUNC_0("e1000_read_nvm_ich8lan");

 if ((VAR_3 >= VAR_6->word_size) || (VAR_4 > VAR_6->word_size - VAR_3) ||
     (VAR_4 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_6->ops.acquire(VAR_2);

 VAR_9 = FUNC_4(VAR_2, &VAR_10);
 if (VAR_9 != VAR_1) {
  FUNC_1("Could not detect valid bank, assuming bank 0\n");
  VAR_10 = 0;
 }

 VAR_8 = (VAR_10) ? VAR_6->flash_bank_size : 0;
 VAR_8 += VAR_3;

 VAR_9 = VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_7->shadow_ram[VAR_3+VAR_11].modified) {
   VAR_5[VAR_11] = VAR_7->shadow_ram[VAR_3+VAR_11].value;
  } else {
   VAR_9 = FUNC_3(VAR_2,
        VAR_8 + VAR_11,
        &VAR_12);
   if (VAR_9)
    break;
   VAR_5[VAR_11] = VAR_12;
  }
 }

 VAR_6->ops.release(VAR_2);

out:
 if (VAR_9)
  FUNC_2("NVM read error: %d\n", VAR_9);

 return VAR_9;
}
