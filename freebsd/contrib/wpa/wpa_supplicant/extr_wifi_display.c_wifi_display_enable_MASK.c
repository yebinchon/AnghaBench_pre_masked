
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int wifi_display; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_global*) ;
 int FUNC_1 (int ,char*,char*) ;

void FUNC_2(struct wpa_global *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, "WFD: Wi-Fi Display %s",
     VAR_2 ? "enabled" : "disabled");
 VAR_1->wifi_display = VAR_2;
 FUNC_0(VAR_1);
}
