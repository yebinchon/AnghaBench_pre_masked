
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_3__ {int addr; TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_6, u32 VAR_7, u16 VAR_8)
{
 s32 VAR_9;
 u16 VAR_10 = (u16)(VAR_7 >> VAR_3);

 FUNC_0("e1000_write_phy_reg_bm2");

 VAR_9 = VAR_6->phy.ops.acquire(VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_10 == VAR_1) {
  VAR_9 = FUNC_1(VAR_6, VAR_7, &VAR_8,
        VAR_2, 0);
  goto release;
 }

 VAR_6->phy.addr = 1;

 if (VAR_7 > VAR_4) {

  VAR_9 = FUNC_2(VAR_6, VAR_0,
         VAR_10);

  if (VAR_9)
   goto release;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_5 & VAR_7,
        VAR_8);

release:
 VAR_6->phy.ops.release(VAR_6);
 return VAR_9;
}
