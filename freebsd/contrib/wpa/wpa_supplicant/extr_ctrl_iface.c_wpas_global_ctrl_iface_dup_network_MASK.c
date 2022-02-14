
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ifname; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 unsigned int FUNC_0 (struct wpa_supplicant**) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct wpa_supplicant*,char*,struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_5(struct wpa_global *VAR_1,
           char *VAR_2)
{
 struct wpa_supplicant *VAR_3[2];
 char *VAR_4;
 unsigned int VAR_5;




 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3) ; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, ' ');
  if (VAR_4 == ((void*)0))
   return -1;
  *VAR_4 = '\0';

  VAR_3[VAR_5] = VAR_1->ifaces;
  for (; VAR_3[VAR_5]; VAR_3[VAR_5] = VAR_3[VAR_5]->next) {
   if (FUNC_2(VAR_2, VAR_3[VAR_5]->ifname) == 0)
    break;
  }

  if (!VAR_3[VAR_5]) {
   FUNC_3(VAR_0,
       "CTRL_IFACE: Could not find iface=%s", VAR_2);
   return -1;
  }

  VAR_2 = VAR_4 + 1;
 }

 return FUNC_4(VAR_3[0], VAR_2, VAR_3[1]);
}
