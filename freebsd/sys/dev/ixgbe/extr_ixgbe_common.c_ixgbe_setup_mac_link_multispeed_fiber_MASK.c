
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int media_type; int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int*) ;



 int FUNC_5 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int,int) ;
 int FUNC_7 (int) ;

s32 FUNC_8(struct ixgbe_hw *VAR_5,
       ixgbe_link_speed VAR_6,
       bool VAR_7)
{
 ixgbe_link_speed VAR_8 = VAR_3;
 ixgbe_link_speed VAR_9 = VAR_3;
 s32 VAR_10 = VAR_4;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 bool VAR_13, VAR_14 = VAR_0;

 FUNC_0("ixgbe_setup_mac_link_multispeed_fiber");


 VAR_10 = FUNC_4(VAR_5, &VAR_8, &VAR_13);
 if (VAR_10 != VAR_4)
  return VAR_10;

 VAR_6 &= VAR_8;




 if (VAR_6 & VAR_1) {
  VAR_11++;
  VAR_9 = VAR_1;


  switch (VAR_5->phy.media_type) {
  case 129:
  case 130:
   FUNC_5(VAR_5,
          VAR_1);
   break;
  case 128:

   break;
  default:
   FUNC_1("Unexpected media type.\n");
   break;
  }


  FUNC_7(40);

  VAR_10 = FUNC_6(VAR_5,
           VAR_1,
           VAR_7);
  if (VAR_10 != VAR_4)
   return VAR_10;


  FUNC_3(VAR_5);





  for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {

   FUNC_7(100);


   VAR_10 = FUNC_2(VAR_5, &VAR_8,
        &VAR_14, VAR_0);
   if (VAR_10 != VAR_4)
    return VAR_10;

   if (VAR_14)
    goto out;
  }
 }

 if (VAR_6 & VAR_2) {
  VAR_11++;
  if (VAR_9 == VAR_3)
   VAR_9 = VAR_2;


  switch (VAR_5->phy.media_type) {
  case 129:
  case 130:
   FUNC_5(VAR_5,
          VAR_2);
   break;
  case 128:

   break;
  default:
   FUNC_1("Unexpected media type.\n");
   break;
  }


  FUNC_7(40);

  VAR_10 = FUNC_6(VAR_5,
           VAR_2,
           VAR_7);
  if (VAR_10 != VAR_4)
   return VAR_10;


  FUNC_3(VAR_5);


  FUNC_7(100);


  VAR_10 = FUNC_2(VAR_5, &VAR_8, &VAR_14, VAR_0);
  if (VAR_10 != VAR_4)
   return VAR_10;

  if (VAR_14)
   goto out;
 }





 if (VAR_11 > 1)
  VAR_10 = FUNC_8(VAR_5,
            VAR_9,
            VAR_7);

out:

 VAR_5->phy.autoneg_advertised = 0;

 if (VAR_6 & VAR_1)
  VAR_5->phy.autoneg_advertised |= VAR_1;

 if (VAR_6 & VAR_2)
  VAR_5->phy.autoneg_advertised |= VAR_2;

 return VAR_10;
}
