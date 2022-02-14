
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {int num_bss; struct hostapd_data** bss; TYPE_2__* conf; struct hapd_interfaces* interfaces; int phy; } ;
struct hostapd_data {char* iface; TYPE_1__* conf; struct hostapd_data* msg_ctx; } ;
struct hostapd_config {int num_bss; struct hostapd_data** bss; } ;
struct hostapd_bss_config {char* iface; TYPE_1__* conf; struct hostapd_bss_config* msg_ctx; } ;
struct hapd_interfaces {size_t count; struct hostapd_config* (* config_read_cb ) (char const*) ;struct hostapd_iface** iface; } ;
struct TYPE_4__ {int num_bss; struct hostapd_data** bss; struct hostapd_data* last_bss; } ;
struct TYPE_3__ {scalar_t__ logger_stdout_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostapd_data* FUNC_0 (struct hostapd_iface*,TYPE_2__*,struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_config*) ;
 int FUNC_2 (struct hostapd_data*) ;
 struct hostapd_iface* FUNC_3 (struct hapd_interfaces*,char const*) ;
 int FUNC_4 (struct hostapd_iface*) ;
 scalar_t__ FUNC_5 (struct hapd_interfaces*,char const*) ;
 void* FUNC_6 (struct hostapd_data**,int,int) ;
 scalar_t__ FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*,int) ;
 struct hostapd_config* FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*,...) ;

struct hostapd_iface *
FUNC_11(struct hapd_interfaces *VAR_2, const char *VAR_3,
      const char *VAR_4, int VAR_5)
{
 struct hostapd_iface *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct hostapd_data *VAR_8;
 int VAR_9;
 size_t VAR_10, VAR_11;

 if (!VAR_3 || !*VAR_3)
  return ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_2->count; VAR_10++) {
  if (FUNC_7(VAR_2->iface[VAR_10]->phy, VAR_3) == 0) {
   VAR_7 = VAR_2->iface[VAR_10];
   break;
  }
 }

 FUNC_10(VAR_1, "Configuration file: %s (phy %s)%s",
     VAR_4, VAR_3, VAR_7 ? "" : " --> new PHY");
 if (VAR_7) {
  struct hostapd_config *VAR_12;
  struct hostapd_bss_config **VAR_13;
  struct hostapd_data **VAR_14;
  struct hostapd_bss_config *VAR_15;
  const char *VAR_16;


  VAR_12 = VAR_2->config_read_cb(VAR_4);
  if (VAR_12 == ((void*)0))
   return ((void*)0);
  if (VAR_12->num_bss > 1) {
   FUNC_10(VAR_0, "Multiple BSSes specified in BSS-config");
   FUNC_1(VAR_12);
   return ((void*)0);
  }

  VAR_16 = VAR_12->bss[0]->iface;
  if (VAR_16[0] != '\0' && FUNC_5(VAR_2, VAR_16)) {
   FUNC_10(VAR_0,
       "Interface name %s already in use", VAR_16);
   FUNC_1(VAR_12);
   return ((void*)0);
  }

  VAR_13 = FUNC_6(
   VAR_7->conf->bss, VAR_7->conf->num_bss + 1,
   sizeof(struct hostapd_bss_config *));
  VAR_14 = FUNC_6(VAR_7->bss, VAR_7->num_bss + 1,
        sizeof(struct hostapd_data *));
  if (VAR_14)
   VAR_7->bss = VAR_14;
  if (VAR_13) {
   VAR_7->conf->bss = VAR_13;
   VAR_7->conf->last_bss = VAR_13[0];
  }
  if (VAR_14 == ((void*)0) || VAR_13 == ((void*)0)) {
   FUNC_1(VAR_12);
   return ((void*)0);
  }
  VAR_15 = VAR_7->conf->bss[VAR_7->conf->num_bss] = VAR_12->bss[0];
  VAR_7->conf->num_bss++;

  VAR_8 = FUNC_0(VAR_7, VAR_7->conf, VAR_15);
  if (VAR_8 == ((void*)0)) {
   VAR_7->conf->num_bss--;
   FUNC_1(VAR_12);
   return ((void*)0);
  }
  VAR_7->conf->last_bss = VAR_15;
  VAR_7->bss[VAR_7->num_bss] = VAR_8;
  VAR_8->msg_ctx = VAR_8;

  VAR_11 = VAR_7->num_bss++;
  VAR_12->num_bss--;
  VAR_12->bss[0] = ((void*)0);
  FUNC_1(VAR_12);
 } else {

  VAR_6 = VAR_7 = FUNC_3(VAR_2, VAR_4);
  if (!VAR_7)
   return ((void*)0);
  FUNC_8(VAR_7->phy, VAR_3, sizeof(VAR_7->phy));
  VAR_7->interfaces = VAR_2;
  VAR_11 = 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_7->bss[VAR_11]->conf->logger_stdout_level > 0)
   VAR_7->bss[VAR_11]->conf->logger_stdout_level--;
 }

 if (VAR_7->conf->bss[VAR_11]->iface[0] == '\0' &&
     !FUNC_2(VAR_7->bss[VAR_11])) {
  FUNC_10(VAR_0, "Interface name not specified in %s",
      VAR_4);
  if (VAR_6)
   FUNC_4(VAR_6);
  return ((void*)0);
 }

 return VAR_7;
}
