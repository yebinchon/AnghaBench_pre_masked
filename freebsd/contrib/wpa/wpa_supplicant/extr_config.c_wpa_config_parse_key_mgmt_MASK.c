
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
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(const struct parse_data *VAR_24,
         struct wpa_ssid *VAR_25, int VAR_26,
         const char *VAR_27)
{
 int VAR_28 = 0, VAR_29, VAR_30 = 0;
 char *VAR_31, *VAR_32, *VAR_33;

 VAR_33 = FUNC_2(VAR_27);
 if (VAR_33 == ((void*)0))
  return -1;
 VAR_31 = VAR_33;

 while (*VAR_31 != '\0') {
  while (*VAR_31 == ' ' || *VAR_31 == '\t')
   VAR_31++;
  if (*VAR_31 == '\0')
   break;
  VAR_32 = VAR_31;
  while (*VAR_32 != ' ' && *VAR_32 != '\t' && *VAR_32 != '\0')
   VAR_32++;
  VAR_29 = *VAR_32 == '\0';
  *VAR_32 = '\0';
  if (FUNC_1(VAR_31, "WPA-PSK") == 0)
   VAR_28 |= VAR_19;
  else if (FUNC_1(VAR_31, "WPA-EAP") == 0)
   VAR_28 |= VAR_11;
  else if (FUNC_1(VAR_31, "IEEE8021X") == 0)
   VAR_28 |= VAR_12;
  else if (FUNC_1(VAR_31, "NONE") == 0)
   VAR_28 |= VAR_16;
  else if (FUNC_1(VAR_31, "WPA-NONE") == 0)
   VAR_28 |= VAR_22;
  else {
   FUNC_3(VAR_0, "Line %d: invalid key_mgmt '%s'",
       VAR_26, VAR_31);
   VAR_30++;
  }

  if (VAR_29)
   break;
  VAR_31 = VAR_32 + 1;
 }
 FUNC_0(VAR_33);

 if (VAR_28 == 0) {
  FUNC_3(VAR_0,
      "Line %d: no key_mgmt values configured.", VAR_26);
  VAR_30++;
 }

 if (!VAR_30 && VAR_25->key_mgmt == VAR_28)
  return 1;
 FUNC_3(VAR_1, "key_mgmt: 0x%x", VAR_28);
 VAR_25->key_mgmt = VAR_28;
 return VAR_30 ? -1 : 0;
}
