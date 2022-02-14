
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; scalar_t__ force_long_sd; int p2p_auth_invite; } ;
struct TYPE_2__ {int p2p; struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wpa_supplicant*,int *,int **,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;

DBusMessage * FUNC_4(DBusMessage *VAR_1,
       struct wpa_supplicant *VAR_2)
{
 DBusMessage *VAR_3 = ((void*)0);

 if (!FUNC_2(VAR_2, VAR_1, &VAR_3, ((void*)0)))
  return VAR_3;

 VAR_2 = VAR_2->global->p2p_init_wpa_s;

 FUNC_3(VAR_2);
 FUNC_0(VAR_2->p2p_auth_invite, 0, VAR_0);
 VAR_2->force_long_sd = 0;
 FUNC_1(VAR_2->global->p2p);

 return ((void*)0);
}
