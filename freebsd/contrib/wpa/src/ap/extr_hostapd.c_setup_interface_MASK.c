
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; int wait_channel_update; struct hostapd_data** bss; int * phy; scalar_t__ driver_ap_teardown; } ;
struct hostapd_data {TYPE_1__* iconf; int drv_priv; int driver; } ;
struct TYPE_2__ {scalar_t__* country; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,struct hostapd_iface*,int *) ;
 char* FUNC_1 (struct hostapd_data*) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,char*) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,char*) ;
 int FUNC_4 (struct hostapd_iface*,int ) ;
 scalar_t__ FUNC_5 (struct hostapd_iface*) ;
 int FUNC_6 (char*,scalar_t__*,int) ;
 int FUNC_7 (int *,char const*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct hostapd_iface*) ;
 scalar_t__ FUNC_10 (struct hostapd_iface*) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(struct hostapd_iface *VAR_4)
{
 struct hostapd_data *VAR_5 = VAR_4->bss[0];
 size_t VAR_6;
 VAR_4->driver_ap_teardown = 0;

 if (!VAR_4->phy[0]) {
  const char *VAR_7 = FUNC_1(VAR_5);
  if (VAR_7) {
   FUNC_11(VAR_1, "phy: %s", VAR_7);
   FUNC_7(VAR_4->phy, VAR_7, sizeof(VAR_4->phy));
  }
 }





 for (VAR_6 = 1; VAR_6 < VAR_4->num_bss; VAR_6++) {
  VAR_4->bss[VAR_6]->driver = VAR_5->driver;
  VAR_4->bss[VAR_6]->drv_priv = VAR_5->drv_priv;
 }

 if (FUNC_5(VAR_4))
  return -1;






 if (FUNC_10(VAR_4))
  return -1;

 if (VAR_5->iconf->country[0] && VAR_5->iconf->country[1]) {
  char VAR_8[4], VAR_9[4];

  FUNC_4(VAR_4, VAR_0);
  if (FUNC_2(VAR_5, VAR_9) < 0)
   VAR_9[0] = '\0';

  FUNC_6(VAR_8, VAR_5->iconf->country, 3);
  VAR_8[3] = '\0';
  if (FUNC_3(VAR_5, VAR_8) < 0) {
   FUNC_11(VAR_2, "Failed to set country code");
   return -1;
  }

  FUNC_11(VAR_1, "Previous country code %s, new country code %s",
      VAR_9, VAR_8);

  if (FUNC_8(VAR_9, VAR_8, 2) != 0) {
   FUNC_11(VAR_1, "Continue interface setup after channel list update");
   VAR_4->wait_channel_update = 1;
   FUNC_0(5, 0,
            VAR_3,
            VAR_4, ((void*)0));
   return 0;
  }
 }

 return FUNC_9(VAR_4);
}
