
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int max_link_up_time; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;






 int FUNC_7 (struct ixgbe_hw*) ;

s32 FUNC_8(struct ixgbe_hw *VAR_2)
{
 s32 VAR_3;

 FUNC_0("ixgbe_init_shared_code");




 FUNC_7(VAR_2);

 switch (VAR_2->mac.type) {
 case 133:
  VAR_3 = FUNC_1(VAR_2);
  break;
 case 132:
  VAR_3 = FUNC_2(VAR_2);
  break;
 case 131:
  VAR_3 = FUNC_3(VAR_2);
  break;
 case 130:
  VAR_3 = FUNC_4(VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_6(VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_5(VAR_2);
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }
 VAR_2->mac.max_link_up_time = VAR_1;

 return VAR_3;
}
