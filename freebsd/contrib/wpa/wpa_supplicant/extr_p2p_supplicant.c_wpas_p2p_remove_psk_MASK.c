
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* conf; int confname; } ;
struct wpa_ssid {int dummy; } ;
struct TYPE_2__ {scalar_t__ update_config; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpa_ssid*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
    struct wpa_ssid *VAR_2, const u8 *VAR_3,
    int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 > 0 && VAR_1->conf->update_config &&
     FUNC_0(VAR_1->confname, VAR_1->conf))
  FUNC_1(VAR_1, VAR_0,
   "P2P: Failed to update configuration");
}
