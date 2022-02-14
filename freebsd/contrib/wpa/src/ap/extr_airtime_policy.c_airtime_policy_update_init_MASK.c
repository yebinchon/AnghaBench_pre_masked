
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ airtime_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int ,struct hostapd_iface*,int *) ;
 scalar_t__ FUNC_1 (struct hostapd_iface*,unsigned int*,unsigned int*) ;
 int VAR_1 ;

int FUNC_2(struct hostapd_iface *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2->conf->airtime_mode < VAR_0)
  return 0;

 if (FUNC_1(VAR_2, &VAR_3, &VAR_4) < 0)
  return -1;

 FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2, ((void*)0));
 return 0;
}
