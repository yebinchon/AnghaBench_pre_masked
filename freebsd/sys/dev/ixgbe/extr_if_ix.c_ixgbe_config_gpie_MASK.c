
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct adapter {scalar_t__ intr_type; int feat_en; struct ixgbe_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;




__attribute__((used)) static void
FUNC_2(struct adapter *VAR_11)
{
 struct ixgbe_hw *VAR_12 = &VAR_11->hw;
 u32 VAR_13;

 VAR_13 = FUNC_0(VAR_12, VAR_3);

 if (VAR_11->intr_type == VAR_0) {

  VAR_13 |= VAR_5
       | VAR_4
       | VAR_7
       | VAR_6;
 }


 if (VAR_11->feat_en & VAR_1)
  VAR_13 |= VAR_9;


 if (VAR_11->feat_en & VAR_2)
  VAR_13 |= VAR_8;


 switch (VAR_12->mac.type) {
 case 130:
  VAR_13 |= VAR_9 | VAR_10;
  break;
 case 128:
 case 129:
  VAR_13 |= VAR_8;
  break;
 default:
  break;
 }

 FUNC_1(VAR_12, VAR_3, VAR_13);

}
