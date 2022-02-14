
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_global_priv {int ctrl_dst; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,char*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int *,struct sockaddr_storage*,int,int) ;
 scalar_t__ FUNC_8 (int *,struct sockaddr_storage*,int) ;
 char* FUNC_9 (struct wpa_global*,char*,size_t*) ;
 int FUNC_10 (char*,int,char*,size_t) ;

__attribute__((used)) static void FUNC_11(int VAR_3, void *VAR_4,
           void *VAR_5)
{
 struct wpa_global *VAR_6 = VAR_4;
 struct ctrl_iface_global_priv *VAR_7 = VAR_5;
 char VAR_8[4096];
 int VAR_9;
 struct sockaddr_storage VAR_10;
 socklen_t VAR_11 = sizeof(VAR_10);
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 size_t VAR_14;

 VAR_9 = FUNC_3(VAR_3, VAR_8, sizeof(VAR_8) - 1, 0,
         (struct sockaddr *) &VAR_10, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_6(VAR_1, "recvfrom(ctrl_iface): %s",
      FUNC_5(VAR_2));
  return;
 }
 VAR_8[VAR_9] = '\0';

 if (FUNC_2(VAR_8, "ATTACH") == 0) {
  if (FUNC_7(&VAR_7->ctrl_dst, &VAR_10,
           VAR_11, 1))
   VAR_14 = 1;
  else
   VAR_14 = 2;
 } else if (FUNC_2(VAR_8, "DETACH") == 0) {
  if (FUNC_8(&VAR_7->ctrl_dst, &VAR_10,
           VAR_11))
   VAR_14 = 1;
  else
   VAR_14 = 2;
 } else {
  VAR_13 = FUNC_9(
   VAR_6, VAR_8, &VAR_14);
  VAR_12 = VAR_13;






  FUNC_1(VAR_8, 0, VAR_9);
 }

 if (!VAR_12 && VAR_14 == 1) {
  VAR_12 = "FAIL\n";
  VAR_14 = 5;
 } else if (!VAR_12 && VAR_14 == 2) {
  VAR_12 = "OK\n";
  VAR_14 = 3;
 }

 if (VAR_12) {
  FUNC_10("global_ctrl_sock-sendto",
         VAR_3, VAR_12, VAR_14);
  if (FUNC_4(VAR_3, VAR_12, VAR_14, 0, (struct sockaddr *) &VAR_10,
      VAR_11) < 0) {
   FUNC_6(VAR_0, "ctrl_iface sendto failed: %s",
    FUNC_5(VAR_2));
  }
 }
 FUNC_0(VAR_13);
}
