
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & ~VAR_2;
 int VAR_7 = VAR_0;
 s32 VAR_8 = VAR_3;

 FUNC_0("ixgbe_acquire_swfw_sync_X550a");

 while (--VAR_7) {
  VAR_8 = VAR_3;
  if (VAR_6)
   VAR_8 = FUNC_2(VAR_4, VAR_6);
  if (VAR_8) {
   FUNC_1("Could not acquire SWFW semaphore, Status = %d\n",
      VAR_8);
   return VAR_8;
  }
  if (!(VAR_5 & VAR_2))
   return VAR_3;

  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 == VAR_1)
   FUNC_1("Could not acquire PHY token, Status = %d\n",
      VAR_8);

  if (VAR_8 == VAR_3)
   return VAR_3;

  if (VAR_6)
   FUNC_4(VAR_4, VAR_6);

  if (VAR_8 != VAR_1) {
   FUNC_1("Unable to retry acquiring the PHY token, Status = %d\n",
      VAR_8);
   return VAR_8;
  }
 }

 FUNC_1("Semaphore acquisition retries failed!: PHY ID = 0x%08X\n",
    VAR_4->phy.id);
 return VAR_8;
}
