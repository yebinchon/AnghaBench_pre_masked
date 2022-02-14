
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
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

s32 FUNC_4(struct e1000_hw *VAR_3, u16 VAR_4, u16 VAR_5,
         u16 *VAR_6)
{
 s32 VAR_7 = VAR_2;
 u16 VAR_8, VAR_9;

 FUNC_0("e1000_write_nvm_srwr_i210");




 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_0) {
  VAR_9 = (VAR_5 - VAR_8) / VAR_0 > 0 ?
   VAR_0 : (VAR_5 - VAR_8);
  if (VAR_3->nvm.ops.acquire(VAR_3) == VAR_2) {
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_9,
            VAR_6 + VAR_8);
   VAR_3->nvm.ops.release(VAR_3);
  } else {
   VAR_7 = VAR_1;
  }

  if (VAR_7 != VAR_2)
   break;
 }

 return VAR_7;
}
