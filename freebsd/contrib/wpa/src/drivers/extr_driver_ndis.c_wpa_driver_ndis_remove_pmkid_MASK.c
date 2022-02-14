
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_pmkid_params {int * pmkid; int * bssid; } ;
struct wpa_driver_ndis_data {scalar_t__ no_of_pmkid; struct ndis_pmkid_entry* pmkid; } ;
struct ndis_pmkid_entry {struct ndis_pmkid_entry* next; int pmkid; int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ndis_pmkid_entry*) ;
 scalar_t__ FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct wpa_driver_ndis_data*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1,
     struct wpa_pmkid_params *VAR_2)
{
 struct wpa_driver_ndis_data *VAR_3 = VAR_1;
 struct ndis_pmkid_entry *VAR_4, *VAR_5;
 const u8 *VAR_6 = VAR_2->bssid;
 const u8 *VAR_7 = VAR_2->pmkid;

 if (!VAR_6 || !VAR_7)
  return -1;
 if (VAR_3->no_of_pmkid == 0)
  return 0;

 VAR_4 = VAR_3->pmkid;
 VAR_5 = ((void*)0);
 while (VAR_4) {
  if (FUNC_1(VAR_4->bssid, VAR_6, VAR_0) == 0 &&
      FUNC_1(VAR_4->pmkid, VAR_7, 16) == 0) {
   if (VAR_5)
    VAR_5->next = VAR_4->next;
   else
    VAR_3->pmkid = VAR_4->next;
   FUNC_0(VAR_4);
   break;
  }
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
 }
 return FUNC_2(VAR_3);
}
