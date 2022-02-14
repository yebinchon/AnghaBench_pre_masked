
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ sfp_type; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct ixgbe_hw *VAR_5, u8 VAR_6, u8 VAR_7)
{
 if (VAR_7 == VAR_1 &&
     VAR_6 == VAR_2 &&
     VAR_5->phy.sfp_type == VAR_4)
  return VAR_3;
 return VAR_0;
}
