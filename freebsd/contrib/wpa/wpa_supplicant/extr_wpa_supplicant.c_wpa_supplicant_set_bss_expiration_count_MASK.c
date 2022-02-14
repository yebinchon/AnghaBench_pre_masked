
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int bss_expiration_scan_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,unsigned int) ;

int FUNC_1(struct wpa_supplicant *VAR_2,
         unsigned int VAR_3)
{
 if (VAR_3 < 1) {
  FUNC_0(VAR_2, VAR_1, "Invalid bss expiration count %u",
   VAR_3);
  return -1;
 }
 FUNC_0(VAR_2, VAR_0, "Setting bss expiration scan count: %u",
  VAR_3);
 VAR_2->conf->bss_expiration_scan_count = VAR_3;

 return 0;
}
