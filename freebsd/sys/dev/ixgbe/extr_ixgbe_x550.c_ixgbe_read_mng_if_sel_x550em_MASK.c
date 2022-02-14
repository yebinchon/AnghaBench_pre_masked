
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nw_mng_if_sel; int addr; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_6)
{



 VAR_6->phy.nw_mng_if_sel = FUNC_0(VAR_6, VAR_0);




 if (VAR_6->mac.type == VAR_5 &&
     VAR_6->phy.nw_mng_if_sel & VAR_1) {
  VAR_6->phy.addr = (VAR_6->phy.nw_mng_if_sel &
    VAR_2) >>
          VAR_3;
 }

 return VAR_4;
}
