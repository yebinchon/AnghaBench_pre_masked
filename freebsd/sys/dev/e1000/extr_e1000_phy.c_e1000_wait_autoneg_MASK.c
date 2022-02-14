
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_4)
{
 s32 VAR_5 = VAR_0;
 u16 VAR_6, VAR_7;

 FUNC_0("e1000_wait_autoneg");

 if (!VAR_4->phy.ops.read_reg)
  return VAR_0;


 for (VAR_6 = VAR_2; VAR_6 > 0; VAR_6--) {
  VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_3, &VAR_7);
  if (VAR_5)
   break;
  VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_3, &VAR_7);
  if (VAR_5)
   break;
  if (VAR_7 & VAR_1)
   break;
  FUNC_1(100);
 }




 return VAR_5;
}
