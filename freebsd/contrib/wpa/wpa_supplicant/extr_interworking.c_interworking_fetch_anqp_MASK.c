
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int fetch_all_anqp; scalar_t__ fetch_osu_info; scalar_t__ network_select; scalar_t__ fetch_anqp_in_progress; } ;


 int FUNC_0 (struct wpa_supplicant*) ;

int FUNC_1(struct wpa_supplicant *VAR_0)
{
 if (VAR_0->fetch_anqp_in_progress || VAR_0->network_select)
  return 0;

 VAR_0->network_select = 0;
 VAR_0->fetch_all_anqp = 1;
 VAR_0->fetch_osu_info = 0;

 FUNC_0(VAR_0);

 return 0;
}
