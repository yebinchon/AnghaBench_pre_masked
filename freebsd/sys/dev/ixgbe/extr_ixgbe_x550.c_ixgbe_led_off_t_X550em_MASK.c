
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int ,int *) ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u32 VAR_6)
{
 u16 VAR_7;

 FUNC_0("ixgbe_led_off_t_X550em");

 if (VAR_6 >= VAR_4)
  return VAR_0;


 FUNC_2(VAR_5, VAR_3 + VAR_6,
      VAR_1, &VAR_7);
 VAR_7 &= ~VAR_2;
 FUNC_3(VAR_5, VAR_3 + VAR_6,
       VAR_1, VAR_7);


 return FUNC_1(VAR_5, VAR_6);
}
