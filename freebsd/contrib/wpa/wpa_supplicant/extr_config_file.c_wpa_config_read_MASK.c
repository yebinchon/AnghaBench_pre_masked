
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {struct wpa_ssid* next; } ;
struct wpa_cred {struct wpa_cred* next; } ;
struct wpa_config {struct wpa_cred* cred; struct wpa_ssid* ssid; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct wpa_config*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wpa_config*,struct wpa_ssid*) ;
 struct wpa_config* FUNC_7 (int *,int *) ;
 int FUNC_8 (struct wpa_config*) ;
 int FUNC_9 (struct wpa_config*) ;
 scalar_t__ FUNC_10 (char*,int,int *,int*,char**) ;
 scalar_t__ FUNC_11 (struct wpa_config*,int *,int*,char*) ;
 scalar_t__ FUNC_12 (struct wpa_config*,char*,int) ;
 struct wpa_cred* FUNC_13 (int *,int*,int ) ;
 struct wpa_ssid* FUNC_14 (int *,int*,int ) ;
 int FUNC_15 (int ,char*,...) ;

struct wpa_config * FUNC_16(const char *VAR_3, struct wpa_config *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[512], *VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 struct wpa_ssid *VAR_10, *VAR_11, *VAR_12;
 struct wpa_cred *VAR_13, *VAR_14, *VAR_15;
 struct wpa_config *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_4)
  VAR_16 = VAR_4;
 else
  VAR_16 = FUNC_7(((void*)0), ((void*)0));
 if (VAR_16 == ((void*)0)) {
  FUNC_15(VAR_1, "Failed to allocate config file "
      "structure");
  return ((void*)0);
 }
 VAR_11 = VAR_12 = VAR_16->ssid;
 while (VAR_11 && VAR_11->next)
  VAR_11 = VAR_11->next;
 VAR_14 = VAR_15 = VAR_16->cred;
 while (VAR_14 && VAR_14->next)
  VAR_14 = VAR_14->next;

 FUNC_15(VAR_0, "Reading configuration file '%s'", VAR_3);
 VAR_5 = FUNC_1(VAR_3, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_15(VAR_1, "Failed to open config file '%s', "
      "error: %s", VAR_3, FUNC_5(VAR_2));
  if (VAR_16 != VAR_4)
   FUNC_2(VAR_16);
  return ((void*)0);
 }

 while (FUNC_10(VAR_6, sizeof(VAR_6), VAR_5, &VAR_9, &VAR_7)) {
  if (FUNC_3(VAR_7, "network={") == 0) {
   VAR_10 = FUNC_14(VAR_5, &VAR_9, VAR_17++);
   if (VAR_10 == ((void*)0)) {
    FUNC_15(VAR_1, "Line %d: failed to "
        "parse network block.", VAR_9);
    VAR_8++;
    continue;
   }
   if (VAR_12 == ((void*)0)) {
    VAR_12 = VAR_11 = VAR_10;
   } else {
    VAR_11->next = VAR_10;
    VAR_11 = VAR_10;
   }
   if (FUNC_6(VAR_16, VAR_10)) {
    FUNC_15(VAR_1, "Line %d: failed to add "
        "network block to priority list.",
        VAR_9);
    VAR_8++;
    continue;
   }
  } else if (FUNC_3(VAR_7, "cred={") == 0) {
   VAR_13 = FUNC_13(VAR_5, &VAR_9, VAR_18++);
   if (VAR_13 == ((void*)0)) {
    FUNC_15(VAR_1, "Line %d: failed to "
        "parse cred block.", VAR_9);
    VAR_8++;
    continue;
   }
   if (VAR_15 == ((void*)0)) {
    VAR_15 = VAR_14 = VAR_13;
   } else {
    VAR_14->next = VAR_13;
    VAR_14 = VAR_13;
   }

  } else if (FUNC_4(VAR_7, "blob-base64-", 12) == 0) {
   if (FUNC_11(VAR_16, VAR_5, &VAR_9, VAR_7 + 12)
       < 0) {
    FUNC_15(VAR_1, "Line %d: failed to "
        "process blob.", VAR_9);
    VAR_8++;
    continue;
   }

  } else if (FUNC_12(VAR_16, VAR_7, VAR_9) < 0) {
   FUNC_15(VAR_1, "Line %d: Invalid configuration "
       "line '%s'.", VAR_9, VAR_7);
   VAR_8++;
   continue;
  }
 }

 FUNC_0(VAR_5);

 VAR_16->ssid = VAR_12;
 FUNC_8(VAR_16);
 VAR_16->cred = VAR_15;


 if (VAR_8) {
  if (VAR_16 != VAR_4)
   FUNC_9(VAR_16);
  VAR_16 = ((void*)0);
  VAR_12 = ((void*)0);
 }


 return VAR_16;
}
