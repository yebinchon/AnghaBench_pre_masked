
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum phy_type { ____Placeholder_phy_type } phy_type ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static enum phy_type FUNC_1(int VAR_5)
{
 enum hostapd_hw_mode VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_5, &VAR_7);

 switch (VAR_6) {
 case 131:
  return VAR_3;
 case 129:
  return VAR_2;
 case 128:
  return VAR_1;
 case 130:
  return VAR_0;
 default:
  return VAR_4;
 };
}
