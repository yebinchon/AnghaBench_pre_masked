
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {struct eapol_sm* eapol; } ;
struct eapol_sm {int dummy; } ;



void FUNC_0(struct wpa_sm *VAR_0, struct eapol_sm *VAR_1)
{
 if (VAR_0)
  VAR_0->eapol = VAR_1;
}
