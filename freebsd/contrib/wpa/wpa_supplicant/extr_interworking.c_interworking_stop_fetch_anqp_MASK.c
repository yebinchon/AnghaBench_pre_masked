
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ fetch_anqp_in_progress; } ;



void FUNC_0(struct wpa_supplicant *VAR_0)
{
 if (!VAR_0->fetch_anqp_in_progress)
  return;

 VAR_0->fetch_anqp_in_progress = 0;
}
