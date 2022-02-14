
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; scalar_t__ p2p; } ;
struct TYPE_2__ {int bss_expiration_age; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int ,int ,void (*) (void*,void*),struct wpa_global*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, void *VAR_2)
{
 struct wpa_global *VAR_3 = VAR_1;
 struct wpa_supplicant *VAR_4;

 FUNC_1(VAR_0, 0,
          FUNC_4, VAR_3, ((void*)0));






 for (VAR_4 = VAR_3->ifaces; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_3(VAR_4, VAR_4->conf->bss_expiration_age);



 }
}
