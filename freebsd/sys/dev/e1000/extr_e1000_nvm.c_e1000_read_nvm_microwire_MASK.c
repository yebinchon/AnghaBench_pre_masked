
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; TYPE_1__ ops; int address_bits; int opcode_bits; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__,int ) ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_2, u16 VAR_3, u16 VAR_4,
        u16 *VAR_5)
{
 struct e1000_nvm_info *VAR_6 = &VAR_2->nvm;
 u32 VAR_7 = 0;
 s32 VAR_8;
 u8 VAR_9 = VAR_1;

 FUNC_0("e1000_read_nvm_microwire");




 if ((VAR_3 >= VAR_6->word_size) || (VAR_4 > (VAR_6->word_size - VAR_3)) ||
     (VAR_4 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  return -VAR_0;
 }

 VAR_8 = VAR_6->ops.acquire(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8)
  goto release;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {

  FUNC_4(VAR_2, VAR_9, VAR_6->opcode_bits);
  FUNC_4(VAR_2, (u16)(VAR_3 + VAR_7),
     VAR_6->address_bits);




  VAR_5[VAR_7] = FUNC_3(VAR_2, 16);
  FUNC_5(VAR_2);
 }

release:
 VAR_6->ops.release(VAR_2);

 return VAR_8;
}
