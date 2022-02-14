
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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_13)
{
 int VAR_14 = 0, VAR_15;
 char *VAR_16, *VAR_17, *VAR_18;

 VAR_18 = FUNC_2(VAR_13);
 if (VAR_18 == ((void*)0))
  return -1;
 VAR_16 = VAR_18;

 while (*VAR_16 != '\0') {
  while (*VAR_16 == ' ' || *VAR_16 == '\t')
   VAR_16++;
  if (*VAR_16 == '\0')
   break;
  VAR_17 = VAR_16;
  while (*VAR_17 != ' ' && *VAR_17 != '\t' && *VAR_17 != '\0')
   VAR_17++;
  VAR_15 = *VAR_17 == '\0';
  *VAR_17 = '\0';
  if (FUNC_1(VAR_16, "CCMP-256") == 0)
   VAR_14 |= VAR_5;
  else if (FUNC_1(VAR_16, "GCMP-256") == 0)
   VAR_14 |= VAR_7;
  else if (FUNC_1(VAR_16, "CCMP") == 0)
   VAR_14 |= VAR_4;
  else if (FUNC_1(VAR_16, "GCMP") == 0)
   VAR_14 |= VAR_6;
  else if (FUNC_1(VAR_16, "TKIP") == 0)
   VAR_14 |= VAR_10;
  else if (FUNC_1(VAR_16, "WEP104") == 0)
   VAR_14 |= VAR_11;
  else if (FUNC_1(VAR_16, "WEP40") == 0)
   VAR_14 |= VAR_12;
  else if (FUNC_1(VAR_16, "NONE") == 0)
   VAR_14 |= VAR_9;
  else if (FUNC_1(VAR_16, "GTK_NOT_USED") == 0)
   VAR_14 |= VAR_8;
  else if (FUNC_1(VAR_16, "AES-128-CMAC") == 0)
   VAR_14 |= VAR_0;
  else if (FUNC_1(VAR_16, "BIP-GMAC-128") == 0)
   VAR_14 |= VAR_2;
  else if (FUNC_1(VAR_16, "BIP-GMAC-256") == 0)
   VAR_14 |= VAR_3;
  else if (FUNC_1(VAR_16, "BIP-CMAC-256") == 0)
   VAR_14 |= VAR_1;
  else {
   FUNC_0(VAR_18);
   return -1;
  }

  if (VAR_15)
   break;
  VAR_16 = VAR_17 + 1;
 }
 FUNC_0(VAR_18);

 return VAR_14;
}
