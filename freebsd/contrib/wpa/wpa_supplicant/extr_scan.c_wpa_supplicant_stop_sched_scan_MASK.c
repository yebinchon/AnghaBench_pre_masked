
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1, VAR_0, "stopping sched_scan failed!");

  return -1;
 }

 return VAR_2;
}
