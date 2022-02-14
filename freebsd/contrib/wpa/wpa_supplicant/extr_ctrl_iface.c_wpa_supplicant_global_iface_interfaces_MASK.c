
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {struct wpa_supplicant* next; int ifname; TYPE_1__* conf; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct TYPE_2__ {char* ctrl_interface; } ;


 int FUNC_0 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_global *VAR_0,
        const char *VAR_1,
        char *VAR_2, int VAR_3)
{
 int VAR_4;
 char *VAR_5, *VAR_6;
 struct wpa_supplicant *VAR_7;
 int VAR_8 = 0;

 if (VAR_1)
  VAR_8 = !!FUNC_2(VAR_1, "ctrl");

 VAR_7 = VAR_0->ifaces;
 VAR_5 = VAR_2;
 VAR_6 = VAR_2 + VAR_3;

 while (VAR_7) {
  if (VAR_8)
   VAR_4 = FUNC_0(VAR_5, VAR_6 - VAR_5, "%s ctrl_iface=%s\n",
       VAR_7->ifname,
       VAR_7->conf->ctrl_interface ?
       VAR_7->conf->ctrl_interface : "N/A");
  else
   VAR_4 = FUNC_0(VAR_5, VAR_6 - VAR_5, "%s\n",
       VAR_7->ifname);

  if (FUNC_1(VAR_6 - VAR_5, VAR_4)) {
   *VAR_5 = '\0';
   break;
  }
  VAR_5 += VAR_4;
  VAR_7 = VAR_7->next;
 }
 return VAR_5 - VAR_2;
}
