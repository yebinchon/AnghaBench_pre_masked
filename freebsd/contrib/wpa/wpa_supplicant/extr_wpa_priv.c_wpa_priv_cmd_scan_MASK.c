
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_priv_interface {int * drv_priv; TYPE_2__* driver; } ;
struct wpa_driver_scan_params {unsigned int num_ssids; int* freqs; TYPE_1__* ssids; } ;
struct privsep_cmd_scan {unsigned int num_ssids; int num_freqs; int* freqs; int * ssid_lens; int * ssids; } ;
typedef int params ;
struct TYPE_4__ {int (* scan2 ) (int *,struct wpa_driver_scan_params*) ;} ;
struct TYPE_3__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_1 (int *,struct wpa_driver_scan_params*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_priv_interface *VAR_3,
         void *VAR_4, size_t VAR_5)
{
 struct wpa_driver_scan_params VAR_6;
 struct privsep_cmd_scan *VAR_7;
 unsigned int VAR_8;
 int VAR_9[VAR_1 + 1];

 if (VAR_3->drv_priv == ((void*)0))
  return;

 if (VAR_5 < sizeof(*VAR_7)) {
  FUNC_2(VAR_0, "Invalid scan request");
  return;
 }

 VAR_7 = VAR_4;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_7->num_ssids > VAR_2) {
  FUNC_2(VAR_0, "Invalid scan request (num_ssids)");
  return;
 }
 VAR_6.num_ssids = VAR_7->num_ssids;
 for (VAR_8 = 0; VAR_8 < VAR_7->num_ssids; VAR_8++) {
  VAR_6.ssids[VAR_8].ssid = VAR_7->ssids[VAR_8];
  VAR_6.ssids[VAR_8].ssid_len = VAR_7->ssid_lens[VAR_8];
 }

 if (VAR_7->num_freqs > VAR_1) {
  FUNC_2(VAR_0, "Invalid scan request (num_freqs)");
  return;
 }
 if (VAR_7->num_freqs) {
  for (VAR_8 = 0; VAR_8 < VAR_7->num_freqs; VAR_8++)
   VAR_9[VAR_8] = VAR_7->freqs[VAR_8];
  VAR_9[VAR_8] = 0;
  VAR_6.freqs = VAR_9;
 }

 if (VAR_3->driver->scan2)
  VAR_3->driver->scan2(VAR_3->drv_priv, &VAR_6);
}
