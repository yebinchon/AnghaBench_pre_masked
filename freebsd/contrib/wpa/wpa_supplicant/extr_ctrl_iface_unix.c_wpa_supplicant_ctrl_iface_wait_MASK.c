
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_priv {int sock; int ctrl_dst; TYPE_1__* wpa_s; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;
struct TYPE_2__ {int ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_3 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *,struct sockaddr_storage*,int,int ) ;

void FUNC_7(struct ctrl_iface_priv *VAR_3)
{
 char VAR_4[256];
 int VAR_5;
 struct sockaddr_storage VAR_6;
 socklen_t VAR_7 = sizeof(VAR_6);

 if (VAR_3->sock == -1)
  return;

 for (;;) {
  FUNC_5(VAR_0, "CTRL_IFACE - %s - wait for monitor to "
      "attach", VAR_3->wpa_s->ifname);
  FUNC_0(VAR_3->sock);

  VAR_5 = FUNC_2(VAR_3->sock, VAR_4, sizeof(VAR_4) - 1, 0,
          (struct sockaddr *) &VAR_6, &VAR_7);
  if (VAR_5 < 0) {
   FUNC_5(VAR_1, "recvfrom(ctrl_iface): %s",
       FUNC_4(VAR_2));
   continue;
  }
  VAR_4[VAR_5] = '\0';

  if (FUNC_1(VAR_4, "ATTACH") == 0) {

   if (!FUNC_6(&VAR_3->ctrl_dst,
             &VAR_6, VAR_7,
             0)) {
    if (FUNC_3(VAR_3->sock, "OK\n", 3, 0,
        (struct sockaddr *) &VAR_6, VAR_7) <
        0) {
     FUNC_5(VAR_0, "ctrl_iface sendto failed: %s",
         FUNC_4(VAR_2));
    }

    return;
   } else {
    if (FUNC_3(VAR_3->sock, "FAIL\n", 5, 0,
        (struct sockaddr *) &VAR_6, VAR_7) <
        0) {
     FUNC_5(VAR_0, "ctrl_iface sendto failed: %s",
         FUNC_4(VAR_2));
    }
   }
  } else {

   if (FUNC_3(VAR_3->sock, "FAIL\n", 5, 0,
       (struct sockaddr *) &VAR_6, VAR_7) < 0) {
    FUNC_5(VAR_0,
        "ctrl_iface sendto failed: %s",
        FUNC_4(VAR_2));
   }
  }
 }
}
