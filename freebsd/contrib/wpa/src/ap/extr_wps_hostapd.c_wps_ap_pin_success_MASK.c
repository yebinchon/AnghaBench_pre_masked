
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {scalar_t__ ap_pin_failures_consecutive; int ap_pin_failures; int * wps; TYPE_1__* conf; } ;
struct TYPE_2__ {int * ap_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_1, void *VAR_2)
{
 if (VAR_1->conf->ap_pin == ((void*)0) || VAR_1->wps == ((void*)0))
  return 0;

 if (VAR_1->ap_pin_failures_consecutive == 0)
  return 0;

 FUNC_0(VAR_0, "WPS: Clear consecutive AP PIN failure counter "
     "- total validation failures %u (%u consecutive)",
     VAR_1->ap_pin_failures, VAR_1->ap_pin_failures_consecutive);
 VAR_1->ap_pin_failures_consecutive = 0;

 return 0;
}
