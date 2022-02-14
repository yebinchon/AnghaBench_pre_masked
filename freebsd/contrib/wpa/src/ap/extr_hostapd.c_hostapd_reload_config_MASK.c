
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; struct hostapd_config* conf; struct hapd_interfaces* interfaces; int * config_fname; } ;
struct hostapd_data {TYPE_1__* conf; struct hostapd_config* iconf; } ;
struct hostapd_config {TYPE_1__** bss; int vht_capab; int ht_capab; int ieee80211ac; int ieee80211n; int secondary_channel; int acs; int channel; } ;
struct hapd_interfaces {size_t count; struct hostapd_iface** iface; struct hostapd_config* (* config_read_cb ) (int *) ;} ;
struct TYPE_2__ {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_config*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (struct hostapd_config*) ;
 int FUNC_4 (struct hostapd_config*) ;
 int FUNC_5 (struct hostapd_config*) ;
 scalar_t__ FUNC_6 (struct hostapd_config*,struct hostapd_config*) ;
 struct hostapd_iface* FUNC_7 (struct hapd_interfaces*,char*) ;
 int FUNC_8 (struct hostapd_data*) ;
 int FUNC_9 (struct hapd_interfaces*,int ) ;
 int FUNC_10 (struct hostapd_config*,int ) ;
 int FUNC_11 (struct hostapd_config*,int ) ;
 int FUNC_12 (struct hostapd_config*,int ) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (int *) ;
 struct hostapd_config* FUNC_15 (int *) ;
 int FUNC_16 (int ,char*) ;

int FUNC_17(struct hostapd_iface *VAR_2)
{
 struct hapd_interfaces *VAR_3 = VAR_2->interfaces;
 struct hostapd_data *VAR_4 = VAR_2->bss[0];
 struct hostapd_config *VAR_5, *VAR_6;
 size_t VAR_7;

 if (VAR_2->config_fname == ((void*)0)) {

  FUNC_0(VAR_2);
  for (VAR_7 = 0; VAR_7 < VAR_2->num_bss; VAR_7++)
   FUNC_8(VAR_2->bss[VAR_7]);
  return 0;
 }

 if (VAR_2->interfaces == ((void*)0) ||
     VAR_2->interfaces->config_read_cb == ((void*)0))
  return -1;
 VAR_5 = VAR_2->interfaces->config_read_cb(VAR_2->config_fname);
 if (VAR_5 == ((void*)0))
  return -1;

 FUNC_0(VAR_2);

 VAR_6 = VAR_4->iconf;
 if (FUNC_6(VAR_5, VAR_6)) {
  char *VAR_8;
  int VAR_9;

  FUNC_16(VAR_0,
      "Configuration changes include interface/BSS modification - force full disable+enable sequence");
  VAR_8 = FUNC_14(VAR_2->config_fname);
  if (!VAR_8) {
   FUNC_1(VAR_5);
   return -1;
  }
  FUNC_9(VAR_3, VAR_4->conf->iface);
  VAR_2 = FUNC_7(VAR_3, VAR_8);
  FUNC_13(VAR_8);
  FUNC_1(VAR_5);
  if (!VAR_2) {
   FUNC_16(VAR_1,
       "Failed to initialize interface on config reload");
   return -1;
  }
  VAR_2->interfaces = VAR_3;
  VAR_3->iface[VAR_3->count] = VAR_2;
  VAR_3->count++;
  VAR_9 = FUNC_2(VAR_2);
  if (VAR_9 < 0)
   FUNC_16(VAR_1,
       "Failed to enable interface on config reload");
  return VAR_9;
 }
 VAR_2->conf = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_bss; VAR_7++) {
  VAR_4 = VAR_2->bss[VAR_7];
  VAR_4->iconf = VAR_5;
  VAR_4->iconf->channel = VAR_6->channel;
  VAR_4->iconf->acs = VAR_6->acs;
  VAR_4->iconf->secondary_channel = VAR_6->secondary_channel;
  VAR_4->iconf->ieee80211n = VAR_6->ieee80211n;
  VAR_4->iconf->ieee80211ac = VAR_6->ieee80211ac;
  VAR_4->iconf->ht_capab = VAR_6->ht_capab;
  VAR_4->iconf->vht_capab = VAR_6->vht_capab;
  FUNC_12(VAR_4->iconf,
      FUNC_5(VAR_6));
  FUNC_10(
   VAR_4->iconf,
   FUNC_3(VAR_6));
  FUNC_11(
   VAR_4->iconf,
   FUNC_4(VAR_6));
  VAR_4->conf = VAR_5->bss[VAR_7];
  FUNC_8(VAR_4);
 }

 FUNC_1(VAR_6);


 return 0;
}
