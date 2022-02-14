
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct wpa_blacklist* blacklist; } ;
struct wpa_blacklist {struct wpa_blacklist* next; int bssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

struct wpa_blacklist * FUNC_1(struct wpa_supplicant *VAR_1,
      const u8 *VAR_2)
{
 struct wpa_blacklist *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_1->blacklist;
 while (VAR_3) {
  if (FUNC_0(VAR_3->bssid, VAR_2, VAR_0) == 0)
   return VAR_3;
  VAR_3 = VAR_3->next;
 }

 return ((void*)0);
}
