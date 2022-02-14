
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {TYPE_2__* wps; TYPE_1__* conf; } ;
struct TYPE_4__ {int registrar; int upc; int model_url; int model_description; int manufacturer_url; int friendly_name; } ;
struct TYPE_3__ {scalar_t__ wps_state; int upc; int model_url; int model_description; int manufacturer_url; int friendly_name; } ;


 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*,TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hostapd_data *VAR_0)
{
 if (VAR_0->wps == ((void*)0))
  return;
 FUNC_1(VAR_0, VAR_0->wps);

 if (VAR_0->conf->wps_state)
  FUNC_2(VAR_0->wps->registrar);
 else
  FUNC_0(VAR_0);
}
