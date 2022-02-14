
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int time_advertisement; int time_zone; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 size_t FUNC_1 (int ) ;

u8 * FUNC_2(struct hostapd_data *VAR_1, u8 *VAR_2)
{
 size_t VAR_3;

 if (VAR_1->conf->time_advertisement != 2 || !VAR_1->conf->time_zone)
  return VAR_2;

 VAR_3 = FUNC_1(VAR_1->conf->time_zone);

 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_3;
 FUNC_0(VAR_2, VAR_1->conf->time_zone, VAR_3);
 VAR_2 += VAR_3;

 return VAR_2;
}
