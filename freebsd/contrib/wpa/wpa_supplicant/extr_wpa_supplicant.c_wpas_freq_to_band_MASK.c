
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wpa_radio_work_band { ____Placeholder_wpa_radio_work_band } wpa_radio_work_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum wpa_radio_work_band FUNC_0(int VAR_3)
{
 if (VAR_3 < 3000)
  return VAR_0;
 if (VAR_3 > 50000)
  return VAR_2;
 return VAR_1;
}
