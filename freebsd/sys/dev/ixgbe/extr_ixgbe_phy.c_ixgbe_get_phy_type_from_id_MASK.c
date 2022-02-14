
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ixgbe_phy_type { ____Placeholder_ixgbe_phy_type } ixgbe_phy_type ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

enum ixgbe_phy_type FUNC_1(u32 VAR_7)
{
 enum ixgbe_phy_type VAR_8;

 FUNC_0("ixgbe_get_phy_type_from_id");

 switch (VAR_7) {
 case 133:
  VAR_8 = VAR_4;
  break;
 case 131:
 case 130:
 case 132:
  VAR_8 = VAR_0;
  break;
 case 134:
  VAR_8 = VAR_3;
  break;
 case 137:
  VAR_8 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_8 = VAR_6;
  break;
 case 136:
 case 135:
  VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = VAR_5;
  break;
 }
 return VAR_8;
}
