
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* high_water; int send_xon; int pause_time; void** low_water; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_2__ fc; TYPE_1__ mac; } ;
struct adapter {int max_frame_size; struct ixgbe_hw hw; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;





__attribute__((used)) static void
FUNC_7(struct adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_2->max_frame_size;


 switch (VAR_3->mac.type) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_7 = FUNC_2(VAR_5, VAR_5);
  break;
 default:
  VAR_7 = FUNC_1(VAR_5, VAR_5);
  break;
 }
 VAR_6 = FUNC_0(VAR_7);
 VAR_4 = FUNC_5(VAR_3, FUNC_6(0)) >> 10;
 VAR_3->fc.high_water[0] = VAR_4 - VAR_6;


 switch (VAR_3->mac.type) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_7 = FUNC_4(VAR_5);
  break;
 default:
  VAR_7 = FUNC_3(VAR_5);
  break;
 }
 VAR_3->fc.low_water[0] = FUNC_0(VAR_7);

 VAR_3->fc.pause_time = VAR_0;
 VAR_3->fc.send_xon = VAR_1;
}
