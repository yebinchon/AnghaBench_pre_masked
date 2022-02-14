
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {int no_of_pmkid; struct ndis_pmkid_entry* pmkid; } ;
struct ndis_pmkid_entry {struct ndis_pmkid_entry* next; int pmkid; int bssid; } ;
struct TYPE_6__ {int Length; int BSSIDInfoCount; TYPE_1__* BSSIDInfo; } ;
struct TYPE_5__ {int PMKID; int BSSID; } ;
typedef TYPE_2__ NDIS_802_11_PMKID ;
typedef int BSSID_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct wpa_driver_ndis_data *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct ndis_pmkid_entry *VAR_8;
 NDIS_802_11_PMKID *VAR_9;

 VAR_5 = 0;
 VAR_8 = VAR_3->pmkid;
 while (VAR_8) {
  VAR_5++;
  if (VAR_5 >= VAR_3->no_of_pmkid)
   break;
  VAR_8 = VAR_8->next;
 }
 VAR_4 = 8 + VAR_5 * sizeof(BSSID_INFO);
 VAR_9 = FUNC_3(VAR_4);
 if (VAR_9 == ((void*)0))
  return -1;

 VAR_9->Length = VAR_4;
 VAR_9->BSSIDInfoCount = VAR_5;
 VAR_8 = VAR_3->pmkid;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_2(&VAR_9->BSSIDInfo[VAR_6].BSSID, VAR_8->bssid, VAR_0);
  FUNC_2(&VAR_9->BSSIDInfo[VAR_6].PMKID, VAR_8->pmkid, 16);
  VAR_8 = VAR_8->next;
 }
 FUNC_4(VAR_1, "NDIS: OID_802_11_PMKID", (u8 *) VAR_9, VAR_4);
 VAR_7 = FUNC_0(VAR_3, VAR_2, (char *) VAR_9, VAR_4);
 FUNC_1(VAR_9);
 return VAR_7;
}
