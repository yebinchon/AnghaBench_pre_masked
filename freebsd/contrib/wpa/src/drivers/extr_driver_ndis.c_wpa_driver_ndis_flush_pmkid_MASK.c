
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {scalar_t__ no_of_pmkid; struct ndis_pmkid_entry* pmkid; } ;
struct ndis_pmkid_entry {struct ndis_pmkid_entry* next; } ;
typedef int p ;
struct TYPE_3__ {int Length; scalar_t__ BSSIDInfoCount; } ;
typedef TYPE_1__ NDIS_802_11_PMKID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_driver_ndis_data*) ;
 int FUNC_1 (struct wpa_driver_ndis_data*,int) ;
 int FUNC_2 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_3 (struct ndis_pmkid_entry*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct wpa_driver_ndis_data *VAR_4 = VAR_3;
 NDIS_802_11_PMKID VAR_5;
 struct ndis_pmkid_entry *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4->no_of_pmkid == 0)
  return 0;

 VAR_6 = VAR_4->pmkid;
 VAR_4->pmkid = ((void*)0);
 while (VAR_6) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
  FUNC_3(VAR_7);
 }





 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 != VAR_1)
  FUNC_1(VAR_4, VAR_1);

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.Length = 8;
 VAR_5.BSSIDInfoCount = 0;
 FUNC_5(VAR_0, "NDIS: OID_802_11_PMKID (flush)",
      (u8 *) &VAR_5, 8);
 VAR_9 = FUNC_2(VAR_4, VAR_2, (char *) &VAR_5, 8);

 if (VAR_8 != VAR_1)
  FUNC_1(VAR_4, VAR_8);

 return VAR_9;
}
