
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


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_13, u32 VAR_14, u32 VAR_15,
      u16 *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19;


 VAR_19 = ((VAR_14 << VAR_7) |
     (VAR_15 << VAR_5) |
     (VAR_13->phy.addr << VAR_8) |
     (VAR_4 | VAR_6));

 FUNC_3(VAR_13, VAR_3, VAR_19);






 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  FUNC_4(10);

  VAR_19 = FUNC_2(VAR_13, VAR_3);
  if ((VAR_19 & VAR_6) == 0)
   break;
 }


 if ((VAR_19 & VAR_6) != 0) {
  FUNC_1(VAR_0, "PHY address command did not complete.\n");
  FUNC_0("PHY address command did not complete, returning IXGBE_ERR_PHY\n");
  return VAR_1;
 }





 VAR_19 = ((VAR_14 << VAR_7) |
     (VAR_15 << VAR_5) |
     (VAR_13->phy.addr << VAR_8) |
     (VAR_9 | VAR_6));

 FUNC_3(VAR_13, VAR_3, VAR_19);






 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  FUNC_4(10);

  VAR_19 = FUNC_2(VAR_13, VAR_3);
  if ((VAR_19 & VAR_6) == 0)
   break;
 }

 if ((VAR_19 & VAR_6) != 0) {
  FUNC_1(VAR_0, "PHY read command didn't complete\n");
  FUNC_0("PHY read command didn't complete, returning IXGBE_ERR_PHY\n");
  return VAR_1;
 }





 VAR_18 = FUNC_2(VAR_13, VAR_10);
 VAR_18 >>= VAR_11;
 *VAR_16 = (u16)(VAR_18);

 return VAR_12;
}
