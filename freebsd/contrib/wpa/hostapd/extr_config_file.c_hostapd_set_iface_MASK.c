
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_config {size_t num_bss; int * bss; } ;
struct hostapd_bss_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostapd_config*,int ) ;
 int FUNC_1 (struct hostapd_config*,struct hostapd_bss_config*,char const*,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct hostapd_config *VAR_2,
        struct hostapd_bss_config *VAR_3, const char *VAR_4,
        char *VAR_5)
{
 int VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0);
 if (VAR_6) {
  FUNC_3(VAR_1, "Failed to set configuration field '%s' "
      "to value '%s'", VAR_4, VAR_5);
  return -1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->num_bss; VAR_7++)
  FUNC_2(VAR_2->bss[VAR_7], 0);

 if (FUNC_0(VAR_2, 0)) {
  FUNC_3(VAR_0, "Configuration check failed");
  return -1;
 }

 return 0;
}
