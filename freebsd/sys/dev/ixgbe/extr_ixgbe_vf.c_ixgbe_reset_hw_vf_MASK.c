
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* read_posted ) (struct ixgbe_hw*,int*,int,int ) ;int (* write_posted ) (struct ixgbe_hw*,int*,int,int ) ;int (* check_for_rst ) (struct ixgbe_hw*,int ) ;} ;
struct ixgbe_mbx_info {TYPE_2__ ops; int timeout; } ;
struct TYPE_4__ {int (* stop_adapter ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int mc_filter_type; int perm_addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; int api_version; struct ixgbe_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int*,int,int ) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int*,int,int ) ;
 int FUNC_11 (int) ;

s32 FUNC_12(struct ixgbe_hw *VAR_13)
{
 struct ixgbe_mbx_info *VAR_14 = &VAR_13->mbx;
 u32 VAR_15 = VAR_5;
 s32 VAR_16 = VAR_1;
 u32 VAR_17[VAR_8];
 u8 *VAR_18 = (u8 *)(&VAR_17[1]);

 FUNC_0("ixgbevf_reset_hw_vf");


 VAR_13->mac.ops.stop_adapter(VAR_13);


 VAR_13->api_version = VAR_12;

 FUNC_1("Issuing a function level reset to MAC\n");

 FUNC_2(VAR_13, VAR_4, VAR_0);
 FUNC_3(VAR_13);

 FUNC_6(50);


 while (!VAR_14->ops.check_for_rst(VAR_13, 0) && VAR_15) {
  VAR_15--;
  FUNC_11(5);
 }

 if (!VAR_15)
  return VAR_2;


 FUNC_4(VAR_13);


 VAR_14->timeout = VAR_6;

 VAR_17[0] = VAR_9;
 VAR_14->ops.write_posted(VAR_13, VAR_17, 1, 0);

 FUNC_6(10);






 VAR_16 = VAR_14->ops.read_posted(VAR_13, VAR_17,
   VAR_8, 0);
 if (VAR_16)
  return VAR_16;

 if (VAR_17[0] != (VAR_9 | VAR_10) &&
     VAR_17[0] != (VAR_9 | VAR_11))
  return VAR_1;

 if (VAR_17[0] == (VAR_9 | VAR_10))
  FUNC_5(VAR_13->mac.perm_addr, VAR_18, VAR_3);

 VAR_13->mac.mc_filter_type = VAR_17[VAR_7];

 return VAR_16;
}
