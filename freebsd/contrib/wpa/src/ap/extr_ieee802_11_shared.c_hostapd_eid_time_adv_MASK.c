
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int * time_adv; TYPE_1__* conf; } ;
struct TYPE_2__ {int time_advertisement; } ;


 scalar_t__ FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u8 * FUNC_4(struct hostapd_data *VAR_0, u8 *VAR_1)
{
 if (VAR_0->conf->time_advertisement != 2)
  return VAR_1;

 if (VAR_0->time_adv == ((void*)0) &&
     FUNC_0(VAR_0) < 0)
  return VAR_1;

 if (VAR_0->time_adv == ((void*)0))
  return VAR_1;

 FUNC_1(VAR_1, FUNC_2(VAR_0->time_adv),
    FUNC_3(VAR_0->time_adv));
 VAR_1 += FUNC_3(VAR_0->time_adv);

 return VAR_1;
}
