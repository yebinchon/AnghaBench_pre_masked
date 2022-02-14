
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ifname; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 char* FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (struct wpa_supplicant*,char*,size_t*) ;

__attribute__((used)) static char * FUNC_4(struct wpa_global *VAR_0,
         const char *VAR_1,
         char *VAR_2, size_t *VAR_3)
{
 struct wpa_supplicant *VAR_4;

 for (VAR_4 = VAR_0->ifaces; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_1, VAR_4->ifname) == 0)
   break;
 }

 if (VAR_4 == ((void*)0)) {
  char *VAR_5 = FUNC_1("FAIL-NO-IFNAME-MATCH\n");
  if (VAR_5)
   *VAR_3 = FUNC_2(VAR_5);
  else
   *VAR_3 = 1;
  return VAR_5;
 }

 return FUNC_3(VAR_4, VAR_2, VAR_3);
}
