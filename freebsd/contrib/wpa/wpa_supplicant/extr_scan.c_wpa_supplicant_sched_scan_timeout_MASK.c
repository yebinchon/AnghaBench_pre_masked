
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int sched_scan_timed_out; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;

 FUNC_0(VAR_3, VAR_0, "Sched scan timeout - stopping it");

 VAR_3->sched_scan_timed_out = 1;
 FUNC_1(VAR_3);
}
