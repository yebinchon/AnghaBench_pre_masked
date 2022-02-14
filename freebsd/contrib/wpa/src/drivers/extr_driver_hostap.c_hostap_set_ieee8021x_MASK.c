
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss_params {int enabled; } ;
struct hostap_driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hostap_driver_data*,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct wpa_bss_params *VAR_4)
{
 struct hostap_driver_data *VAR_5 = VAR_3;
 int VAR_6 = VAR_4->enabled;


 if (FUNC_0(VAR_5, VAR_2, VAR_6)) {
  FUNC_1("Could not setup IEEE 802.1X support in kernel driver."
         "\n");
  return -1;
 }

 if (!VAR_6)
  return 0;



 if (FUNC_0(VAR_5, VAR_0, 1) ||
     FUNC_0(VAR_5, VAR_1, 1)) {
  FUNC_1("Could not setup host-based encryption in kernel "
         "driver.\n");
  return -1;
 }

 return 0;
}
