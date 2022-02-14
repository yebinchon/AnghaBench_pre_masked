
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int qos_map_set; scalar_t__ qos_map_set_len; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;

u8 * FUNC_1(struct hostapd_data *VAR_1, u8 *VAR_2)
{
 u8 *VAR_3 = VAR_2;
 u8 VAR_4 = VAR_1->conf->qos_map_set_len;

 if (!VAR_4)
  return VAR_2;

 *VAR_3++ = VAR_0;
 *VAR_3++ = VAR_4;
 FUNC_0(VAR_3, VAR_1->conf->qos_map_set, VAR_4);
 VAR_3 += VAR_4;

 return VAR_3;
}
