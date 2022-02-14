
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * radio; int ifname; TYPE_1__* conf; int * drv_priv; } ;
struct wpa_interface {char* driver; } ;
struct TYPE_2__ {int driver_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int * FUNC_3 (struct wpa_supplicant*,char const*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,...) ;
 char* FUNC_5 (struct wpa_supplicant*) ;
 char* FUNC_6 (struct wpa_supplicant*) ;
 int * FUNC_7 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,int ) ;
 int FUNC_9 (struct wpa_supplicant*,int ,char*,...) ;
 scalar_t__ FUNC_10 (struct wpa_supplicant*,char const*) ;

__attribute__((used)) static int FUNC_11(struct wpa_supplicant *VAR_2,
       const struct wpa_interface *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;

 VAR_5 = VAR_3->driver;
next_driver:
 if (FUNC_10(VAR_2, VAR_5) < 0)
  return -1;

 VAR_2->drv_priv = FUNC_7(VAR_2, VAR_2->ifname);
 if (VAR_2->drv_priv == ((void*)0)) {
  const char *VAR_7;
  VAR_7 = VAR_5 ? FUNC_0(VAR_5, ',') : ((void*)0);
  if (VAR_7) {
   FUNC_4(VAR_2, VAR_0, "Failed to initialize "
    "driver interface - try next driver wrapper");
   VAR_5 = VAR_7 + 1;
   goto next_driver;
  }
  FUNC_9(VAR_2, VAR_1, "Failed to initialize driver "
   "interface");
  return -1;
 }
 if (FUNC_8(VAR_2, VAR_2->conf->driver_param) < 0) {
  FUNC_9(VAR_2, VAR_1, "Driver interface rejected "
   "driver_param '%s'", VAR_2->conf->driver_param);
  return -1;
 }

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 && FUNC_1(VAR_4, VAR_2->ifname) != 0) {
  FUNC_4(VAR_2, VAR_0, "Driver interface replaced "
   "interface name with '%s'", VAR_4);
  FUNC_2(VAR_2->ifname, VAR_4, sizeof(VAR_2->ifname));
 }

 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6 && VAR_6[0] == '\0')
  VAR_6 = ((void*)0);

 VAR_2->radio = FUNC_3(VAR_2, VAR_6);
 if (VAR_2->radio == ((void*)0))
  return -1;

 return 0;
}
