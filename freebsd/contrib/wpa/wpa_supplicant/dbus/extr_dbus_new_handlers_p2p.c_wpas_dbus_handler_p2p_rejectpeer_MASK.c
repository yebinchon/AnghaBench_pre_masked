
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,int *) ;

DBusMessage * FUNC_6(DBusMessage *VAR_1,
            struct wpa_supplicant *VAR_2)
{
 DBusMessageIter VAR_3;
 char *VAR_4 = ((void*)0);
 u8 VAR_5[VAR_0];

 FUNC_1(VAR_1, &VAR_3);
 FUNC_0(&VAR_3, &VAR_4);

 if (FUNC_2(VAR_4, VAR_5) < 0)
  return FUNC_3(VAR_1, ((void*)0));

 VAR_2 = VAR_2->global->p2p_init_wpa_s;

 if (FUNC_5(VAR_2, VAR_5) < 0)
  return FUNC_4(VAR_1,
    "Failed to call wpas_p2p_reject method.");

 return ((void*)0);
}
