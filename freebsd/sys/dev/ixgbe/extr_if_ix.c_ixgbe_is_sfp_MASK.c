
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int const (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int const FUNC_0 (struct ixgbe_hw*) ;
 int const FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static inline bool
FUNC_2(struct ixgbe_hw *VAR_3)
{
 switch (VAR_3->mac.type) {
 case 133:
  if (VAR_3->phy.type == VAR_2)
   return (VAR_1);
  return (VAR_0);
 case 132:
  switch (VAR_3->mac.ops.get_media_type(VAR_3)) {
  case 129:
  case 128:
   return (VAR_1);
  default:
   return (VAR_0);
  }
 case 130:
 case 131:
  if (VAR_3->mac.ops.get_media_type(VAR_3) == 129)
   return (VAR_1);
  return (VAR_0);
 default:
  return (VAR_0);
 }
}
