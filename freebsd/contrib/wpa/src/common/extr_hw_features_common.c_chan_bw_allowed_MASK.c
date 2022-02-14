
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hostapd_channel_data {int allowed_bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(const struct hostapd_channel_data *VAR_5, u32 VAR_6,
      int VAR_7, int VAR_8)
{
 u32 VAR_9;

 switch (VAR_6) {
 case 20:
  VAR_9 = VAR_1;
  break;
 case 40:


  if (VAR_8 && VAR_7)
   VAR_9 = VAR_3;
  else if (VAR_8 && !VAR_7)
   VAR_9 = VAR_2;
  else
   VAR_9 = 0;
  break;
 case 80:
  VAR_9 = VAR_4;
  break;
 case 160:
  VAR_9 = VAR_0;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 return (VAR_5->allowed_bw & VAR_9) == VAR_9;
}
