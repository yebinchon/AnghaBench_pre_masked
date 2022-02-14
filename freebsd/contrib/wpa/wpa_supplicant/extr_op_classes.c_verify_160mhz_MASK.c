
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hostapd_hw_modes*,int,unsigned int*) ;
 int FUNC_1 (struct hostapd_hw_modes*,int) ;

__attribute__((used)) static enum chan_allowed FUNC_2(struct hostapd_hw_modes *VAR_12,
           u8 VAR_13)
{
 u8 VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16 = 0;

 VAR_14 = FUNC_1(VAR_12, VAR_13);
 if (!VAR_14)
  return VAR_10;


 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  unsigned int VAR_17;
  u8 VAR_18 = VAR_14 - 14 + VAR_15 * 4;

  if (FUNC_0(VAR_12, VAR_18, &VAR_17) == VAR_10)
   return VAR_10;

  if ((VAR_15 == 0 && !(VAR_17 & VAR_2)) ||
      (VAR_15 == 1 && !(VAR_17 & VAR_6)) ||
      (VAR_15 == 2 && !(VAR_17 & VAR_7)) ||
      (VAR_15 == 3 && !(VAR_17 & VAR_8)) ||
      (VAR_15 == 4 && !(VAR_17 & VAR_9)) ||
      (VAR_15 == 5 && !(VAR_17 & VAR_3)) ||
      (VAR_15 == 6 && !(VAR_17 & VAR_4)) ||
      (VAR_15 == 7 && !(VAR_17 & VAR_5)))
   return VAR_10;

  if (VAR_17 & VAR_1)
   VAR_16 = 1;
 }

 if (VAR_16)
  return VAR_11;

 return VAR_0;
}
