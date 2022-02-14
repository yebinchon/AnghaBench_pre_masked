
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* check_mng_mode ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*) ;

bool FUNC_1(struct e1000_hw *VAR_1)
{
 if (VAR_1->mac.ops.check_mng_mode)
  return VAR_1->mac.ops.check_mng_mode(VAR_1);

 return VAR_0;
}
