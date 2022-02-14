
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* handle_lasi ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct adapter {int dev; struct ixgbe_hw hw; } ;
typedef void* if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct adapter* FUNC_1 (void*) ;
 int FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 if_ctx_t VAR_2 = VAR_1;
 struct adapter *VAR_3 = FUNC_1(VAR_2);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;

 VAR_5 = VAR_4->phy.ops.handle_lasi(VAR_4);
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_3->dev, "CRITICAL: EXTERNAL PHY OVER TEMP!!  PHY will downshift to lower power state!\n");
 else if (VAR_5)
  FUNC_0(VAR_3->dev,
      "Error handling LASI interrupt: %d\n", VAR_5);
}
