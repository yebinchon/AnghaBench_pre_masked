
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int global; } ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct hostapd_hw_modes*,int,int*) ;
 int FUNC_1 (struct wpa_supplicant*,struct hostapd_hw_modes*,int) ;

__attribute__((used)) static enum chan_allowed FUNC_2(struct wpa_supplicant *VAR_7,
            struct hostapd_hw_modes *VAR_8,
            u8 VAR_9, u8 VAR_10)
{
 u8 VAR_11;
 int VAR_12, VAR_13;
 enum chan_allowed VAR_14, VAR_15 = VAR_0;

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (!VAR_11)
  return VAR_5;
 if (VAR_11 >= 58 && VAR_11 <= 138)
  return VAR_5;


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  int VAR_16 = VAR_11 - 6 + VAR_12 * 4;

  VAR_14 = FUNC_0(VAR_7->global, VAR_8, VAR_16, &VAR_13);
  if (VAR_14 == VAR_5)
   return VAR_5;
  if (VAR_14 == VAR_6)
   VAR_15 = VAR_6;

  if (VAR_12 == 0 && !(VAR_13 & VAR_1))
   return VAR_5;
  if (VAR_12 == 1 && !(VAR_13 & VAR_2))
   return VAR_5;
  if (VAR_12 == 2 && !(VAR_13 & VAR_3))
   return VAR_5;
  if (VAR_12 == 3 && !(VAR_13 & VAR_4))
   return VAR_5;
 }

 return VAR_15;
}
