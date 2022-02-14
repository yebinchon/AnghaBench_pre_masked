
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* wps; struct hostapd_data* iface; } ;
struct TYPE_2__ {int upnp_msgs; int registrar; } ;


 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (struct hostapd_data*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct hostapd_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

void FUNC_6(struct hostapd_data *VAR_3)
{
 FUNC_0(VAR_1, VAR_3, ((void*)0));
 FUNC_0(VAR_0, VAR_3, ((void*)0));
 FUNC_0(VAR_2, VAR_3->iface, ((void*)0));
 if (VAR_3->wps == ((void*)0)) {
  FUNC_2(VAR_3, 1);
  return;
 }



 FUNC_5(VAR_3->wps->registrar);
 FUNC_4(VAR_3->wps->upnp_msgs);
 FUNC_1(VAR_3->wps);
 VAR_3->wps = ((void*)0);
 FUNC_2(VAR_3, 1);
}
