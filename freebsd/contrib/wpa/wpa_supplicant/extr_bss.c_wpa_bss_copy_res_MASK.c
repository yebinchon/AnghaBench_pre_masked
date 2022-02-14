
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_res {int age; int snr; int est_throughput; int tsf; int level; int noise; int qual; int caps; int beacon_int; int freq; int bssid; int flags; } ;
struct wpa_bss {int last_update; int snr; int est_throughput; int tsf; int level; int noise; int qual; int caps; int beacon_int; int freq; int bssid; int flags; } ;
struct os_reltime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct os_reltime*,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wpa_bss *VAR_1, struct wpa_scan_res *VAR_2,
        struct os_reltime *VAR_3)
{
 VAR_1->flags = VAR_2->flags;
 FUNC_1(VAR_1->bssid, VAR_2->bssid, VAR_0);
 VAR_1->freq = VAR_2->freq;
 VAR_1->beacon_int = VAR_2->beacon_int;
 VAR_1->caps = VAR_2->caps;
 VAR_1->qual = VAR_2->qual;
 VAR_1->noise = VAR_2->noise;
 VAR_1->level = VAR_2->level;
 VAR_1->tsf = VAR_2->tsf;
 VAR_1->est_throughput = VAR_2->est_throughput;
 VAR_1->snr = VAR_2->snr;

 FUNC_0(VAR_3, VAR_2->age, &VAR_1->last_update);
}
