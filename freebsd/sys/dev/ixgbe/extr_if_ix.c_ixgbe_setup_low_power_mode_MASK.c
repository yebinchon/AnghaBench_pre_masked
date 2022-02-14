
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enter_lplu ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int reset_disable; TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ phy; int wol_enabled; } ;
struct adapter {int wufc; struct ixgbe_hw hw; } ;
typedef int s32 ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (struct ixgbe_hw*) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_9)
{
 struct adapter *VAR_10 = FUNC_4(VAR_9);
 struct ixgbe_hw *VAR_11 = &VAR_10->hw;
 device_t VAR_12 = FUNC_3(VAR_9);
 s32 VAR_13 = 0;

 if (!VAR_11->wol_enabled)
  FUNC_6(VAR_11, VAR_0);


 if (VAR_11->device_id == VAR_1 &&
     VAR_11->phy.ops.enter_lplu) {

  FUNC_1(VAR_11, VAR_2,
      FUNC_0(VAR_11, VAR_2) & ~(u32)2);





  FUNC_1(VAR_11, VAR_7, 0xffffffff);





  FUNC_1(VAR_11, VAR_6, VAR_10->wufc);


  FUNC_1(VAR_11, VAR_3,
      VAR_5 | VAR_4);


  VAR_11->phy.reset_disable = VAR_8;
  FUNC_5(VAR_9);
  VAR_13 = VAR_11->phy.ops.enter_lplu(VAR_11);
  if (VAR_13)
   FUNC_2(VAR_12, "Error entering LPLU: %d\n", VAR_13);
  VAR_11->phy.reset_disable = VAR_0;
 } else {

  FUNC_5(VAR_9);
 }

 return VAR_13;
}
