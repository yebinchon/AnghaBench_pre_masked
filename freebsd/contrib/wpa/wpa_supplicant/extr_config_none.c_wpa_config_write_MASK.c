
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {struct wpa_ssid* next; } ;
struct wpa_config_blob {struct wpa_config_blob* next; } ;
struct wpa_config {struct wpa_config_blob* blobs; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;

int FUNC_1(const char *VAR_1, struct wpa_config *VAR_2)
{
 struct wpa_ssid *VAR_3;
 struct wpa_config_blob *VAR_4;

 FUNC_0(VAR_0, "Writing configuration file '%s'", VAR_1);




 for (VAR_3 = VAR_2->ssid; VAR_3; VAR_3 = VAR_3->next) {

 }

 for (VAR_4 = VAR_2->blobs; VAR_4; VAR_4 = VAR_4->next) {

 }

 return 0;
}
