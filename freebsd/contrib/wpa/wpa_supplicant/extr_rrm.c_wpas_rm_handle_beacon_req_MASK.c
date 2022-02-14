
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {int dst_addr; } ;
struct wpa_driver_scan_params {int duration_mandatory; int only_new_results; size_t num_ssids; TYPE_1__* ssids; void* duration; int freqs; } ;
struct beacon_rep_data {size_t token; int ssid_len; int ssid; int bssid; int report_detail; struct wpa_driver_scan_params scan_params; } ;
struct wpa_supplicant {TYPE_2__ rrm; struct beacon_rep_data beacon_rep_data; } ;
struct rrm_measurement_beacon_request {scalar_t__ mode; size_t* variable; int duration; int channel; int oper_class; int bssid; int rand_interval; } ;
typedef int _rand ;
struct TYPE_3__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpabuf**) ;
 int FUNC_10 (struct wpa_supplicant*,int ,int ,int,size_t*,size_t) ;
 int FUNC_11 (struct wpa_supplicant*) ;
 int FUNC_12 (struct wpa_supplicant*,struct beacon_rep_data*,size_t const,size_t const,size_t const*) ;
 scalar_t__ FUNC_13 (struct wpabuf**,size_t,size_t,int ,int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_14(struct wpa_supplicant *VAR_10,
     u8 VAR_11, int VAR_12,
     const struct rrm_measurement_beacon_request *VAR_13,
     size_t VAR_14, struct wpabuf **VAR_15)
{
 struct beacon_rep_data *VAR_16 = &VAR_10->beacon_rep_data;
 struct wpa_driver_scan_params *VAR_17 = &VAR_16->scan_params;
 const u8 *VAR_18;
 size_t VAR_19;
 u16 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 int VAR_23 = 0, VAR_24;
 u8 VAR_25;

 if (VAR_14 < sizeof(*VAR_13))
  return -1;

 if (VAR_13->mode != VAR_2 &&
     VAR_13->mode != VAR_1 &&
     VAR_13->mode != VAR_3)
  return 0;

 VAR_18 = VAR_13->variable;
 VAR_19 = VAR_14 - sizeof(*VAR_13);
 VAR_20 = FUNC_2(VAR_13->rand_interval);

 FUNC_3(VAR_17->freqs);
 FUNC_6(VAR_17, 0, sizeof(*VAR_17));

 VAR_16->token = VAR_11;



 VAR_16->report_detail = VAR_0;
 FUNC_5(VAR_16->bssid, VAR_13->bssid, VAR_4);

 while (VAR_19 >= 2) {
  if (VAR_18[1] > VAR_19 - 2) {
   FUNC_8(VAR_8,
       "Beacon Request: Truncated subelement");
   VAR_23 = -1;
   goto out;
  }

  VAR_24 = FUNC_12(
   VAR_10, VAR_16, VAR_18[0], VAR_18[1], &VAR_18[2]);
  if (VAR_24 < 0) {
   VAR_23 = VAR_24;
   goto out;
  } else if (!VAR_24) {
   VAR_25 = VAR_5;
   goto out_reject;
  }

  VAR_19 -= 2 + VAR_18[1];
  VAR_18 += 2 + VAR_18[1];
 }

 if (VAR_13->mode == VAR_3) {
  FUNC_9(VAR_10, VAR_15);
  goto out;
 }

 VAR_17->freqs = FUNC_10(
  VAR_10, VAR_13->oper_class, VAR_13->channel,
  VAR_13->mode == VAR_1,
  VAR_13->variable, VAR_14 - sizeof(*VAR_13));
 if (!VAR_17->freqs) {
  FUNC_8(VAR_8, "Beacon request: No valid channels");
  VAR_25 = VAR_6;
  goto out_reject;
 }

 VAR_17->duration = FUNC_2(VAR_13->duration);
 VAR_17->duration_mandatory = VAR_12;
 if (!VAR_17->duration) {
  FUNC_8(VAR_8, "Beacon request: Duration is 0");
  VAR_23 = -1;
  goto out;
 }

 VAR_17->only_new_results = 1;

 if (VAR_13->mode == VAR_1) {
  VAR_17->ssids[VAR_17->num_ssids].ssid = VAR_16->ssid;
  VAR_17->ssids[VAR_17->num_ssids++].ssid_len = VAR_16->ssid_len;
 }

 if (FUNC_4((u8 *) &VAR_22, sizeof(VAR_22)) < 0)
  VAR_22 = FUNC_7();
 VAR_21 = (VAR_22 % (VAR_20 + 1)) * 1024;
 FUNC_0(0, VAR_21, VAR_9, VAR_10,
          ((void*)0));
 return 1;
out_reject:
 if (!FUNC_1(VAR_10->rrm.dst_addr) &&
     FUNC_13(VAR_15, VAR_11, VAR_25,
     VAR_7, ((void*)0), 0) < 0) {
  FUNC_8(VAR_8, "RRM: Failed to add report element");
  VAR_23 = -1;
 }
out:
 FUNC_11(VAR_10);
 return VAR_23;
}
