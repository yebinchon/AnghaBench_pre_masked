
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error_indication; int config_error; } ;
union wps_event_data {TYPE_1__ fail; } ;
struct wpa_supplicant {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union wps_event_data*,int ,int) ;
 int FUNC_1 (struct wpa_supplicant*,TYPE_1__*) ;

void FUNC_2(struct wpa_supplicant *VAR_2)
{
 union wps_event_data VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.fail.config_error = VAR_0;
 VAR_3.fail.error_indication = VAR_1;






 FUNC_1(VAR_2, &VAR_3.fail);
}
