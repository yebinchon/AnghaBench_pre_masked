
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int autoneg_advertised; void* smart_speed_active; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int*,void*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_11,
        ixgbe_link_speed VAR_12,
        bool VAR_13)
{
 s32 VAR_14 = VAR_9;
 ixgbe_link_speed VAR_15 = VAR_7;
 s32 VAR_16, VAR_17;
 bool VAR_18 = VAR_0;
 u32 VAR_19 = FUNC_2(VAR_11, VAR_1);

 FUNC_0("ixgbe_setup_mac_link_smartspeed");


 VAR_11->phy.autoneg_advertised = 0;

 if (VAR_12 & VAR_5)
  VAR_11->phy.autoneg_advertised |= VAR_5;

 if (VAR_12 & VAR_6)
  VAR_11->phy.autoneg_advertised |= VAR_6;

 if (VAR_12 & VAR_4)
  VAR_11->phy.autoneg_advertised |= VAR_4;
 VAR_11->phy.smart_speed_active = VAR_0;
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_14 = FUNC_4(VAR_11, VAR_12,
          VAR_13);
  if (VAR_14 != VAR_9)
   goto out;







  for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
   FUNC_5(100);


   VAR_14 = FUNC_3(VAR_11, &VAR_15, &VAR_18,
        VAR_0);
   if (VAR_14 != VAR_9)
    goto out;

   if (VAR_18)
    goto out;
  }
 }





 if (((VAR_19 & VAR_2) == 0) ||
     ((VAR_19 & VAR_3) == 0))
  goto out;


 VAR_11->phy.smart_speed_active = VAR_10;
 VAR_14 = FUNC_4(VAR_11, VAR_12,
         VAR_13);
 if (VAR_14 != VAR_9)
  goto out;







 for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
  FUNC_5(100);


  VAR_14 = FUNC_3(VAR_11, &VAR_15, &VAR_18, VAR_0);
  if (VAR_14 != VAR_9)
   goto out;

  if (VAR_18)
   goto out;
 }


 VAR_11->phy.smart_speed_active = VAR_0;
 VAR_14 = FUNC_4(VAR_11, VAR_12,
         VAR_13);

out:
 if (VAR_18 && (VAR_15 == VAR_6))
  FUNC_1("Smartspeed has downgraded the link speed "
  "from the maximum advertised\n");
 return VAR_14;
}
