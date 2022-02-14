
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_context {int uuid; } ;
struct wpa_supplicant {TYPE_2__* conf; int own_addr; struct wps_context* wps; TYPE_1__* global; struct wpa_supplicant* next; } ;
typedef int buf ;
struct TYPE_4__ {int auto_uuid; int uuid; } ;
struct TYPE_3__ {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_2,
         struct wps_context *VAR_3)
{
 char VAR_4[50];
 const char *VAR_5;

 if (FUNC_0(VAR_2->conf->uuid)) {
  struct wpa_supplicant *VAR_6;
  VAR_6 = VAR_2->global->ifaces;
  while (VAR_6 && VAR_6->next)
   VAR_6 = VAR_6->next;
  if (VAR_6 && VAR_6 != VAR_2) {
   if (VAR_3 != VAR_2->global->ifaces->wps)
    FUNC_1(VAR_3->uuid,
       VAR_2->global->ifaces->wps->uuid,
       VAR_1);
   VAR_5 = "from the first interface";
  } else if (VAR_2->conf->auto_uuid == 1) {
   FUNC_4(VAR_3->uuid);
   VAR_5 = "based on random data";
  } else {
   FUNC_3(VAR_2->own_addr, VAR_3->uuid);
   VAR_5 = "based on MAC address";
  }
 } else {
  FUNC_1(VAR_3->uuid, VAR_2->conf->uuid, VAR_1);
  VAR_5 = "based on configuration";
 }

 FUNC_2(VAR_3->uuid, VAR_4, sizeof(VAR_4));
 FUNC_5(VAR_2, VAR_0, "WPS: UUID %s: %s", VAR_5, VAR_4);
}
