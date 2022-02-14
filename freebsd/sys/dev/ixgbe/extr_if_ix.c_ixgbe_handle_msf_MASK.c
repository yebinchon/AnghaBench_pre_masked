
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* setup_link ) (struct ixgbe_hw*,int ,int ) ;int (* get_link_capabilities ) (struct ixgbe_hw*,int *,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct adapter {int media; int ctx; int phy_layer; struct ixgbe_hw hw; } ;
typedef void* if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adapter* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int *,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 if_ctx_t VAR_4 = VAR_3;
 struct adapter *VAR_5 = FUNC_0(VAR_4);
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;
 bool VAR_8;


 VAR_5->phy_layer = FUNC_4(VAR_6);

 VAR_7 = VAR_6->phy.autoneg_advertised;
 if ((!VAR_7) && (VAR_6->mac.ops.get_link_capabilities))
  VAR_6->mac.ops.get_link_capabilities(VAR_6, &VAR_7, &VAR_8);
 if (VAR_6->mac.ops.setup_link)
  VAR_6->mac.ops.setup_link(VAR_6, VAR_7, VAR_2);


 FUNC_1(VAR_5->media);
 FUNC_3(VAR_5->ctx);
 FUNC_2(VAR_5->media, VAR_1 | VAR_0);
}
