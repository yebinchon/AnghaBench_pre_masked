
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_2__* conf; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {void* sin_port; void* sin6_port; TYPE_1__ sin_addr; int sin_family; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct ctrl_iface_priv {int sock; int cookie; struct wpa_supplicant* wpa_s; } ;
typedef int port_str ;
typedef int addr ;
struct TYPE_4__ {struct ctrl_iface_priv* ctrl_interface; } ;


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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,struct wpa_supplicant*,struct ctrl_iface_priv*) ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int VAR_12 ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (struct ctrl_iface_priv*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int FUNC_10 (char*,int,char*,int) ;
 struct ctrl_iface_priv* FUNC_11 (char*) ;
 char* FUNC_12 (struct ctrl_iface_priv*,char*) ;
 struct ctrl_iface_priv* FUNC_13 (int) ;
 int FUNC_14 (int,int ,int ) ;
 struct ctrl_iface_priv* FUNC_15 (int ) ;
 int FUNC_16 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,struct ctrl_iface_priv*) ;
 int VAR_13 ;
 int VAR_14 ;

struct ctrl_iface_priv *
FUNC_19(struct wpa_supplicant *VAR_15)
{
 struct ctrl_iface_priv *VAR_16;
 char VAR_17[40];
 int VAR_18 = VAR_9;
 char *VAR_19;




 struct sockaddr_in VAR_20;
 int VAR_21 = VAR_6;


 VAR_16 = FUNC_13(sizeof(*VAR_16));
 if (VAR_16 == ((void*)0))
  return ((void*)0);
 VAR_16->wpa_s = VAR_15;
 VAR_16->sock = -1;
 FUNC_8(VAR_16->cookie, VAR_2);

 if (VAR_15->conf->ctrl_interface == ((void*)0))
  return VAR_16;

 VAR_19 = FUNC_12(VAR_15->conf->ctrl_interface, "udp:");
 if (VAR_19) {
  VAR_19 += 4;
  VAR_18 = FUNC_0(VAR_19);
  if (VAR_18 <= 0) {
   FUNC_18(VAR_5, "Invalid ctrl_iface UDP port: %s",
       VAR_15->conf->ctrl_interface);
   goto fail;
  }
 }

 VAR_16->sock = FUNC_14(VAR_21, VAR_8, 0);
 if (VAR_16->sock < 0) {
  FUNC_18(VAR_5, "socket(PF_INET): %s", FUNC_15(VAR_11));
  goto fail;
 }

 FUNC_9(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.sin_family = VAR_0;



 VAR_20.sin_addr.s_addr = FUNC_4((127 << 24) | 1);


try_again:



 VAR_20.sin_port = FUNC_5(VAR_18);

 if (FUNC_1(VAR_16->sock, (struct sockaddr *) &VAR_20, sizeof(VAR_20)) < 0) {
  VAR_18--;
  if ((VAR_9 - VAR_18) < VAR_10)
   goto try_again;
  FUNC_18(VAR_5, "bind(AF_INET): %s", FUNC_15(VAR_11));
  goto fail;
 }


 FUNC_10(VAR_17, sizeof(VAR_17), "udp:%d", VAR_18);
 FUNC_7(VAR_15->conf->ctrl_interface);
 VAR_15->conf->ctrl_interface = FUNC_11(VAR_17);
 if (!VAR_15->conf->ctrl_interface) {
  FUNC_16(VAR_15, VAR_5, "Failed to malloc ctrl_interface");
  goto fail;
 }





 FUNC_3(VAR_16->sock, VAR_14,
     VAR_15, VAR_16);
 FUNC_17(VAR_13);

 return VAR_16;

fail:
 if (VAR_16->sock >= 0)
  FUNC_2(VAR_16->sock);
 FUNC_7(VAR_16);
 return ((void*)0);
}
