
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int key_mgmt; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char * FUNC_4(const struct parse_data *VAR_22,
     struct wpa_ssid *VAR_23)
{
 char *VAR_24, *VAR_25, *VAR_26;
 int VAR_27;

 VAR_25 = VAR_24 = FUNC_3(100);
 if (VAR_24 == ((void*)0))
  return ((void*)0);
 VAR_26 = VAR_24 + 100;

 if (VAR_23->key_mgmt & VAR_17) {
  VAR_27 = FUNC_1(VAR_25, VAR_26 - VAR_25, "%sWPA-PSK",
      VAR_25 == VAR_24 ? "" : " ");
  if (FUNC_2(VAR_26 - VAR_25, VAR_27)) {
   VAR_26[-1] = '\0';
   return VAR_24;
  }
  VAR_25 += VAR_27;
 }

 if (VAR_23->key_mgmt & VAR_9) {
  VAR_27 = FUNC_1(VAR_25, VAR_26 - VAR_25, "%sWPA-EAP",
      VAR_25 == VAR_24 ? "" : " ");
  if (FUNC_2(VAR_26 - VAR_25, VAR_27)) {
   VAR_26[-1] = '\0';
   return VAR_24;
  }
  VAR_25 += VAR_27;
 }

 if (VAR_23->key_mgmt & VAR_10) {
  VAR_27 = FUNC_1(VAR_25, VAR_26 - VAR_25, "%sIEEE8021X",
      VAR_25 == VAR_24 ? "" : " ");
  if (FUNC_2(VAR_26 - VAR_25, VAR_27)) {
   VAR_26[-1] = '\0';
   return VAR_24;
  }
  VAR_25 += VAR_27;
 }

 if (VAR_23->key_mgmt & VAR_14) {
  VAR_27 = FUNC_1(VAR_25, VAR_26 - VAR_25, "%sNONE",
      VAR_25 == VAR_24 ? "" : " ");
  if (FUNC_2(VAR_26 - VAR_25, VAR_27)) {
   VAR_26[-1] = '\0';
   return VAR_24;
  }
  VAR_25 += VAR_27;
 }

 if (VAR_23->key_mgmt & VAR_20) {
  VAR_27 = FUNC_1(VAR_25, VAR_26 - VAR_25, "%sWPA-NONE",
      VAR_25 == VAR_24 ? "" : " ");
  if (FUNC_2(VAR_26 - VAR_25, VAR_27)) {
   VAR_26[-1] = '\0';
   return VAR_24;
  }
  VAR_25 += VAR_27;
 }
 if (VAR_25 == VAR_24) {
  FUNC_0(VAR_24);
  VAR_24 = ((void*)0);
 }

 return VAR_24;
}
