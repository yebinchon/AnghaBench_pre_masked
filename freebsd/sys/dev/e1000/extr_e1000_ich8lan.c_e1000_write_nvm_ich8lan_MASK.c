
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ value; int modified; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3, u16 VAR_4, u16 VAR_5,
       u16 *VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_3->nvm;
 struct e1000_dev_spec_ich8lan *VAR_8 = &VAR_3->dev_spec.ich8lan;
 u16 VAR_9;

 FUNC_0("e1000_write_nvm_ich8lan");

 if ((VAR_4 >= VAR_7->word_size) || (VAR_5 > VAR_7->word_size - VAR_4) ||
     (VAR_5 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  return -VAR_0;
 }

 VAR_7->ops.acquire(VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8->shadow_ram[VAR_4+VAR_9].modified = VAR_2;
  VAR_8->shadow_ram[VAR_4+VAR_9].value = VAR_6[VAR_9];
 }

 VAR_7->ops.release(VAR_3);

 return VAR_1;
}
