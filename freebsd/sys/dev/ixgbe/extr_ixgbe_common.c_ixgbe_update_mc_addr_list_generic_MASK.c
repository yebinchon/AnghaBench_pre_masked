
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t mcft_size; int mc_filter_type; int * mta_shadow; } ;
struct TYPE_3__ {size_t num_mc_addrs; scalar_t__ mta_in_use; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_1__ addr_ctrl; } ;
typedef int s32 ;
typedef int (* ixgbe_mc_addr_itr ) (struct ixgbe_hw*,int **,size_t*) ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,size_t,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (int **,int ,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_3, u8 *VAR_4,
          u32 VAR_5, ixgbe_mc_addr_itr VAR_6,
          bool VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0("ixgbe_update_mc_addr_list_generic");





 VAR_3->addr_ctrl.num_mc_addrs = VAR_5;
 VAR_3->addr_ctrl.mta_in_use = 0;


 if (VAR_7) {
  FUNC_1(" Clearing MTA\n");
  FUNC_6(&VAR_3->mac.mta_shadow, 0, sizeof(VAR_3->mac.mta_shadow));
 }


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_1(" Adding the multicast addresses:\n");
  FUNC_5(VAR_3, VAR_6(VAR_3, &VAR_4, &VAR_9));
 }


 for (VAR_8 = 0; VAR_8 < VAR_3->mac.mcft_size; VAR_8++)
  FUNC_4(VAR_3, FUNC_2(0), VAR_8,
          VAR_3->mac.mta_shadow[VAR_8]);

 if (VAR_3->addr_ctrl.mta_in_use > 0)
  FUNC_3(VAR_3, VAR_0,
    VAR_1 | VAR_3->mac.mc_filter_type);

 FUNC_1("ixgbe_update_mc_addr_list_generic Complete\n");
 return VAR_2;
}
