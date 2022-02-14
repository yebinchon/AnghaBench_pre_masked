
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hostapd_hw_modes*,scalar_t__,unsigned int*) ;
 int FUNC_1 (struct hostapd_hw_modes*,scalar_t__) ;
 int FUNC_2 (struct hostapd_hw_modes*,scalar_t__) ;

enum chan_allowed FUNC_3(struct hostapd_hw_modes *VAR_10, u8 VAR_11,
     u8 VAR_12)
{
 unsigned int VAR_13 = 0;
 enum chan_allowed VAR_14, VAR_15;

 VAR_15 = VAR_14 = FUNC_0(VAR_10, VAR_11, &VAR_13);
 if (VAR_12 == VAR_2) {
  if (!(VAR_13 & VAR_6))
   return VAR_8;
  VAR_15 = FUNC_0(VAR_10, VAR_11 - 4, ((void*)0));
 } else if (VAR_12 == VAR_3) {
  if (!(VAR_13 & VAR_7))
   return VAR_8;
  VAR_15 = FUNC_0(VAR_10, VAR_11 + 4, ((void*)0));
 } else if (VAR_12 == VAR_4) {





  VAR_15 = VAR_14 = FUNC_2(VAR_10, VAR_11);
 } else if (VAR_12 == VAR_1) {





  VAR_15 = VAR_14 = FUNC_1(VAR_10, VAR_11);
 } else if (VAR_12 == VAR_5) {





  VAR_15 = VAR_14 = FUNC_2(VAR_10, VAR_11);
 }

 if (VAR_14 == VAR_8 || VAR_15 == VAR_8)
  return VAR_8;

 if (VAR_14 == VAR_9 || VAR_15 == VAR_9)
  return VAR_9;

 return VAR_0;
}
