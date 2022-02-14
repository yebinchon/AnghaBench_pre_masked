
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct scanreq {int space; struct ieee80211req_scan_result* sr; } ;
struct ieee80211req_scan_result {int isr_len; int isr_ie_off; int isr_ie_len; int isr_nrates; int isr_ssid_len; int isr_meshid_len; int * isr_rates; int isr_bssid; int isr_erp; int isr_capinfo; int isr_intval; int isr_noise; int isr_rssi; int isr_flags; int isr_freq; } ;
struct TYPE_4__ {int* data; } ;
struct ieee80211_scan_entry {int* se_ssid; int* se_rates; int* se_xrates; int* se_meshid; TYPE_2__ se_ies; int se_bssid; int se_erp; int se_capinfo; int se_intval; int se_noise; int se_rssi; TYPE_1__* se_chan; } ;
struct TYPE_3__ {int ic_flags; int ic_freq; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct ieee80211_scan_entry const*,int*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, const struct ieee80211_scan_entry *VAR_2)
{
 struct scanreq *VAR_3 = VAR_1;
 struct ieee80211req_scan_result *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 uint8_t *VAR_9;

 VAR_6 = FUNC_4(VAR_2, &VAR_5);
 if (VAR_6 > VAR_3->space)
  return;

 VAR_4 = VAR_3->sr;
 FUNC_1(VAR_6 <= 65535 && VAR_5 <= 65535,
     ("len %u ssid %u ie %u", VAR_6, VAR_2->se_ssid[1], VAR_5));
 VAR_4->isr_len = VAR_6;
 VAR_4->isr_ie_off = sizeof(struct ieee80211req_scan_result);
 VAR_4->isr_ie_len = VAR_5;
 VAR_4->isr_freq = VAR_2->se_chan->ic_freq;
 VAR_4->isr_flags = VAR_2->se_chan->ic_flags;
 VAR_4->isr_rssi = VAR_2->se_rssi;
 VAR_4->isr_noise = VAR_2->se_noise;
 VAR_4->isr_intval = VAR_2->se_intval;
 VAR_4->isr_capinfo = VAR_2->se_capinfo;
 VAR_4->isr_erp = VAR_2->se_erp;
 FUNC_0(VAR_4->isr_bssid, VAR_2->se_bssid);
 VAR_7 = FUNC_3(VAR_2->se_rates[1], VAR_0);
 FUNC_2(VAR_4->isr_rates, VAR_2->se_rates+2, VAR_7);
 VAR_8 = FUNC_3(VAR_2->se_xrates[1], VAR_0 - VAR_7);
 FUNC_2(VAR_4->isr_rates+VAR_7, VAR_2->se_xrates+2, VAR_8);
 VAR_4->isr_nrates = VAR_7 + VAR_8;


 VAR_4->isr_ssid_len = VAR_2->se_ssid[1];
 VAR_9 = ((uint8_t *)VAR_4) + VAR_4->isr_ie_off;
 FUNC_2(VAR_9, VAR_2->se_ssid+2, VAR_4->isr_ssid_len);


 VAR_9 += VAR_4->isr_ssid_len;
 VAR_4->isr_meshid_len = VAR_2->se_meshid[1];
 FUNC_2(VAR_9, VAR_2->se_meshid+2, VAR_4->isr_meshid_len);
 VAR_9 += VAR_4->isr_meshid_len;

 if (VAR_5)
  FUNC_2(VAR_9, VAR_2->se_ies.data, VAR_5);

 VAR_3->space -= VAR_6;
 VAR_3->sr = (struct ieee80211req_scan_result *)(((uint8_t *)VAR_4) + VAR_6);
}
