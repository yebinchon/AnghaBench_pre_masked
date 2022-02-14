
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int proto; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char * FUNC_4(const struct parse_data *VAR_3,
         struct wpa_ssid *VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;

 VAR_7 = VAR_6 = FUNC_3(20);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_8 = VAR_6 + 20;

 if (VAR_4->proto & VAR_2) {
  VAR_5 = FUNC_1(VAR_7, VAR_8 - VAR_7, "%sWPA",
      VAR_7 == VAR_6 ? "" : " ");
  if (FUNC_2(VAR_8 - VAR_7, VAR_5))
   return VAR_6;
  VAR_7 += VAR_5;
 }

 if (VAR_4->proto & VAR_1) {
  VAR_5 = FUNC_1(VAR_7, VAR_8 - VAR_7, "%sRSN",
      VAR_7 == VAR_6 ? "" : " ");
  if (FUNC_2(VAR_8 - VAR_7, VAR_5))
   return VAR_6;
  VAR_7 += VAR_5;
 }

 if (VAR_4->proto & VAR_0) {
  VAR_5 = FUNC_1(VAR_7, VAR_8 - VAR_7, "%sOSEN",
      VAR_7 == VAR_6 ? "" : " ");
  if (FUNC_2(VAR_8 - VAR_7, VAR_5))
   return VAR_6;
  VAR_7 += VAR_5;
 }

 if (VAR_7 == VAR_6) {
  FUNC_0(VAR_6);
  VAR_6 = ((void*)0);
 }

 return VAR_6;
}
