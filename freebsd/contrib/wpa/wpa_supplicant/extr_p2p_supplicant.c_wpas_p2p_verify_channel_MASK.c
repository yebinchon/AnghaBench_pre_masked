
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_supplicant {int global; } ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct hostapd_hw_modes*,scalar_t__,int*) ;
 int FUNC_1 (struct wpa_supplicant*,struct hostapd_hw_modes*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct wpa_supplicant*,struct hostapd_hw_modes*,scalar_t__,scalar_t__) ;

__attribute__((used)) static enum chan_allowed FUNC_3(struct wpa_supplicant *VAR_8,
       struct hostapd_hw_modes *VAR_9,
       u8 VAR_10, u8 VAR_11)
{
 int VAR_12 = 0;
 enum chan_allowed VAR_13, VAR_14;

 VAR_14 = VAR_13 = FUNC_0(VAR_8->global, VAR_9, VAR_10, &VAR_12);
 if (VAR_11 == VAR_1) {
  if (!(VAR_12 & VAR_4))
   return VAR_6;
  VAR_14 = FUNC_0(VAR_8->global, VAR_9, VAR_10 - 4, ((void*)0));
 } else if (VAR_11 == VAR_2) {
  if (!(VAR_12 & VAR_5))
   return VAR_6;
  VAR_14 = FUNC_0(VAR_8->global, VAR_9, VAR_10 + 4, ((void*)0));
 } else if (VAR_11 == VAR_3) {
  VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 } else if (VAR_11 == VAR_0) {
  VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
 }

 if (VAR_13 == VAR_6 || VAR_14 == VAR_6)
  return VAR_6;
 if (VAR_13 == VAR_7 || VAR_14 == VAR_7)
  return VAR_7;
 return VAR_13;
}
