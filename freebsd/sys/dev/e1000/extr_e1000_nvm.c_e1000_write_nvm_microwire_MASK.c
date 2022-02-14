
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; scalar_t__ opcode_bits; int address_bits; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct e1000_hw *VAR_6, u16 VAR_7, u16 VAR_8,
         u16 *VAR_9)
{
 struct e1000_nvm_info *VAR_10 = &VAR_6->nvm;
 s32 VAR_11;
 u32 VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;

 FUNC_0("e1000_write_nvm_microwire");




 if ((VAR_7 >= VAR_10->word_size) || (VAR_8 > (VAR_10->word_size - VAR_7)) ||
     (VAR_8 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  return -VAR_2;
 }

 VAR_11 = VAR_10->ops.acquire(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11)
  goto release;

 FUNC_4(VAR_6, VAR_4,
     (u16)(VAR_10->opcode_bits + 2));

 FUNC_4(VAR_6, 0, (u16)(VAR_10->address_bits - 2));

 FUNC_5(VAR_6);

 while (VAR_13 < VAR_8) {
  FUNC_4(VAR_6, VAR_5,
      VAR_10->opcode_bits);

  FUNC_4(VAR_6, (u16)(VAR_7 + VAR_13),
      VAR_10->address_bits);

  FUNC_4(VAR_6, VAR_9[VAR_13], 16);

  FUNC_5(VAR_6);

  for (VAR_14 = 0; VAR_14 < 200; VAR_14++) {
   VAR_12 = FUNC_2(VAR_6, VAR_0);
   if (VAR_12 & VAR_1)
    break;
   FUNC_8(50);
  }

  if (VAR_14 == 200) {
   FUNC_1("NVM Write did not complete\n");
   VAR_11 = -VAR_2;
   goto release;
  }

  FUNC_5(VAR_6);

  VAR_13++;
 }

 FUNC_4(VAR_6, VAR_3,
     (u16)(VAR_10->opcode_bits + 2));

 FUNC_4(VAR_6, 0, (u16)(VAR_10->address_bits - 2));

release:
 VAR_10->ops.release(VAR_6);

 return VAR_11;
}
