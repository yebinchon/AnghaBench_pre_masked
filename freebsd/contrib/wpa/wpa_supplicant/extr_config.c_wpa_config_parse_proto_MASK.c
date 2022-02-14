
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int proto; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(const struct parse_data *VAR_5,
      struct wpa_ssid *VAR_6, int VAR_7,
      const char *VAR_8)
{
 int VAR_9 = 0, VAR_10, VAR_11 = 0;
 char *VAR_12, *VAR_13, *VAR_14;

 VAR_14 = FUNC_2(VAR_8);
 if (VAR_14 == ((void*)0))
  return -1;
 VAR_12 = VAR_14;

 while (*VAR_12 != '\0') {
  while (*VAR_12 == ' ' || *VAR_12 == '\t')
   VAR_12++;
  if (*VAR_12 == '\0')
   break;
  VAR_13 = VAR_12;
  while (*VAR_13 != ' ' && *VAR_13 != '\t' && *VAR_13 != '\0')
   VAR_13++;
  VAR_10 = *VAR_13 == '\0';
  *VAR_13 = '\0';
  if (FUNC_1(VAR_12, "WPA") == 0)
   VAR_9 |= VAR_4;
  else if (FUNC_1(VAR_12, "RSN") == 0 ||
    FUNC_1(VAR_12, "WPA2") == 0)
   VAR_9 |= VAR_3;
  else if (FUNC_1(VAR_12, "OSEN") == 0)
   VAR_9 |= VAR_2;
  else {
   FUNC_3(VAR_0, "Line %d: invalid proto '%s'",
       VAR_7, VAR_12);
   VAR_11++;
  }

  if (VAR_10)
   break;
  VAR_12 = VAR_13 + 1;
 }
 FUNC_0(VAR_14);

 if (VAR_9 == 0) {
  FUNC_3(VAR_0,
      "Line %d: no proto values configured.", VAR_7);
  VAR_11++;
 }

 if (!VAR_11 && VAR_6->proto == VAR_9)
  return 1;
 FUNC_3(VAR_1, "proto: 0x%x", VAR_9);
 VAR_6->proto = VAR_9;
 return VAR_11 ? -1 : 0;
}
