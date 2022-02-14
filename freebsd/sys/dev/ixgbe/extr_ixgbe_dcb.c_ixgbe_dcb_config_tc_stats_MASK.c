
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int *) ;







s32 FUNC_2(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2 = VAR_0;
 switch (VAR_1->mac.type) {
 case 133:
  VAR_2 = FUNC_0(VAR_1);
  break;
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:

  VAR_2 = FUNC_1(VAR_1, ((void*)0));
  break;

 default:
  break;
 }
 return VAR_2;
}
