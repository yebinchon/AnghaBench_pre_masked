
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;

s32 FUNC_6(struct ixgbe_hw *VAR_5, u32 VAR_6, bool VAR_7)
{
 s32 VAR_8 = VAR_3;


 if (FUNC_1(VAR_5))
  goto out;





 if (!VAR_7 && FUNC_3(VAR_5)) {
  VAR_8 = VAR_5->mac.ops.acquire_swfw_sync(VAR_5,
     VAR_2);
  if (VAR_8 != VAR_3)
   return VAR_1;

  VAR_7 = VAR_4;
 }

 FUNC_0(VAR_5, VAR_0, VAR_6);
 VAR_8 = FUNC_2(VAR_5);

out:



 if (VAR_7)
  VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_2);

 return VAR_8;
}
