
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hostapd_hw_modes {int mode; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;



struct hostapd_hw_modes * FUNC_0(struct hostapd_hw_modes *VAR_0,
       u16 VAR_1, enum hostapd_hw_mode VAR_2)
{
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].mode == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
