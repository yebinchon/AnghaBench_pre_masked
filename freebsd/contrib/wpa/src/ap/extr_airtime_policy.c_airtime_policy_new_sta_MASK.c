
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int addr; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {scalar_t__ airtime_mode; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (struct hostapd_data*,struct sta_info*,unsigned int) ;

int FUNC_2(struct hostapd_data *VAR_1, struct sta_info *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1->iconf->airtime_mode == VAR_0) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->addr);
  if (VAR_3)
   return FUNC_1(VAR_1, VAR_2, VAR_3);
 }
 return 0;
}
