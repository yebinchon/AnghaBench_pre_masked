
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int wps_upnp; TYPE_1__* conf; } ;
struct TYPE_2__ {int * ap_pin; } ;


 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_1, void *VAR_2)
{
 FUNC_1(VAR_1->conf->ap_pin);
 VAR_1->conf->ap_pin = ((void*)0);



 FUNC_0(VAR_0, VAR_1, ((void*)0));
 return 0;
}
