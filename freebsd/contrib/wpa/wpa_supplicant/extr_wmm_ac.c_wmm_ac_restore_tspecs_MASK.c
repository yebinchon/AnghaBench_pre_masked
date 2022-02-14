
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int last_tspecs_count; int * last_tspecs; int bssid; int wmm_ac_assoc_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int *) ;
 int FUNC_1 (int ,char*,unsigned int) ;

int FUNC_2(struct wpa_supplicant *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->wmm_ac_assoc_info || !VAR_1->last_tspecs_count)
  return 0;

 FUNC_1(VAR_0, "WMM AC: Restore %u saved tspecs",
     VAR_1->last_tspecs_count);

 for (VAR_2 = 0; VAR_2 < VAR_1->last_tspecs_count; VAR_2++)
  FUNC_0(VAR_1, VAR_1->bssid, &VAR_1->last_tspecs[VAR_2]);

 return 0;
}
