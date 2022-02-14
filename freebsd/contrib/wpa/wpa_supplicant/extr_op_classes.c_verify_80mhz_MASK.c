
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hostapd_hw_modes*,int,unsigned int*) ;
 int FUNC_1 (struct hostapd_hw_modes*,int) ;

__attribute__((used)) static enum chan_allowed FUNC_2(struct hostapd_hw_modes *VAR_8, u8 VAR_9)
{
 u8 VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;

 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (!VAR_10)
  return VAR_6;


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  unsigned int VAR_13;
  u8 VAR_14 = VAR_10 - 6 + VAR_11 * 4;

  if (FUNC_0(VAR_8, VAR_14, &VAR_13) == VAR_6)
   return VAR_6;

  if ((VAR_11 == 0 && !(VAR_13 & VAR_2)) ||
      (VAR_11 == 1 && !(VAR_13 & VAR_3)) ||
      (VAR_11 == 2 && !(VAR_13 & VAR_4)) ||
      (VAR_11 == 3 && !(VAR_13 & VAR_5)))
   return VAR_6;

  if (VAR_13 & VAR_1)
   VAR_12 = 1;
 }

 if (VAR_12)
  return VAR_7;

 return VAR_0;
}
