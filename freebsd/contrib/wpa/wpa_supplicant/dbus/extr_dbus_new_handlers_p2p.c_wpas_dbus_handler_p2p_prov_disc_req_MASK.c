
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
 int VAR_1 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,int *,char*,int ,int *) ;

DBusMessage * FUNC_8(DBusMessage *VAR_2,
        struct wpa_supplicant *VAR_3)
{
 DBusMessageIter VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 u8 VAR_7[VAR_0];

 FUNC_1(VAR_2, &VAR_4);
 FUNC_0(&VAR_4, &VAR_5);

 if (FUNC_4(VAR_5, VAR_7) < 0)
  return FUNC_5(VAR_2, ((void*)0));

 FUNC_2(&VAR_4);
 FUNC_0(&VAR_4, &VAR_6);






 if (FUNC_3(VAR_6, "display") &&
     FUNC_3(VAR_6, "keypad") &&
     FUNC_3(VAR_6, "pbc") &&
     FUNC_3(VAR_6, "pushbutton"))
  return FUNC_5(VAR_2, ((void*)0));

 VAR_3 = VAR_3->global->p2p_init_wpa_s;

 if (FUNC_7(VAR_3, VAR_7, VAR_6,
          VAR_1, ((void*)0)) < 0)
  return FUNC_6(VAR_2,
    "Failed to send provision discovery request");

 return ((void*)0);
}
