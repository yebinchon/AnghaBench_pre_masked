
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int eapol; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_priv {int ctrl_dst; int cookie; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_10 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__ FUNC_13 (int *,struct sockaddr_in*,int) ;
 scalar_t__ FUNC_14 (int *,struct sockaddr_in*,int) ;
 char* FUNC_15 (struct ctrl_iface_priv*,size_t*) ;
 scalar_t__ FUNC_16 (struct ctrl_iface_priv*,struct sockaddr_in*,int,char*) ;
 char* FUNC_17 (struct wpa_supplicant*,char*,size_t*) ;

__attribute__((used)) static void FUNC_18(int VAR_6, void *VAR_7,
           void *VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_7;
 struct ctrl_iface_priv *VAR_10 = VAR_8;
 char VAR_11[4096], *VAR_12;
 int VAR_13;






 struct sockaddr_in VAR_14;

 socklen_t VAR_15 = sizeof(VAR_14);
 char *VAR_16 = ((void*)0);
 size_t VAR_17 = 0;
 int VAR_18 = 0;
 u8 VAR_19[VAR_1];

 VAR_13 = FUNC_9(VAR_6, VAR_11, sizeof(VAR_11) - 1, 0,
         (struct sockaddr *) &VAR_14, &VAR_15);
 if (VAR_13 < 0) {
  FUNC_12(VAR_4, "recvfrom(ctrl_iface): %s",
      FUNC_11(VAR_5));
  return;
 }
 if (VAR_14.sin_addr.s_addr != FUNC_2((127 << 24) | 1)) {






  FUNC_12(VAR_3, "CTRL: Drop packet from unexpected "
      "source %s", FUNC_3(VAR_14.sin_addr));
  return;
 }



 VAR_11[VAR_13] = '\0';

 if (FUNC_7(VAR_11, "GET_COOKIE") == 0) {
  VAR_16 = FUNC_15(VAR_10, &VAR_17);
  goto done;
 }
 if (FUNC_8(VAR_11, "COOKIE=", 7) != 0) {
  FUNC_12(VAR_3, "CTLR: No cookie in the request - "
      "drop request");
  return;
 }

 if (FUNC_1(VAR_11 + 7, VAR_19, VAR_1) < 0) {
  FUNC_12(VAR_3, "CTLR: Invalid cookie format in the "
      "request - drop request");
  return;
 }

 if (FUNC_6(VAR_19, VAR_10->cookie, VAR_1) != 0) {
  FUNC_12(VAR_3, "CTLR: Invalid cookie in the request - "
      "drop request");
  return;
 }

 VAR_12 = VAR_11 + 7 + 2 * VAR_1;
 while (*VAR_12 == ' ')
  VAR_12++;

 if (FUNC_7(VAR_12, "ATTACH") == 0) {
  if (FUNC_13(&VAR_10->ctrl_dst,
           &VAR_14, VAR_15))
   VAR_17 = 1;
  else {
   VAR_18 = 1;
   VAR_17 = 2;
  }
 } else if (FUNC_7(VAR_12, "DETACH") == 0) {
  if (FUNC_14(&VAR_10->ctrl_dst,
           &VAR_14, VAR_15))
   VAR_17 = 1;
  else
   VAR_17 = 2;
 } else if (FUNC_8(VAR_12, "LEVEL ", 6) == 0) {
  if (FUNC_16(VAR_10, &VAR_14, VAR_15,
          VAR_12 + 6))
   VAR_17 = 1;
  else
   VAR_17 = 2;
 } else {
  VAR_16 = FUNC_17(VAR_9, VAR_12,
         &VAR_17);
 }

 done:
 if (VAR_16) {
  FUNC_10(VAR_6, VAR_16, VAR_17, 0, (struct sockaddr *) &VAR_14,
         VAR_15);
  FUNC_5(VAR_16);
 } else if (VAR_17 == 1) {
  FUNC_10(VAR_6, "FAIL\n", 5, 0, (struct sockaddr *) &VAR_14,
         VAR_15);
 } else if (VAR_17 == 2) {
  FUNC_10(VAR_6, "OK\n", 3, 0, (struct sockaddr *) &VAR_14,
         VAR_15);
 }

 if (VAR_18)
  FUNC_0(VAR_9->eapol);
}
