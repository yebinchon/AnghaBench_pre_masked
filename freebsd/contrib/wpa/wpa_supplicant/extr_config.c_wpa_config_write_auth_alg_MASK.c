
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int auth_alg; } ;
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
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5 = FUNC_3(30);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_7 = VAR_5 + 30;

 if (VAR_4->auth_alg & VAR_1) {
  VAR_8 = FUNC_1(VAR_6, VAR_7 - VAR_6, "%sOPEN",
      VAR_6 == VAR_5 ? "" : " ");
  if (FUNC_2(VAR_7 - VAR_6, VAR_8)) {
   VAR_7[-1] = '\0';
   return VAR_5;
  }
  VAR_6 += VAR_8;
 }

 if (VAR_4->auth_alg & VAR_2) {
  VAR_8 = FUNC_1(VAR_6, VAR_7 - VAR_6, "%sSHARED",
      VAR_6 == VAR_5 ? "" : " ");
  if (FUNC_2(VAR_7 - VAR_6, VAR_8)) {
   VAR_7[-1] = '\0';
   return VAR_5;
  }
  VAR_6 += VAR_8;
 }

 if (VAR_4->auth_alg & VAR_0) {
  VAR_8 = FUNC_1(VAR_6, VAR_7 - VAR_6, "%sLEAP",
      VAR_6 == VAR_5 ? "" : " ");
  if (FUNC_2(VAR_7 - VAR_6, VAR_8)) {
   VAR_7[-1] = '\0';
   return VAR_5;
  }
  VAR_6 += VAR_8;
 }

 if (VAR_6 == VAR_5) {
  FUNC_0(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
