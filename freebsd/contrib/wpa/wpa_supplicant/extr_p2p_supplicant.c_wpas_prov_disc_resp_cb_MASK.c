
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ mode; } ;
struct TYPE_2__ {unsigned int pending_p2ps_group_freq; scalar_t__ pending_p2ps_group; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int,unsigned int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_2;
 struct wpa_ssid *VAR_4;
 unsigned int VAR_5;

 if (!VAR_3->global->pending_p2ps_group)
  return 0;

 VAR_5 = VAR_3->global->pending_p2ps_group_freq;
 VAR_3->global->pending_p2ps_group_freq = 0;
 VAR_3->global->pending_p2ps_group = 0;

 if (FUNC_0(VAR_3))
  return 0;
 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4) {
  FUNC_3(
   VAR_3, VAR_4, 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0),
   VAR_4->mode == VAR_1 ?
   VAR_0 : 0, 0);
 } else {
  FUNC_2(VAR_3, 1, VAR_5, 0, 0, 0, 0, 0);
 }

 return 1;
}
