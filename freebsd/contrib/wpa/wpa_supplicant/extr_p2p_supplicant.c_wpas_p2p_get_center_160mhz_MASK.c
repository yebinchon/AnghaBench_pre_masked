
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_1,
         struct hostapd_hw_modes *VAR_2,
         u8 VAR_3)
{
 u8 VAR_4[] = { 50, 114 };
 unsigned int VAR_5;

 if (VAR_2->mode != VAR_0)
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)




  if (VAR_3 >= VAR_4[VAR_5] - 14 &&
      VAR_3 <= VAR_4[VAR_5] + 14)
   return VAR_4[VAR_5];

 return 0;
}
