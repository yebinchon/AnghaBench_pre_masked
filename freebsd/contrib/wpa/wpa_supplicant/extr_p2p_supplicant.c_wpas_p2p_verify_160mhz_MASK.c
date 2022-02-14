
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,struct hostapd_hw_modes*,int,int*) ;
 int FUNC_1 (struct wpa_supplicant*,struct hostapd_hw_modes*,int) ;

__attribute__((used)) static enum chan_allowed FUNC_2(struct wpa_supplicant *VAR_11,
            struct hostapd_hw_modes *VAR_12,
            u8 VAR_13, u8 VAR_14)
{
 u8 VAR_15;
 int VAR_16, VAR_17;
 enum chan_allowed VAR_18, VAR_19 = VAR_0;

 VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_13);
 if (!VAR_15)
  return VAR_9;



 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  int VAR_20 = VAR_15 - 14 + VAR_16 * 4;

  VAR_18 = FUNC_0(VAR_11->global, VAR_12, VAR_20, &VAR_17);
  if (VAR_18 == VAR_9)
   return VAR_9;

  if (VAR_18 == VAR_10)
   VAR_19 = VAR_10;

  if (VAR_16 == 0 && !(VAR_17 & VAR_1))
   return VAR_9;
  if (VAR_16 == 1 && !(VAR_17 & VAR_5))
   return VAR_9;
  if (VAR_16 == 2 && !(VAR_17 & VAR_6))
   return VAR_9;
  if (VAR_16 == 3 && !(VAR_17 & VAR_7))
   return VAR_9;
  if (VAR_16 == 4 && !(VAR_17 & VAR_8))
   return VAR_9;
  if (VAR_16 == 5 && !(VAR_17 & VAR_2))
   return VAR_9;
  if (VAR_16 == 6 && !(VAR_17 & VAR_3))
   return VAR_9;
  if (VAR_16 == 7 && !(VAR_17 & VAR_4))
   return VAR_9;
 }

 return VAR_19;
}
