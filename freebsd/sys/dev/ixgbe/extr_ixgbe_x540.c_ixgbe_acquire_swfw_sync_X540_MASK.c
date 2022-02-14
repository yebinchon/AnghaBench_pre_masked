
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct ixgbe_hw*,int) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct ixgbe_hw *VAR_11, u32 VAR_12)
{
 u32 VAR_13 = VAR_12 & VAR_5;
 u32 VAR_14 = VAR_13 << 5;
 u32 VAR_15 = VAR_12 & VAR_3;
 u32 VAR_16 = 200;
 u32 VAR_17 = 0;
 u32 VAR_18;
 u32 VAR_19;

 FUNC_0("ixgbe_acquire_swfw_sync_X540");

 if (VAR_13 & VAR_1)
  VAR_17 |= VAR_2;


 if (VAR_12 & VAR_8)
  VAR_13 |= VAR_8;

 VAR_13 |= VAR_15;
 VAR_14 |= VAR_15 << 2;
 if (VAR_11->mac.type >= VAR_10)
  VAR_16 = 1000;

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {



  if (FUNC_5(VAR_11)) {
   FUNC_1("Failed to get NVM access and register semaphore, returning IXGBE_ERR_SWFW_SYNC\n");
   return VAR_0;
  }

  VAR_18 = FUNC_2(VAR_11, FUNC_3(VAR_11));
  if (!(VAR_18 & (VAR_14 | VAR_13 | VAR_17))) {
   VAR_18 |= VAR_13;
   FUNC_4(VAR_11, FUNC_3(VAR_11),
     VAR_18);
   FUNC_7(VAR_11);
   return VAR_9;
  }




  FUNC_7(VAR_11);
  FUNC_8(5);
 }






 if (FUNC_5(VAR_11)) {
  FUNC_1("Failed to get NVM sempahore and register semaphore while forcefully ignoring FW sempahore bit(s) and setting SW semaphore bit(s), returning IXGBE_ERR_SWFW_SYNC\n");
  return VAR_0;
 }
 VAR_18 = FUNC_2(VAR_11, FUNC_3(VAR_11));
 if (VAR_18 & (VAR_14 | VAR_17)) {
  VAR_18 |= VAR_13;
  FUNC_4(VAR_11, FUNC_3(VAR_11), VAR_18);
  FUNC_7(VAR_11);
  FUNC_8(5);
  return VAR_9;
 }





 if (VAR_18 & VAR_13) {
  u32 VAR_20 = VAR_1 | VAR_6 |
       VAR_7 | VAR_4 |
       VAR_8;

  if (VAR_15)
   VAR_20 |= VAR_3;
  FUNC_6(VAR_11, VAR_20);
  FUNC_7(VAR_11);
  FUNC_1("Resource not released by other SW, returning IXGBE_ERR_SWFW_SYNC\n");
  return VAR_0;
 }
 FUNC_7(VAR_11);
 FUNC_1("Returning error IXGBE_ERR_SWFW_SYNC\n");

 return VAR_0;
}
