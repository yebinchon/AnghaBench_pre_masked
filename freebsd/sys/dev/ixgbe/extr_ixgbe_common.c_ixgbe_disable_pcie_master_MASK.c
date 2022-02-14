
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; int flags; } ;
struct ixgbe_hw {int hw_addr; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct ixgbe_hw *VAR_12)
{
 s32 VAR_13 = VAR_10;
 u32 VAR_14, VAR_15;
 u16 VAR_16;

 FUNC_0("ixgbe_disable_pcie_master");


 FUNC_6(VAR_12, VAR_0, VAR_1);


 if (!(FUNC_4(VAR_12, VAR_8) & VAR_9) ||
     FUNC_5(VAR_12->hw_addr))
  goto out;


 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  FUNC_8(100);
  if (!(FUNC_4(VAR_12, VAR_8) & VAR_9))
   goto out;
 }
 FUNC_1("GIO Master Disable bit didn't clear - requesting resets\n");
 VAR_12->mac.flags |= VAR_4;

 if (VAR_12->mac.type >= VAR_11)
  goto out;





 VAR_15 = FUNC_7(VAR_12);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  FUNC_8(100);
  VAR_16 = FUNC_3(VAR_12, VAR_5);
  if (FUNC_5(VAR_12->hw_addr))
   goto out;
  if (!(VAR_16 & VAR_6))
   goto out;
 }

 FUNC_2(VAR_2,
       "PCIe transaction pending bit also did not clear.\n");
 VAR_13 = VAR_3;

out:
 return VAR_13;
}
