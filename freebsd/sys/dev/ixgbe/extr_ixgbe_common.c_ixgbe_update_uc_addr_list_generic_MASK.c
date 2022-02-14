
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ overflow_promisc; scalar_t__ rar_used_count; int user_set_promisc; } ;
struct ixgbe_hw {TYPE_1__ addr_ctrl; } ;
typedef int s32 ;
typedef int * (* ixgbe_mc_addr_itr ) (struct ixgbe_hw*,int **,scalar_t__*) ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_7 (struct ixgbe_hw*,int *,scalar_t__) ;

s32 FUNC_8(struct ixgbe_hw *VAR_3, u8 *VAR_4,
          u32 VAR_5, ixgbe_mc_addr_itr VAR_6)
{
 u8 *VAR_7;
 u32 VAR_8;
 u32 VAR_9 = VAR_3->addr_ctrl.overflow_promisc;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_0("ixgbe_update_uc_addr_list_generic");





 VAR_10 = VAR_3->addr_ctrl.rar_used_count - 1;
 VAR_3->addr_ctrl.rar_used_count -= VAR_10;
 VAR_3->addr_ctrl.overflow_promisc = 0;


 FUNC_2("Clearing RAR[1-%d]\n", VAR_10+1);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  FUNC_6(VAR_3, FUNC_4(1+VAR_8), 0);
  FUNC_6(VAR_3, FUNC_3(1+VAR_8), 0);
 }


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_1(" Adding the secondary addresses:\n");
  VAR_7 = VAR_6(VAR_3, &VAR_4, &VAR_12);
  FUNC_7(VAR_3, VAR_7, VAR_12);
 }

 if (VAR_3->addr_ctrl.overflow_promisc) {

  if (!VAR_9 && !VAR_3->addr_ctrl.user_set_promisc) {
   FUNC_1(" Entering address overflow promisc mode\n");
   VAR_11 = FUNC_5(VAR_3, VAR_0);
   VAR_11 |= VAR_1;
   FUNC_6(VAR_3, VAR_0, VAR_11);
  }
 } else {

  if (VAR_9 && !VAR_3->addr_ctrl.user_set_promisc) {
   FUNC_1(" Leaving address overflow promisc mode\n");
   VAR_11 = FUNC_5(VAR_3, VAR_0);
   VAR_11 &= ~VAR_1;
   FUNC_6(VAR_3, VAR_0, VAR_11);
  }
 }

 FUNC_1("ixgbe_update_uc_addr_list_generic Complete\n");
 return VAR_2;
}
