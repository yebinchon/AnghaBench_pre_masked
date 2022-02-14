
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int* manual_sched_scan_freqs; } ;


 scalar_t__ FUNC_0 (char*) ;
 int* FUNC_1 (struct wpa_supplicant*,char*) ;
 int FUNC_2 (int*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_7(struct wpa_supplicant *VAR_0, char *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 int *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_0(VAR_1)) {
  VAR_2 = FUNC_3(VAR_1, ' ');
  FUNC_2(VAR_0->manual_sched_scan_freqs);
  if (VAR_2) {
   VAR_2++;
   VAR_3 = FUNC_4(VAR_2, "freq=");
   if (VAR_3)
    VAR_4 = FUNC_1(VAR_0,
           VAR_3 + 5);
  }
  VAR_0->manual_sched_scan_freqs = VAR_4;
  VAR_5 = FUNC_5(VAR_0);
 } else {
  VAR_5 = FUNC_6(VAR_0);
 }
 return VAR_5;
}
