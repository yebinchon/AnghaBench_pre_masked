
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {int rrm_used; } ;
struct wpa_supplicant {scalar_t__ wpa_state; int drv_rrm_flags; int bssid; int own_addr; int assoc_freq; TYPE_1__ rrm; } ;
struct rrm_link_measurement_request {int dialog_token; } ;
struct TYPE_4__ {int len; int eid; } ;
struct rrm_link_measurement_report {int rsni; int rcpi; TYPE_2__ tpc; int dialog_token; } ;
typedef int report ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rrm_link_measurement_report*,int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ,int ,int const*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;
 struct wpabuf* FUNC_5 (int) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,struct rrm_link_measurement_report*,int) ;
 int FUNC_10 (struct wpabuf*,int ) ;

void FUNC_11(struct wpa_supplicant *VAR_8,
           const u8 *VAR_9,
           const u8 *VAR_10, size_t VAR_11,
           int VAR_12)
{
 struct wpabuf *VAR_13;
 const struct rrm_link_measurement_request *VAR_14;
 struct rrm_link_measurement_report VAR_15;

 if (VAR_8->wpa_state != VAR_6) {
  FUNC_4(VAR_2,
      "RRM: Ignoring link measurement request. Not associated");
  return;
 }

 if (!VAR_8->rrm.rrm_used) {
  FUNC_4(VAR_2,
      "RRM: Ignoring link measurement request. Not RRM network");
  return;
 }

 if (!(VAR_8->drv_rrm_flags & VAR_7)) {
  FUNC_4(VAR_2,
      "RRM: Measurement report failed. TX power insertion not supported");
  return;
 }

 VAR_14 = (const struct rrm_link_measurement_request *) VAR_10;
 if (VAR_11 < sizeof(*VAR_14)) {
  FUNC_4(VAR_2,
      "RRM: Link measurement report failed. Request too short");
  return;
 }

 FUNC_0(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.dialog_token = VAR_14->dialog_token;
 VAR_15.tpc.eid = VAR_4;
 VAR_15.tpc.len = 2;




 VAR_15.rsni = 255;
 VAR_15.rcpi = FUNC_1(VAR_12);


 VAR_13 = FUNC_5(2 + sizeof(VAR_15));
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_1,
      "RRM: Link measurement report failed. Buffer allocation failed");
  return;
 }

 FUNC_10(VAR_13, VAR_3);
 FUNC_10(VAR_13, VAR_5);
 FUNC_9(VAR_13, &VAR_15, sizeof(VAR_15));
 FUNC_3(VAR_0, "RRM: Link measurement report", VAR_13);

 if (FUNC_2(VAR_8, VAR_8->assoc_freq, 0, VAR_9,
    VAR_8->own_addr, VAR_8->bssid,
    FUNC_7(VAR_13), FUNC_8(VAR_13), 0)) {
  FUNC_4(VAR_1,
      "RRM: Link measurement report failed. Send action failed");
 }
 FUNC_6(VAR_13);
}
