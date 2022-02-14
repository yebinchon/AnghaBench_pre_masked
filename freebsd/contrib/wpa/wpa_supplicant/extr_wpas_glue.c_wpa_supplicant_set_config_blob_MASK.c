
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int confname; } ;
struct wpa_config_blob {int dummy; } ;
struct TYPE_3__ {scalar_t__ update_config; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct wpa_config_blob*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1,
        struct wpa_config_blob *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 FUNC_0(VAR_3->conf, VAR_2);
 if (VAR_3->conf->update_config) {
  int VAR_4 = FUNC_1(VAR_3->confname, VAR_3->conf);
  if (VAR_4) {
   FUNC_2(VAR_0, "Failed to update config after "
       "blob set");
  }
 }
}
