
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {unsigned int mac_addr_rand_supported; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpa_supplicant*,unsigned int) ;
 int FUNC_7 (struct wpa_supplicant*,unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct wpa_supplicant *VAR_5,
      char *VAR_6)
{
 char *VAR_7, *VAR_8 = ((void*)0);
 unsigned int VAR_9 = ~0, VAR_10 = 0;
 u8 VAR_11[VAR_0], VAR_12[VAR_0];
 u8 *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

 while ((VAR_7 = FUNC_4(VAR_6, " ", &VAR_8))) {
  if (FUNC_2(VAR_7, "scan") == 0) {
   VAR_10 |= VAR_2;
  } else if (FUNC_2(VAR_7, "sched") == 0) {
   VAR_10 |= VAR_3;
  } else if (FUNC_2(VAR_7, "pno") == 0) {
   VAR_10 |= VAR_1;
  } else if (FUNC_2(VAR_7, "all") == 0) {
   VAR_10 = VAR_5->mac_addr_rand_supported;
  } else if (FUNC_3(VAR_7, "enable=", 7) == 0) {
   VAR_9 = FUNC_0(VAR_7 + 7);
  } else if (FUNC_3(VAR_7, "addr=", 5) == 0) {
   VAR_13 = VAR_11;
   if (FUNC_1(VAR_7 + 5, VAR_13)) {
    FUNC_5(VAR_4,
        "CTRL: Invalid MAC address: %s",
        VAR_7);
    return -1;
   }
  } else if (FUNC_3(VAR_7, "mask=", 5) == 0) {
   VAR_14 = VAR_12;
   if (FUNC_1(VAR_7 + 5, VAR_14)) {
    FUNC_5(VAR_4,
        "CTRL: Invalid MAC address mask: %s",
        VAR_7);
    return -1;
   }
  } else {
   FUNC_5(VAR_4,
       "CTRL: Invalid MAC_RAND_SCAN parameter: %s",
       VAR_7);
   return -1;
  }
 }

 if (!VAR_10) {
  FUNC_5(VAR_4, "CTRL: MAC_RAND_SCAN no type specified");
  return -1;
 }

 if (VAR_9 > 1) {
  FUNC_5(VAR_4,
      "CTRL: MAC_RAND_SCAN enable=<0/1> not specified");
  return -1;
 }

 if (!VAR_9)
  return FUNC_6(VAR_5, VAR_10);

 return FUNC_7(VAR_5, VAR_10, VAR_13, VAR_14);
}
