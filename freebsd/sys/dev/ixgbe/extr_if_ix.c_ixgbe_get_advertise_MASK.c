
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; int multispeed_fiber; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*,int*) ;

__attribute__((used)) static int
FUNC_1(struct adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 int VAR_9;
 ixgbe_link_speed VAR_10 = 0;
 s32 VAR_11;
 bool VAR_12 = VAR_0;





 if (!(VAR_8->phy.media_type == VAR_6) &&
     !(VAR_8->phy.multispeed_fiber))
  return (0);

 VAR_11 = VAR_8->mac.ops.get_link_capabilities(VAR_8, &VAR_10, &VAR_12);
 if (VAR_11 != VAR_5)
  return (0);

 VAR_9 =
     ((VAR_10 & VAR_2) ? 4 : 0) |
     ((VAR_10 & VAR_4) ? 2 : 0) |
     ((VAR_10 & VAR_1) ? 1 : 0) |
     ((VAR_10 & VAR_3) ? 8 : 0);

 return VAR_9;
}
