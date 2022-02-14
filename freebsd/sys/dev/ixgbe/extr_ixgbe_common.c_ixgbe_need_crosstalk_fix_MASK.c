
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; int need_crosstalk_fix; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_hw *VAR_2)
{


 if (!VAR_2->need_crosstalk_fix)
  return VAR_0;


 switch (VAR_2->mac.ops.get_media_type(VAR_2)) {
 case 129:
 case 128:
  break;
 default:
  return VAR_0;
 }

 return VAR_1;
}
