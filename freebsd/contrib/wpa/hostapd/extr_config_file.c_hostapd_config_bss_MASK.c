
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_config {struct hostapd_bss_config* last_bss; scalar_t__ num_bss; struct hostapd_bss_config** bss; } ;
struct TYPE_2__ {int vlan; } ;
struct hostapd_bss_config {int iface; TYPE_1__ ssid; int * radius; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_bss_config*) ;
 int FUNC_1 (struct hostapd_bss_config*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct hostapd_bss_config** FUNC_3 (struct hostapd_bss_config**,scalar_t__,int) ;
 int FUNC_4 (int ,char const*,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct hostapd_config *VAR_2, const char *VAR_3)
{
 struct hostapd_bss_config **VAR_4, *VAR_5;

 if (*VAR_3 == '\0')
  return -1;

 VAR_4 = FUNC_3(VAR_2->bss, VAR_2->num_bss + 1,
          sizeof(struct hostapd_bss_config *));
 if (VAR_4 == ((void*)0)) {
  FUNC_6(VAR_1, "Failed to allocate memory for "
      "multi-BSS entry");
  return -1;
 }
 VAR_2->bss = VAR_4;

 VAR_5 = FUNC_5(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -1;
 VAR_5->radius = FUNC_5(sizeof(*VAR_5->radius));
 if (VAR_5->radius == ((void*)0)) {
  FUNC_6(VAR_1, "Failed to allocate memory for "
      "multi-BSS RADIUS data");
  FUNC_1(VAR_5);
  return -1;
 }

 VAR_2->bss[VAR_2->num_bss++] = VAR_5;
 VAR_2->last_bss = VAR_5;

 FUNC_0(VAR_5);
 FUNC_4(VAR_5->iface, VAR_3, sizeof(VAR_5->iface));
 FUNC_2(VAR_5->ssid.vlan, VAR_5->iface, VAR_0 + 1);

 return 0;
}
