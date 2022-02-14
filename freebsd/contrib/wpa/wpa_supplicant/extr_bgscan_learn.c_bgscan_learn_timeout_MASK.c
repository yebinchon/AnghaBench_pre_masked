
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct wpa_driver_scan_params {int num_ssids; int* freqs; TYPE_1__* ssids; } ;
struct bgscan_learn_data {int last_bgscan; int scan_interval; TYPE_2__* ssid; struct wpa_supplicant* wpa_s; } ;
typedef int params ;
typedef int msg ;
struct TYPE_4__ {int* scan_freq; int ssid_len; int ssid; } ;
struct TYPE_3__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int* FUNC_0 (struct bgscan_learn_data*,size_t*) ;
 int* FUNC_1 (struct bgscan_learn_data*,int*,size_t) ;
 int FUNC_2 (int ,int ,void (*) (void*,void*),struct bgscan_learn_data*,int *) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_6 (char*,int,char*,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;

__attribute__((used)) static void FUNC_10(void *VAR_1, void *VAR_2)
{
 struct bgscan_learn_data *VAR_3 = VAR_1;
 struct wpa_supplicant *VAR_4 = VAR_3->wpa_s;
 struct wpa_driver_scan_params VAR_5;
 int *VAR_6 = ((void*)0);
 size_t VAR_7, VAR_8;
 char VAR_9[100], *VAR_10;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.num_ssids = 1;
 VAR_5.ssids[0].ssid = VAR_3->ssid->ssid;
 VAR_5.ssids[0].ssid_len = VAR_3->ssid->ssid_len;
 if (VAR_3->ssid->scan_freq)
  VAR_5.freqs = VAR_3->ssid->scan_freq;
 else {
  VAR_6 = FUNC_0(VAR_3, &VAR_7);
  FUNC_8(VAR_0, "bgscan learn: BSSes in this ESS have "
      "been seen on %u channels", (unsigned int) VAR_7);
  VAR_6 = FUNC_1(VAR_3, VAR_6, VAR_7);

  VAR_9[0] = '\0';
  VAR_10 = VAR_9;
  for (VAR_8 = 0; VAR_6 && VAR_6[VAR_8]; VAR_8++) {
   int VAR_11;
   VAR_11 = FUNC_6(VAR_10, VAR_9 + sizeof(VAR_9) - VAR_10, " %d",
       VAR_6[VAR_8]);
   if (FUNC_7(VAR_9 + sizeof(VAR_9) - VAR_10, VAR_11))
    break;
   VAR_10 += VAR_11;
  }
  VAR_10[0] = '\0';
  FUNC_8(VAR_0, "bgscan learn: Scanning frequencies:%s",
      VAR_9);
  VAR_5.freqs = VAR_6;
 }

 FUNC_8(VAR_0, "bgscan learn: Request a background scan");
 if (FUNC_9(VAR_4, &VAR_5)) {
  FUNC_8(VAR_0, "bgscan learn: Failed to trigger scan");
  FUNC_2(VAR_3->scan_interval, 0,
           FUNC_10, VAR_3, ((void*)0));
 } else
  FUNC_4(&VAR_3->last_bgscan);
 FUNC_3(VAR_6);
}
