
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int) ;
 int FUNC_1 (struct wpa_supplicant*,int) ;

int FUNC_2(struct wpa_supplicant *VAR_2,
         int VAR_3)
{
 if (VAR_3 < 0) {
  FUNC_0(VAR_2, VAR_1, "Invalid scan interval %d",
   VAR_3);
  return -1;
 }
 FUNC_0(VAR_2, VAR_0, "Setting scan interval: %d sec",
  VAR_3);
 FUNC_1(VAR_2, VAR_3);

 return 0;
}
