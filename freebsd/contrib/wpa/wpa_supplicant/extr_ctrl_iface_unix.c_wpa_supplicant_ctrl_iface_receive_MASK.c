
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int eapol; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_priv {int ctrl_dst; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (int,char*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 (int *,struct sockaddr_storage*,int,int ) ;
 scalar_t__ FUNC_11 (int *,struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_12 (struct ctrl_iface_priv*,struct sockaddr_storage*,int,char*) ;
 char* FUNC_13 (struct wpa_supplicant*,char*,size_t*) ;
 int FUNC_14 (struct wpa_supplicant*,struct ctrl_iface_priv*) ;
 int FUNC_15 (char*,int,char*,size_t) ;

__attribute__((used)) static void FUNC_16(int VAR_5, void *VAR_6,
           void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_6;
 struct ctrl_iface_priv *VAR_9 = VAR_7;
 char VAR_10[4096];
 int VAR_11;
 struct sockaddr_storage VAR_12;
 socklen_t VAR_13 = sizeof(VAR_12);
 char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 size_t VAR_16 = 0;
 int VAR_17 = 0;

 VAR_11 = FUNC_5(VAR_5, VAR_10, sizeof(VAR_10) - 1, 0,
         (struct sockaddr *) &VAR_12, &VAR_13);
 if (VAR_11 < 0) {
  FUNC_9(VAR_3, "recvfrom(ctrl_iface): %s",
      FUNC_7(VAR_4));
  return;
 }
 VAR_10[VAR_11] = '\0';

 if (FUNC_3(VAR_10, "ATTACH") == 0) {
  if (FUNC_10(&VAR_9->ctrl_dst, &VAR_12,
           VAR_13, 0))
   VAR_16 = 1;
  else {
   VAR_17 = 1;
   VAR_16 = 2;
  }
 } else if (FUNC_3(VAR_10, "DETACH") == 0) {
  if (FUNC_11(&VAR_9->ctrl_dst, &VAR_12,
           VAR_13))
   VAR_16 = 1;
  else
   VAR_16 = 2;
 } else if (FUNC_4(VAR_10, "LEVEL ", 6) == 0) {
  if (FUNC_12(VAR_9, &VAR_12, VAR_13,
          VAR_10 + 6))
   VAR_16 = 1;
  else
   VAR_16 = 2;
 } else {
  VAR_15 = FUNC_13(VAR_8, VAR_10,
             &VAR_16);
  VAR_14 = VAR_15;






  FUNC_2(VAR_10, 0, VAR_11);
 }

 if (!VAR_14 && VAR_16 == 1) {
  VAR_14 = "FAIL\n";
  VAR_16 = 5;
 } else if (!VAR_14 && VAR_16 == 2) {
  VAR_14 = "OK\n";
  VAR_16 = 3;
 }

 if (VAR_14) {
  FUNC_15("ctrl_sock-sendto", VAR_5, VAR_14,
         VAR_16);
  if (FUNC_6(VAR_5, VAR_14, VAR_16, 0, (struct sockaddr *) &VAR_12,
      VAR_13) < 0) {
   int VAR_18 = VAR_4;
   FUNC_8(VAR_8, VAR_2,
    "ctrl_iface sendto failed: %d - %s",
    VAR_18, FUNC_7(VAR_18));
   if (VAR_18 == VAR_1 || VAR_18 == VAR_0) {
    VAR_5 = FUNC_14(VAR_8, VAR_9);
    if (VAR_5 < 0) {
     FUNC_8(VAR_8, VAR_2, "Failed to reinitialize ctrl_iface socket");
    }
   }
   if (VAR_17) {
    FUNC_8(VAR_8, VAR_2, "Failed to send response to ATTACH - detaching");
    VAR_17 = 0;
    FUNC_11(
     &VAR_9->ctrl_dst, &VAR_12, VAR_13);
   }
  }
 }
 FUNC_1(VAR_15);

 if (VAR_17)
  FUNC_0(VAR_8->eapol);
}
