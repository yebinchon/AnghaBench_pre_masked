
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_add_pin_data {int added; int timeout; int pin_len; int pin; int uuid; int addr; } ;
struct hostapd_data {TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_0, void *VAR_1)
{
 struct wps_add_pin_data *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_0->wps == ((void*)0))
  return 0;
 VAR_3 = FUNC_0(VAR_0->wps->registrar, VAR_2->addr,
        VAR_2->uuid, VAR_2->pin, VAR_2->pin_len,
        VAR_2->timeout);
 if (VAR_3 == 0)
  VAR_2->added++;
 return VAR_3;
}
