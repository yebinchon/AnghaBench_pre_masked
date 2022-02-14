
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_2__* current_mode; TYPE_1__* conf; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_3__ {int ieee80211h; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hostapd_iface*,int,int) ;
 int FUNC_1 (struct hostapd_iface*,int*) ;
 int FUNC_2 (struct hostapd_iface*,int*) ;

int FUNC_3(struct hostapd_iface *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 if (!VAR_1->conf->ieee80211h || !VAR_1->current_mode ||
     VAR_1->current_mode->mode != VAR_0)
  return 0;


 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_4 == -1)
  return -1;


 VAR_2 = FUNC_2(VAR_1, &VAR_3);


 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_2);
 if (VAR_6)
  return VAR_6;
 if (VAR_5 >= 0 && VAR_3 > 0)
  VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_3);
 return VAR_6;
}
