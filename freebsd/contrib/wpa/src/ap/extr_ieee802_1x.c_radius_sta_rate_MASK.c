
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int supported_rates_len; int* supported_rates; } ;
struct hostapd_data {int dummy; } ;



int FUNC_0(struct hostapd_data *VAR_0, struct sta_info *VAR_1)
{
 int VAR_2;
 u8 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->supported_rates_len; VAR_2++)
  if ((VAR_1->supported_rates[VAR_2] & 0x7f) > VAR_3)
   VAR_3 = VAR_1->supported_rates[VAR_2] & 0x7f;

 return VAR_3;
}
