
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid_value {size_t ssid_len; int ssid; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,size_t) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,size_t*) ;

int FUNC_5(const char *VAR_1, struct wpa_ssid_value *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_2->ssid_len = 0;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return -1;

 if (*VAR_3 != '"') {
  VAR_5 = FUNC_2(VAR_3, ' ');
  if (VAR_5)
   *VAR_5 = '\0';
 } else {
  VAR_5 = FUNC_2(VAR_3 + 1, '"');
  if (!VAR_5) {
   FUNC_0(VAR_3);
   return -1;
  }

  VAR_5[1] = '\0';
 }

 VAR_4 = FUNC_4(VAR_3, &VAR_6);
 if (VAR_4 && VAR_6 <= VAR_0) {
  VAR_2->ssid_len = VAR_6;
  FUNC_1(VAR_2->ssid, VAR_4, VAR_6);
 }

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return VAR_2->ssid_len ? 0 : -1;
}
