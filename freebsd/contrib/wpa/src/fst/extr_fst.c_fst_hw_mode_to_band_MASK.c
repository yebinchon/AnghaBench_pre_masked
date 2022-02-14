
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mb_band_id { ____Placeholder_mb_band_id } mb_band_id ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

enum mb_band_id FUNC_1(enum hostapd_hw_mode VAR_3)
{
 switch (VAR_3) {
 case 129:
 case 128:
  return VAR_0;
 case 131:
  return VAR_1;
 case 130:
  return VAR_2;
 default:
  FUNC_0(0);
  return VAR_0;
 }
}
