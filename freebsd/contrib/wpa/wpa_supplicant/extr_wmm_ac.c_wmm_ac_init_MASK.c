
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wpa_supplicant {struct wmm_ac_assoc_data* wmm_ac_assoc_info; int * addts_request; scalar_t__ wmm_ac_last_dialog_token; int tspecs; } ;
struct wmm_params {int info_bitmap; int uapsd_queues; } ;
struct wmm_ac_assoc_data {TYPE_1__* ac_params; } ;
struct TYPE_2__ {int uapsd; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 struct wmm_ac_assoc_data* FUNC_2 (struct wpa_supplicant*,size_t const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_4, const u8 *VAR_5,
         size_t VAR_6, const struct wmm_params *VAR_7)
{
 struct wmm_ac_assoc_data *VAR_8;
 u8 VAR_9;

 if (VAR_4->wmm_ac_assoc_info) {
  FUNC_3(VAR_1, "WMM AC: Already initialized");
  return -1;
 }

 if (!VAR_5 || !(VAR_7->info_bitmap & VAR_3)) {

  return -1;
 }

 FUNC_1(VAR_4->tspecs, 0, sizeof(VAR_4->tspecs));
 VAR_4->wmm_ac_last_dialog_token = 0;
 VAR_4->addts_request = ((void*)0);

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (!VAR_8)
  return -1;

 FUNC_3(VAR_0, "WMM AC: U-APSD queues=0x%x",
     VAR_7->uapsd_queues);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8->ac_params[VAR_9].uapsd =
   !!(VAR_7->uapsd_queues & FUNC_0(VAR_9));
 }

 VAR_4->wmm_ac_assoc_info = VAR_8;
 return 0;
}
