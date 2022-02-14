
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int FUNC_0 (int *,struct wpabuf*,int *,unsigned int) ;
 unsigned int FUNC_1 (struct wpa_supplicant*,int *) ;

void FUNC_2(struct wpa_supplicant *VAR_0, struct wpabuf *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->global->p2p_disabled)
  return;
 if (VAR_0->global->p2p == ((void*)0))
  return;

 VAR_2 = FUNC_1(VAR_0, ((void*)0));
 FUNC_0(VAR_0->global->p2p, VAR_1, ((void*)0), VAR_2);
}
