
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int* bssid; int ifname; int own_addr; struct eapol_test_data* drv_priv; int * driver; } ;
struct hostapd_radius_servers {int dummy; } ;
struct TYPE_6__ {int v4; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct hostapd_radius_server {int port; int shared_secret_len; int * shared_secret; TYPE_4__ addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct eapol_test_data {int * radius; TYPE_3__* radius_conf; TYPE_1__ own_ip_addr; int own_addr; } ;
struct TYPE_7__ {int num_auth_servers; int msg_dumps; int force_client_addr; TYPE_4__ client_addr; struct hostapd_radius_server* auth_servers; struct hostapd_radius_server* auth_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,TYPE_4__*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char const*) ;
 void* FUNC_7 (int) ;
 int * FUNC_8 (struct wpa_supplicant*,TYPE_3__*) ;
 int FUNC_9 (int *,int ,int ,struct eapol_test_data*) ;
 int FUNC_10 (char const*,char*,int*,int*,int*,int*) ;
 int FUNC_11 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_12(struct eapol_test_data *VAR_5,
     struct wpa_supplicant *VAR_6, const char *VAR_7,
     int VAR_8, const char *VAR_9,
     const char *VAR_10, const char *VAR_11)
{
 struct hostapd_radius_server *VAR_12;
 int VAR_13;

 VAR_6->driver = &VAR_3;
 VAR_6->drv_priv = VAR_5;
 VAR_6->bssid[5] = 1;
 FUNC_3(VAR_6->own_addr, VAR_5->own_addr, VAR_0);
 VAR_5->own_ip_addr.s_addr = FUNC_2((127 << 24) | 1);
 FUNC_5(VAR_6->ifname, VAR_11, sizeof(VAR_6->ifname));

 VAR_5->radius_conf = FUNC_7(sizeof(struct hostapd_radius_servers));
 FUNC_0(VAR_5->radius_conf != ((void*)0));
 VAR_5->radius_conf->num_auth_servers = 1;
 VAR_12 = FUNC_7(sizeof(struct hostapd_radius_server));
 FUNC_0(VAR_12 != ((void*)0));
 if (FUNC_1(VAR_7, &VAR_12->addr) < 0) {
  FUNC_11(VAR_1, "Invalid IP address '%s'",
      VAR_7);
  FUNC_0(0);
 }

 VAR_12->port = VAR_8;
 VAR_12->shared_secret = (u8 *) FUNC_4(VAR_9);
 VAR_12->shared_secret_len = FUNC_6(VAR_9);
 VAR_5->radius_conf->auth_server = VAR_12;
 VAR_5->radius_conf->auth_servers = VAR_12;
 VAR_5->radius_conf->msg_dumps = 1;
 if (VAR_10) {
  if (FUNC_1(VAR_10,
       &VAR_5->radius_conf->client_addr) == 0)
   VAR_5->radius_conf->force_client_addr = 1;
  else {
   FUNC_11(VAR_1, "Invalid IP address '%s'",
       VAR_10);
   FUNC_0(0);
  }
 }

 VAR_5->radius = FUNC_8(VAR_6, VAR_5->radius_conf);
 FUNC_0(VAR_5->radius != ((void*)0));

 VAR_13 = FUNC_9(VAR_5->radius, VAR_2,
         VAR_4, VAR_5);
 FUNC_0(VAR_13 == 0);
}
