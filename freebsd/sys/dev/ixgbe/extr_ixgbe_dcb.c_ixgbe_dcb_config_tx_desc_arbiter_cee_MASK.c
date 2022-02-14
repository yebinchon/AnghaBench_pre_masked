
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_dcb_config {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int *,int *,int *,int *) ;
 int FUNC_1 (struct ixgbe_hw*,int *,int *,int *,int *) ;
 int FUNC_2 (struct ixgbe_dcb_config*,int ,int *) ;
 int FUNC_3 (struct ixgbe_dcb_config*,int *) ;
 int FUNC_4 (struct ixgbe_dcb_config*,int ,int *) ;
 int FUNC_5 (struct ixgbe_dcb_config*,int ,int *) ;







s32 FUNC_6(struct ixgbe_hw *VAR_3,
         struct ixgbe_dcb_config *VAR_4)
{
 s32 VAR_5 = VAR_2;
 u8 VAR_6[VAR_0];
 u8 VAR_7[VAR_0];
 u16 VAR_8[VAR_0];
 u16 VAR_9[VAR_0];

 FUNC_4(VAR_4, VAR_1, VAR_8);
 FUNC_3(VAR_4, VAR_9);
 FUNC_2(VAR_4, VAR_1, VAR_7);
 FUNC_5(VAR_4, VAR_1, VAR_6);

 switch (VAR_3->mac.type) {
 case 133:
  VAR_5 = FUNC_0(VAR_3, VAR_8, VAR_9,
            VAR_7, VAR_6);
  break;
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:

  VAR_5 = FUNC_1(VAR_3, VAR_8, VAR_9,
            VAR_7, VAR_6);
  break;

 default:
  break;
 }
 return VAR_5;
}
