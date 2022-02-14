
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ multi_bss_support; } ;
struct wpa_driver_capa {int dummy; } ;
typedef int field ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_1 (struct wpa_supplicant*,char*,size_t) ;
 int FUNC_2 (struct wpa_supplicant*,char*,size_t) ;
 int FUNC_3 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_4 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_5 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_6 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_7 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_8 (int,char*,struct wpa_driver_capa*,char*,size_t) ;
 int FUNC_9 (struct wpa_supplicant*,char*,size_t) ;
 int FUNC_10 (char*,size_t) ;
 int FUNC_11 (char*,size_t,char*) ;
 scalar_t__ FUNC_12 (size_t,int) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 size_t FUNC_15 (char*,char const*,int) ;
 int FUNC_16 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_18 (struct wpa_supplicant*) ;
 int FUNC_19 (int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_20(
 struct wpa_supplicant *VAR_1, const char *VAR_2, char *VAR_3,
 size_t VAR_4)
{
 struct wpa_driver_capa VAR_5;
 int VAR_6;
 char *VAR_7;
 char VAR_8[30];
 size_t VAR_9;


 VAR_9 = FUNC_15(VAR_8, VAR_2, sizeof(VAR_8));
 if (VAR_9 >= sizeof(VAR_8))
  return -1;
 VAR_7 = FUNC_13(VAR_8, ' ');
 if (VAR_7 != ((void*)0)) {
  *VAR_7++ = '\0';
  if (FUNC_14(VAR_7, "strict") != 0)
   return -1;
 }

 FUNC_19(VAR_0, "CTRL_IFACE: GET_CAPABILITY '%s' %s",
  VAR_8, VAR_7 ? VAR_7 : "");

 if (FUNC_14(VAR_8, "eap") == 0) {
  return FUNC_10(VAR_3, VAR_4);
 }

 VAR_6 = FUNC_16(VAR_1, &VAR_5);

 if (FUNC_14(VAR_8, "pairwise") == 0)
  return FUNC_7(VAR_6, VAR_7, &VAR_5,
         VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "group") == 0)
  return FUNC_3(VAR_6, VAR_7, &VAR_5,
             VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "group_mgmt") == 0)
  return FUNC_4(VAR_6, VAR_7, &VAR_5,
           VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "key_mgmt") == 0)
  return FUNC_5(VAR_6, VAR_7, &VAR_5,
         VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "proto") == 0)
  return FUNC_8(VAR_6, VAR_7, &VAR_5,
             VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "auth_alg") == 0)
  return FUNC_0(VAR_1, VAR_6, VAR_7,
         &VAR_5, VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "modes") == 0)
  return FUNC_6(VAR_6, VAR_7, &VAR_5,
             VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "channels") == 0)
  return FUNC_1(VAR_1, VAR_3, VAR_4);

 if (FUNC_14(VAR_8, "freq") == 0)
  return FUNC_2(VAR_1, VAR_3, VAR_4);
 if (FUNC_14(VAR_8, "multibss") == 0 && VAR_1->multi_bss_support) {
  VAR_6 = FUNC_11(VAR_3, VAR_4, "MULTIBSS-STA");
  if (FUNC_12(VAR_4, VAR_6))
   return -1;
  return VAR_6;
 }
 FUNC_19(VAR_0, "CTRL_IFACE: Unknown GET_CAPABILITY field '%s'",
     VAR_8);

 return -1;
}
