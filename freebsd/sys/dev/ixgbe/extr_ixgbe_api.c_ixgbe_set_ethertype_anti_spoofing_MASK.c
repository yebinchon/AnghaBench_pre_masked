
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* set_ethertype_anti_spoofing ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*,int,int) ;

void FUNC_1(struct ixgbe_hw *VAR_0, bool VAR_1, int VAR_2)
{
 if (VAR_0->mac.ops.set_ethertype_anti_spoofing)
  VAR_0->mac.ops.set_ethertype_anti_spoofing(VAR_0, VAR_1, VAR_2);
}
