
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int bssid; int bssid_set; } ;
struct parse_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static char * FUNC_5(const struct parse_data *VAR_1,
         struct wpa_ssid *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if (!VAR_2->bssid_set)
  return ((void*)0);

 VAR_3 = FUNC_2(20);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_3, 20, VAR_0, FUNC_0(VAR_2->bssid));
 if (FUNC_4(20, VAR_4)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3[20 - 1] = '\0';
 return VAR_3;
}
