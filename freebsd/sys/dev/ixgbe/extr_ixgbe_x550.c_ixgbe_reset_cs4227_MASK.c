
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_13)
{
 s32 VAR_14;
 u32 VAR_15;
 u16 VAR_16;
 u8 VAR_17;


 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;
 VAR_17 |= VAR_9;
 VAR_14 = FUNC_3(VAR_13, VAR_11, VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_10, &VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;
 VAR_17 &= ~VAR_9;
 VAR_14 = FUNC_3(VAR_13, VAR_10, VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;
 VAR_17 &= ~VAR_9;
 VAR_14 = FUNC_3(VAR_13, VAR_11, VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;

 FUNC_5(VAR_5);

 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;
 VAR_17 |= VAR_9;
 VAR_14 = FUNC_3(VAR_13, VAR_11, VAR_17);
 if (VAR_14 != VAR_12)
  return VAR_14;


 FUNC_4(VAR_4);
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_14 = FUNC_1(VAR_13, VAR_3,
        &VAR_16);
  if (VAR_14 == VAR_12 &&
      VAR_16 == VAR_1)
   break;
  FUNC_4(VAR_0);
 }
 if (VAR_15 == VAR_6) {
  FUNC_0(VAR_7,
   "CS4227 reset did not complete.");
  return VAR_8;
 }

 VAR_14 = FUNC_1(VAR_13, VAR_2, &VAR_16);
 if (VAR_14 != VAR_12 ||
     !(VAR_16 & VAR_1)) {
  FUNC_0(VAR_7,
   "CS4227 EEPROM did not load successfully.");
  return VAR_8;
 }

 return VAR_12;
}
