
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,scalar_t__*,int ,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_7, u32 VAR_8, u16 VAR_9)
{
 s32 VAR_10;
 u32 VAR_11 = VAR_8 >> VAR_4;

 FUNC_0("e1000_write_phy_reg_bm");

 VAR_10 = VAR_7->phy.ops.acquire(VAR_7);
 if (VAR_10)
  return VAR_10;


 if (VAR_11 == VAR_1) {
  VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_9,
        VAR_2, 0);
  goto release;
 }

 VAR_7->phy.addr = FUNC_2(VAR_11, VAR_8);

 if (VAR_8 > VAR_5) {
  u32 VAR_12, VAR_13;





  if (VAR_7->phy.addr == 1) {
   VAR_12 = VAR_4;
   VAR_13 = VAR_3;
  } else {
   VAR_12 = 0;
   VAR_13 = VAR_0;
  }


  VAR_10 = FUNC_3(VAR_7, VAR_13,
         (VAR_11 << VAR_12));
  if (VAR_10)
   goto release;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_6 & VAR_8,
        VAR_9);

release:
 VAR_7->phy.ops.release(VAR_7);
 return VAR_10;
}
