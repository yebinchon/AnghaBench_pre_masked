
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int bandwidth; int center_freq2; int center_freq1; int freq; int vht_enabled; int channel; } ;
struct hostapd_data {TYPE_1__ cs_freq_params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,void**) ;

u8 * FUNC_1(struct hostapd_data *VAR_3, u8 *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8;

 if (!VAR_3->cs_freq_params.channel ||
     !VAR_3->cs_freq_params.vht_enabled)
  return VAR_4;


 switch (VAR_3->cs_freq_params.bandwidth) {
 case 40:
  VAR_5 = 0;
  break;
 case 80:

  if (!VAR_3->cs_freq_params.center_freq2)
   VAR_5 = 1;
  else
   VAR_5 = 3;
  break;
 case 160:
  VAR_5 = 2;
  break;
 default:

  return VAR_4;
 }

 VAR_8 = VAR_3->cs_freq_params.center_freq1 ?
  VAR_3->cs_freq_params.center_freq1 :
  VAR_3->cs_freq_params.freq;
 if (FUNC_0(VAR_8, &VAR_6) !=
     VAR_0)
  return VAR_4;

 if (VAR_3->cs_freq_params.center_freq2 &&
     FUNC_0(VAR_3->cs_freq_params.center_freq2,
       &VAR_7) != VAR_0)
  return VAR_4;

 *VAR_4++ = VAR_1;
 *VAR_4++ = 5;
 *VAR_4++ = VAR_2;
 *VAR_4++ = 3;
 *VAR_4++ = VAR_5;
 *VAR_4++ = VAR_6;
 *VAR_4++ = VAR_7;

 return VAR_4;
}
