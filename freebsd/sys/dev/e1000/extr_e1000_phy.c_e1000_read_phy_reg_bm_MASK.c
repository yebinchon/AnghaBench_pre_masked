
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
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
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int *,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

s32 FUNC_7(struct e1000_hw *VAR_8, u32 VAR_9, u16 *VAR_10)
{
 s32 VAR_11;
 u32 VAR_12 = VAR_9 >> VAR_4;

 FUNC_0("e1000_read_phy_reg_bm");

 VAR_11 = VAR_8->phy.ops.acquire(VAR_8);
 if (VAR_11)
  return VAR_11;


 if (VAR_12 == VAR_1) {
  VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10,
        VAR_7, VAR_2);
  goto release;
 }

 VAR_8->phy.addr = FUNC_2(VAR_12, VAR_9);

 if (VAR_9 > VAR_5) {
  u32 VAR_13, VAR_14;





  if (VAR_8->phy.addr == 1) {
   VAR_13 = VAR_4;
   VAR_14 = VAR_3;
  } else {
   VAR_13 = 0;
   VAR_14 = VAR_0;
  }


  VAR_11 = FUNC_4(VAR_8, VAR_14,
         (VAR_12 << VAR_13));
  if (VAR_11)
   goto release;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_6 & VAR_9,
       VAR_10);
release:
 VAR_8->phy.ops.release(VAR_8);
 return VAR_11;
}
