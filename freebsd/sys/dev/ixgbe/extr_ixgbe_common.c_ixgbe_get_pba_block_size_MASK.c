
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,size_t*) ;scalar_t__ (* read_buffer ) (struct ixgbe_hw*,size_t,int,size_t*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,size_t,int,size_t*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,size_t*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_6, u16 *VAR_7,
        u32 VAR_8, u16 *VAR_9)
{
 s32 VAR_10;
 u16 VAR_11[2];
 u16 VAR_12;

 FUNC_0("ixgbe_get_pba_block_size");

 if (VAR_7 == ((void*)0)) {
  VAR_10 = VAR_6->eeprom.ops.read_buffer(VAR_6, VAR_2, 2,
           &VAR_11[0]);
  if (VAR_10)
   return VAR_10;
 } else {
  if (VAR_8 > VAR_3) {
   VAR_11[0] = VAR_7[VAR_2];
   VAR_11[1] = VAR_7[VAR_3];
  } else {
   return VAR_0;
  }
 }

 if (VAR_11[0] == VAR_4) {
  if (VAR_7 == ((void*)0)) {
   VAR_10 = VAR_6->eeprom.ops.read(VAR_6, VAR_11[1] + 0,
            &VAR_12);
   if (VAR_10)
    return VAR_10;
  } else {
   if (VAR_8 > VAR_11[1])
    VAR_12 = VAR_7[VAR_11[1] + 0];
   else
    return VAR_0;
  }

  if (VAR_12 == 0xFFFF || VAR_12 == 0)
   return VAR_1;
 } else {

  VAR_12 = 0;
 }

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_12;

 return VAR_5;
}
