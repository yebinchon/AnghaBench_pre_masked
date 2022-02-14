
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_12, u32 VAR_13,
    u32 VAR_14, u16 VAR_15)
{
 u32 VAR_16, VAR_17;


 FUNC_2(VAR_12, VAR_10, (u32)VAR_15);


 VAR_17 = ((VAR_13 << VAR_7) |
     (VAR_14 << VAR_5) |
     (VAR_12->phy.addr << VAR_8) |
     (VAR_4 | VAR_6));

 FUNC_2(VAR_12, VAR_3, VAR_17);






 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  FUNC_3(10);

  VAR_17 = FUNC_1(VAR_12, VAR_3);
  if ((VAR_17 & VAR_6) == 0)
   break;
 }

 if ((VAR_17 & VAR_6) != 0) {
  FUNC_0(VAR_0, "PHY address cmd didn't complete\n");
  return VAR_1;
 }





 VAR_17 = ((VAR_13 << VAR_7) |
     (VAR_14 << VAR_5) |
     (VAR_12->phy.addr << VAR_8) |
     (VAR_9 | VAR_6));

 FUNC_2(VAR_12, VAR_3, VAR_17);






 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  FUNC_3(10);

  VAR_17 = FUNC_1(VAR_12, VAR_3);
  if ((VAR_17 & VAR_6) == 0)
   break;
 }

 if ((VAR_17 & VAR_6) != 0) {
  FUNC_0(VAR_0, "PHY write cmd didn't complete\n");
  return VAR_1;
 }

 return VAR_11;
}
