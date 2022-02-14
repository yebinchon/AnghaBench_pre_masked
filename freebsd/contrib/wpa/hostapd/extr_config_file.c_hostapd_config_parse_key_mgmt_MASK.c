
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(int VAR_19, const char *VAR_20)
{
 int VAR_21 = 0, VAR_22;
 char *VAR_23, *VAR_24, *VAR_25;

 VAR_25 = FUNC_2(VAR_20);
 if (VAR_25 == ((void*)0))
  return -1;
 VAR_23 = VAR_25;

 while (*VAR_23 != '\0') {
  while (*VAR_23 == ' ' || *VAR_23 == '\t')
   VAR_23++;
  if (*VAR_23 == '\0')
   break;
  VAR_24 = VAR_23;
  while (*VAR_24 != ' ' && *VAR_24 != '\t' && *VAR_24 != '\0')
   VAR_24++;
  VAR_22 = *VAR_24 == '\0';
  *VAR_24 = '\0';
  if (FUNC_1(VAR_23, "WPA-PSK") == 0)
   VAR_21 |= VAR_16;
  else if (FUNC_1(VAR_23, "WPA-EAP") == 0)
   VAR_21 |= VAR_10;
  else {
   FUNC_3(VAR_0, "Line %d: invalid key_mgmt '%s'",
       VAR_19, VAR_23);
   FUNC_0(VAR_25);
   return -1;
  }

  if (VAR_22)
   break;
  VAR_23 = VAR_24 + 1;
 }

 FUNC_0(VAR_25);
 if (VAR_21 == 0) {
  FUNC_3(VAR_0, "Line %d: no key_mgmt values "
      "configured.", VAR_19);
  return -1;
 }

 return VAR_21;
}
