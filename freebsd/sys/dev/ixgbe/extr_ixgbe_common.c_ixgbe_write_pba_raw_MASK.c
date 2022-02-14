
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_pba {scalar_t__* word; int* pba_block; } ;
struct TYPE_3__ {scalar_t__ (* write_buffer ) (struct ixgbe_hw*,scalar_t__,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,int*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,size_t,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,int,int*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_5, u16 *VAR_6,
   u32 VAR_7, struct ixgbe_pba *VAR_8)
{
 s32 VAR_9;

 if (VAR_8 == ((void*)0))
  return VAR_0;

 if (VAR_6 == ((void*)0)) {
  VAR_9 = VAR_5->eeprom.ops.write_buffer(VAR_5, VAR_1, 2,
            &VAR_8->word[0]);
  if (VAR_9)
   return VAR_9;
 } else {
  if (VAR_7 > VAR_2) {
   VAR_6[VAR_1] = VAR_8->word[0];
   VAR_6[VAR_2] = VAR_8->word[1];
  } else {
   return VAR_0;
  }
 }

 if (VAR_8->word[0] == VAR_3) {
  if (VAR_8->pba_block == ((void*)0))
   return VAR_0;

  if (VAR_6 == ((void*)0)) {
   VAR_9 = VAR_5->eeprom.ops.write_buffer(VAR_5, VAR_8->word[1],
             VAR_8->pba_block[0],
             VAR_8->pba_block);
   if (VAR_9)
    return VAR_9;
  } else {
   if (VAR_7 > (u32)(VAR_8->word[1] +
           VAR_8->pba_block[0])) {
    FUNC_0(&VAR_6[VAR_8->word[1]],
           VAR_8->pba_block,
           VAR_8->pba_block[0] * sizeof(u16));
   } else {
    return VAR_0;
   }
  }
 }

 return VAR_4;
}
