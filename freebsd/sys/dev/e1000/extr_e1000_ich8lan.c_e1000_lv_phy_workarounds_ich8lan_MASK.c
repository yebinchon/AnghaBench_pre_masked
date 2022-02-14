
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 s32 VAR_5 = VAR_0;

 FUNC_0("e1000_lv_phy_workarounds_ich8lan");

 if (VAR_4->mac.type != VAR_3)
  return VAR_0;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_4->phy.ops.acquire(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2, 0x0034);
 if (VAR_5)
  goto release;

 VAR_5 = FUNC_2(VAR_4, VAR_1, 0x0005);
release:
 VAR_4->phy.ops.release(VAR_4);

 return VAR_5;
}
