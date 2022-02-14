
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__ key_mgmt; int passphrase; int psk_set; scalar_t__ temporary; struct wpa_ssid* next; } ;
struct wpa_cred {scalar_t__ temporary; struct wpa_cred* next; } ;
struct wpa_config_blob {struct wpa_config_blob* next; } ;
struct wpa_config {struct wpa_config_blob* blobs; struct wpa_ssid* ssid; struct wpa_cred* cred; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (int *,struct wpa_config_blob*) ;
 int FUNC_11 (int *,struct wpa_cred*) ;
 int FUNC_12 (int *,struct wpa_config*) ;
 int FUNC_13 (int *,struct wpa_ssid*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,char*,char const*,...) ;

int FUNC_16(const char *VAR_6, struct wpa_config *VAR_7)
{

 FILE *VAR_8;
 struct wpa_ssid *VAR_9;
 struct wpa_cred *VAR_10;

 struct wpa_config_blob *VAR_11;

 int VAR_12 = 0;
 const char *VAR_13 = VAR_6;
 int VAR_14 = FUNC_8(VAR_6) + 5;
 char *VAR_15 = FUNC_6(VAR_14);

 if (VAR_15) {
  FUNC_7(VAR_15, VAR_14, "%s.tmp", VAR_6);
  VAR_6 = VAR_15;
 }

 FUNC_15(VAR_0, "Writing configuration file '%s'", VAR_6);

 VAR_8 = FUNC_2(VAR_6, "w");
 if (VAR_8 == ((void*)0)) {
  FUNC_15(VAR_0, "Failed to open '%s' for writing", VAR_6);
  FUNC_5(VAR_15);
  return -1;
 }

 FUNC_12(VAR_8, VAR_7);

 for (VAR_10 = VAR_7->cred; VAR_10; VAR_10 = VAR_10->next) {
  if (VAR_10->temporary)
   continue;
  FUNC_3(VAR_8, "\ncred={\n");
  FUNC_11(VAR_8, VAR_10);
  FUNC_3(VAR_8, "}\n");
 }

 for (VAR_9 = VAR_7->ssid; VAR_9; VAR_9 = VAR_9->next) {
  if (VAR_9->key_mgmt == VAR_5 || VAR_9->temporary)
   continue;
  if (FUNC_14(VAR_9->key_mgmt) && !VAR_9->psk_set &&
      !VAR_9->passphrase)
   continue;
  FUNC_3(VAR_8, "\nnetwork={\n");
  FUNC_13(VAR_8, VAR_9);
  FUNC_3(VAR_8, "}\n");
 }


 for (VAR_11 = VAR_7->blobs; VAR_11; VAR_11 = VAR_11->next) {
  VAR_12 = FUNC_10(VAR_8, VAR_11);
  if (VAR_12)
   break;
 }


 FUNC_4(VAR_8);

 FUNC_1(VAR_8);

 if (VAR_15) {
  int VAR_16 = 0;





  if (VAR_16 != 0 || FUNC_9(VAR_15, VAR_13) != 0)
   VAR_12 = -1;

  FUNC_5(VAR_15);
 }

 FUNC_15(VAR_0, "Configuration file '%s' written %ssuccessfully",
     VAR_13, VAR_12 ? "un" : "");
 return VAR_12;



}
