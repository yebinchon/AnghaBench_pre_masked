
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int * current_ssid; } ;
struct eapol_test_data {struct wpa_supplicant* wpa_s; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (char*,size_t,int const*,size_t) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 struct eapol_test_data *VAR_4 = VAR_1;
 struct wpa_supplicant *VAR_5 = VAR_4->wpa_s;
 char *VAR_6;
 int VAR_7;

 FUNC_3(VAR_0, "EAP method updated anonymous_identity",
     VAR_2, VAR_3);

 if (VAR_5->current_ssid == ((void*)0))
  return;

 if (VAR_2 == ((void*)0)) {
  if (FUNC_2(VAR_5->current_ssid, "anonymous_identity",
       "NULL", 0) < 0)
   return;
 } else {
  VAR_6 = FUNC_1(VAR_3 * 2 + 1);
  if (VAR_6 == ((void*)0))
   return;
  FUNC_4(VAR_6, VAR_3 * 2 + 1, VAR_2, VAR_3);
  VAR_7 = FUNC_2(VAR_5->current_ssid, "anonymous_identity",
         VAR_6, 0);
  FUNC_0(VAR_6);
  if (VAR_7 < 0)
   return;
 }
}
