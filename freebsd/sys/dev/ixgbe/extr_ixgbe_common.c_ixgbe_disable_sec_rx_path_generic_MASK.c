
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_6)
{


 int VAR_7;
 int VAR_8;

 FUNC_0("ixgbe_disable_sec_rx_path_generic");


 VAR_8 = FUNC_2(VAR_6, VAR_1);
 VAR_8 |= VAR_2;
 FUNC_3(VAR_6, VAR_1, VAR_8);
 for (VAR_7 = 0; VAR_7 < 40; VAR_7++) {
  VAR_8 = FUNC_2(VAR_6, VAR_3);
  if (VAR_8 & VAR_4)
   break;
  else

   FUNC_4(1000);
 }


 if (VAR_7 >= 40)
  FUNC_1("Rx unit being enabled before security "
    "path fully disabled.  Continuing with init.\n");

 return VAR_5;
}
