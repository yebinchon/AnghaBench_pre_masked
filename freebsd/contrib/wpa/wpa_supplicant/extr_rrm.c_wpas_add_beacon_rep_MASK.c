
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int duration; } ;
struct beacon_rep_data {scalar_t__ ssid_len; scalar_t__ report_detail; TYPE_1__ scan_params; int ssid; int bssid; } ;
struct wpa_supplicant {struct beacon_rep_data beacon_rep_data; } ;
struct wpa_bss {size_t ie_len; size_t beacon_ie_len; scalar_t__ ssid_len; int bssid; int level; int freq; int ssid; } ;
struct rrm_measurement_beacon_report {int rsni; int parent_tsf; scalar_t__ antenna_id; int bssid; int rcpi; int duration; int start_time; int report_info; int channel; int op_class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct beacon_rep_data*,struct wpa_bss*,struct wpabuf**,struct rrm_measurement_beacon_report*,scalar_t__**,size_t*,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*,size_t,int *,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct wpa_supplicant *VAR_3,
          struct wpabuf **VAR_4, struct wpa_bss *VAR_5,
          u64 VAR_6, u64 VAR_7)
{
 struct beacon_rep_data *VAR_8 = &VAR_3->beacon_rep_data;
 u8 *VAR_9 = (u8 *) (VAR_5 + 1);
 u8 *VAR_10 = VAR_9;
 size_t VAR_11 = VAR_5->ie_len ? VAR_5->ie_len : VAR_5->beacon_ie_len;
 struct rrm_measurement_beacon_report VAR_12;
 u8 VAR_13 = 0;

 if (FUNC_3(VAR_8->bssid, VAR_2, VAR_1) != 0 &&
     FUNC_3(VAR_8->bssid, VAR_5->bssid, VAR_1) != 0)
  return 0;

 if (VAR_8->ssid_len &&
     (VAR_8->ssid_len != VAR_5->ssid_len ||
      FUNC_3(VAR_8->ssid, VAR_5->ssid, VAR_5->ssid_len) != 0))
  return 0;

 if (FUNC_7(VAR_5->freq, VAR_9, VAR_11, &VAR_12.op_class,
     &VAR_12.channel, &VAR_12.report_info) < 0)
  return 0;

 VAR_12.start_time = FUNC_2(VAR_6);
 VAR_12.duration = FUNC_0(VAR_8->scan_params.duration);
 VAR_12.rcpi = FUNC_5(VAR_5->level);
 VAR_12.rsni = 255;
 FUNC_4(VAR_12.bssid, VAR_5->bssid, VAR_1);
 VAR_12.antenna_id = 0;
 VAR_12.parent_tsf = FUNC_1(VAR_7);

 do {
  int VAR_14;

  VAR_14 = FUNC_6(VAR_8, VAR_5, VAR_4, &VAR_12,
            &VAR_10, &VAR_11, VAR_13++);
  if (VAR_14)
   return VAR_14;
 } while (VAR_8->report_detail != VAR_0 &&
   VAR_11 >= 2);

 return 0;
}
