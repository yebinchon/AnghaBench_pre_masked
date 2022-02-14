
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int last_tspecs_count; int *** tspecs; int * last_tspecs; int wmm_ac_assoc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int ,char*,...) ;

void FUNC_4(struct wpa_supplicant *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_3(VAR_0, "WMM AC: Save last configured tspecs");

 if (!VAR_4->wmm_ac_assoc_info)
  return;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7) {
  FUNC_3(VAR_0, "WMM AC: No configured TSPECs");
  return;
 }

 FUNC_3(VAR_0, "WMM AC: Saving tspecs");

 FUNC_1(VAR_4);
 VAR_4->last_tspecs = FUNC_0(VAR_7,
           sizeof(*VAR_4->last_tspecs));
 if (!VAR_4->last_tspecs) {
  FUNC_3(VAR_1, "WMM AC: Failed to save tspecs!");
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   if (!VAR_4->tspecs[VAR_5][VAR_6])
    continue;

   VAR_4->last_tspecs[VAR_4->last_tspecs_count++] =
    *VAR_4->tspecs[VAR_5][VAR_6];
  }
 }

 FUNC_3(VAR_0, "WMM AC: Successfully saved %d TSPECs",
     VAR_4->last_tspecs_count);
}
