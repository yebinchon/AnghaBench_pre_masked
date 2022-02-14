
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int *,int *,int *) ;
 int FUNC_1 (struct ixgbe_hw*,int *,int *,int *,int *,int *) ;
 int FUNC_2 (struct ixgbe_hw*,int *,int *,int *,int *) ;
 int FUNC_3 (struct ixgbe_hw*,int *,int *,int *,int *,int *) ;
 int FUNC_4 (struct ixgbe_hw*,int *,int *,int *,int *) ;
 int FUNC_5 (struct ixgbe_hw*,int *,int *,int *,int *) ;







s32 FUNC_6(struct ixgbe_hw *VAR_0, u16 *VAR_1, u16 *VAR_2,
       u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 switch (VAR_0->mac.type) {
 case 133:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3,
             VAR_4);
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
             VAR_4);
  break;
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:

  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5);
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
             VAR_4);
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
             VAR_4, VAR_5);
  break;

 default:
  break;
 }
 return 0;
}
