
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {struct hostapd_bss_config* conf; } ;
struct TYPE_2__ {int wpa_psk; } ;
struct hostapd_bss_config {TYPE_1__ ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct hostapd_bss_config*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct hostapd_data *VAR_2)
{
 struct hostapd_bss_config *VAR_3 = VAR_2->conf;
 int VAR_4;

 FUNC_1(&VAR_3->ssid.wpa_psk);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0) {
  FUNC_3(VAR_0, "Reloading WPA-PSK passwords failed: %d",
      VAR_4);
  return -1;
 }

 FUNC_0(VAR_2, VAR_1,
   ((void*)0));

 return 0;
}
