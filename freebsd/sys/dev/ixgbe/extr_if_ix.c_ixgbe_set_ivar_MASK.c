
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;







__attribute__((used)) static void
FUNC_3(struct adapter *VAR_3, u8 VAR_4, u8 VAR_5, s8 VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_3->hw;
 u32 VAR_8, VAR_9;

 VAR_5 |= VAR_0;

 switch (VAR_7->mac.type) {
 case 133:
  if (VAR_6 == -1)
   VAR_4 = VAR_2;
  else
   VAR_4 += (VAR_6 * 64);
  VAR_9 = (VAR_4 >> 2) & 0x1F;
  VAR_8 = FUNC_1(VAR_7, FUNC_0(VAR_9));
  VAR_8 &= ~(0xFF << (8 * (VAR_4 & 0x3)));
  VAR_8 |= (VAR_5 << (8 * (VAR_4 & 0x3)));
  FUNC_2(&VAR_3->hw, FUNC_0(VAR_9), VAR_8);
  break;
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:
  if (VAR_6 == -1) {
   VAR_9 = (VAR_4 & 1) * 8;
   VAR_8 = FUNC_1(VAR_7, VAR_1);
   VAR_8 &= ~(0xFF << VAR_9);
   VAR_8 |= (VAR_5 << VAR_9);
   FUNC_2(VAR_7, VAR_1, VAR_8);
  } else {
   VAR_9 = (16 * (VAR_4 & 1)) + (8 * VAR_6);
   VAR_8 = FUNC_1(VAR_7, FUNC_0(VAR_4 >> 1));
   VAR_8 &= ~(0xFF << VAR_9);
   VAR_8 |= (VAR_5 << VAR_9);
   FUNC_2(VAR_7, FUNC_0(VAR_4 >> 1), VAR_8);
  }
 default:
  break;
 }
}
