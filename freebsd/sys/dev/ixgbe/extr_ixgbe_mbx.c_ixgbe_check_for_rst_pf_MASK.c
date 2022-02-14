
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int rsts; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct TYPE_6__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mbx; TYPE_3__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;






__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4 = (VAR_3 < 32) ? 0 : 1;
 u32 VAR_5 = VAR_3 % 32;
 u32 VAR_6 = 0;
 s32 VAR_7 = VAR_0;

 FUNC_0("ixgbe_check_for_rst_pf");

 switch (VAR_2->mac.type) {
 case 132:
  VAR_6 = FUNC_1(VAR_2, FUNC_2(VAR_4));
  break;
 case 130:
 case 128:
 case 129:
 case 131:
  VAR_6 = FUNC_1(VAR_2, FUNC_3(VAR_4));
  break;
 default:
  break;
 }

 if (VAR_6 & (1 << VAR_5)) {
  VAR_7 = VAR_1;
  FUNC_4(VAR_2, FUNC_3(VAR_4), (1 << VAR_5));
  VAR_2->mbx.stats.rsts++;
 }

 return VAR_7;
}
