
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct bgscan_ops const* bgscan; int * bgscan_priv; } ;
struct wpa_ssid {int dummy; } ;
struct bgscan_ops {int name; int * (* init ) (struct wpa_supplicant*,char const*,struct wpa_ssid*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 struct bgscan_ops** VAR_2 ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int ,size_t) ;
 int * FUNC_4 (struct wpa_supplicant*,char const*,struct wpa_ssid*) ;
 int FUNC_5 (int ,char*,char const*,...) ;

int FUNC_6(struct wpa_supplicant *VAR_3, struct wpa_ssid *VAR_4,
  const char *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;
 int VAR_8;
 const struct bgscan_ops *VAR_9 = ((void*)0);

 FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_5, ':');
 if (VAR_6 == ((void*)0)) {
  VAR_6 = "";
  VAR_7 = FUNC_2(VAR_5);
 } else {
  VAR_7 = VAR_6 - VAR_5;
  VAR_6++;
 }

 for (VAR_8 = 0; VAR_2[VAR_8]; VAR_8++) {
  if (FUNC_3(VAR_5, VAR_2[VAR_8]->name, VAR_7) == 0) {
   VAR_9 = VAR_2[VAR_8];
   break;
  }
 }

 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_1, "bgscan: Could not find module "
      "matching the parameter '%s'", VAR_5);
  return -1;
 }

 VAR_3->bgscan_priv = VAR_9->init(VAR_3, VAR_6, VAR_4);
 if (VAR_3->bgscan_priv == ((void*)0))
  return -1;
 VAR_3->bgscan = VAR_9;
 FUNC_5(VAR_0, "bgscan: Initialized module '%s' with "
     "parameters '%s'", VAR_9->name, VAR_6);

 return 0;
}
