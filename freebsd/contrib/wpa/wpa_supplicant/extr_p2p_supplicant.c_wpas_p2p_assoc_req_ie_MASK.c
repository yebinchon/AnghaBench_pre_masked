
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_2__* global; TYPE_1__* conf; } ;
struct wpa_bss {int bssid; } ;
struct TYPE_4__ {int * p2p; scalar_t__ p2p_disabled; } ;
struct TYPE_3__ {scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,size_t,int,struct wpabuf*) ;
 struct wpabuf* FUNC_1 (struct wpa_bss*,int ) ;
 int FUNC_2 (struct wpabuf*) ;

int FUNC_3(struct wpa_supplicant *VAR_1, struct wpa_bss *VAR_2,
     u8 *VAR_3, size_t VAR_4, int VAR_5)
{
 struct wpabuf *VAR_6;
 int VAR_7;

 if (VAR_1->global->p2p_disabled)
  return -1;




 if (VAR_1->conf->p2p_disabled && VAR_5)
  return -1;
 if (VAR_1->global->p2p == ((void*)0))
  return -1;
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_6 = FUNC_1(VAR_2, VAR_0);
 VAR_7 = FUNC_0(VAR_1->global->p2p, VAR_2->bssid, VAR_3, VAR_4,
          VAR_5, VAR_6);
 FUNC_2(VAR_6);

 return VAR_7;
}
