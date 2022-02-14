
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_global {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_global_priv {int ctrl_dst; int cookie; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_8 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 scalar_t__ FUNC_11 (int *,struct sockaddr_in*,int) ;
 scalar_t__ FUNC_12 (int *,struct sockaddr_in*,int) ;
 char* FUNC_13 (struct wpa_global*,char*,size_t*) ;
 char* FUNC_14 (struct ctrl_iface_global_priv*,size_t*) ;

__attribute__((used)) static void FUNC_15(int VAR_4, void *VAR_5,
           void *VAR_6)
{
 struct wpa_global *VAR_7 = VAR_5;
 struct ctrl_iface_global_priv *VAR_8 = VAR_6;
 char VAR_9[4096], *VAR_10;
 int VAR_11;



 struct sockaddr_in VAR_12;

 socklen_t VAR_13 = sizeof(VAR_12);
 char *VAR_14 = ((void*)0);
 size_t VAR_15;
 u8 VAR_16[VAR_0];

 VAR_11 = FUNC_7(VAR_4, VAR_9, sizeof(VAR_9) - 1, 0,
         (struct sockaddr *) &VAR_12, &VAR_13);
 if (VAR_11 < 0) {
  FUNC_10(VAR_2, "recvfrom(ctrl_iface): %s",
      FUNC_9(VAR_3));
  return;
 }



 if (VAR_12.sin_addr.s_addr != FUNC_1((127 << 24) | 1)) {






  FUNC_10(VAR_1, "CTRL: Drop packet from unexpected "
      "source %s", FUNC_2(VAR_12.sin_addr));
  return;
 }



 VAR_9[VAR_11] = '\0';

 if (FUNC_5(VAR_9, "GET_COOKIE") == 0) {
  VAR_14 = FUNC_14(VAR_8, &VAR_15);
  goto done;
 }

 if (FUNC_6(VAR_9, "COOKIE=", 7) != 0) {
  FUNC_10(VAR_1, "CTLR: No cookie in the request - "
      "drop request");
  return;
 }

 if (FUNC_0(VAR_9 + 7, VAR_16, VAR_0) < 0) {
  FUNC_10(VAR_1, "CTLR: Invalid cookie format in the "
      "request - drop request");
  return;
 }

 if (FUNC_4(VAR_16, VAR_8->cookie, VAR_0) != 0) {
  FUNC_10(VAR_1, "CTLR: Invalid cookie in the request - "
      "drop request");
  return;
 }

 VAR_10 = VAR_9 + 7 + 2 * VAR_0;
 while (*VAR_10 == ' ')
  VAR_10++;

 if (FUNC_5(VAR_10, "ATTACH") == 0) {
  if (FUNC_11(&VAR_8->ctrl_dst,
           &VAR_12, VAR_13))
   VAR_15 = 1;
  else
   VAR_15 = 2;
 } else if (FUNC_5(VAR_10, "DETACH") == 0) {
  if (FUNC_12(&VAR_8->ctrl_dst,
           &VAR_12, VAR_13))
   VAR_15 = 1;
  else
   VAR_15 = 2;
 } else {
  VAR_14 = FUNC_13(VAR_7, VAR_10,
         &VAR_15);
 }

 done:
 if (VAR_14) {
  FUNC_8(VAR_4, VAR_14, VAR_15, 0, (struct sockaddr *) &VAR_12,
         VAR_13);
  FUNC_3(VAR_14);
 } else if (VAR_15 == 1) {
  FUNC_8(VAR_4, "FAIL\n", 5, 0, (struct sockaddr *) &VAR_12,
         VAR_13);
 } else if (VAR_15 == 2) {
  FUNC_8(VAR_4, "OK\n", 3, 0, (struct sockaddr *) &VAR_12,
         VAR_13);
 }
}
