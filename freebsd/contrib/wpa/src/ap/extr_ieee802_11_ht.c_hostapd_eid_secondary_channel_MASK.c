
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sec_channel_offset; int channel; } ;
struct hostapd_data {TYPE_1__ cs_freq_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8 * FUNC_0(struct hostapd_data *VAR_3, u8 *VAR_4)
{
 u8 VAR_5;

 if (!VAR_3->cs_freq_params.channel ||
     !VAR_3->cs_freq_params.sec_channel_offset)
  return VAR_4;

 if (VAR_3->cs_freq_params.sec_channel_offset == -1)
  VAR_5 = VAR_1;
 else if (VAR_3->cs_freq_params.sec_channel_offset == 1)
  VAR_5 = VAR_0;
 else
  return VAR_4;

 *VAR_4++ = VAR_2;
 *VAR_4++ = 1;
 *VAR_4++ = VAR_5;

 return VAR_4;
}
