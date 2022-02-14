
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int mac_addr; } ;
struct wps_data {TYPE_2__* wps; int p2p_dev_addr; TYPE_1__ peer_dev; scalar_t__ new_psk_len; } ;
struct wpabuf {int dummy; } ;
typedef int psk ;
typedef int hex ;
struct TYPE_4__ {int ap_auth_type; int network_key_len; char* network_key; scalar_t__ registrar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int,int *,int) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,char*,int) ;
 int FUNC_7 (scalar_t__,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_8(struct wps_data *VAR_5, struct wpabuf *VAR_6)
{
 if ((VAR_5->wps->ap_auth_type & (VAR_4 | VAR_3)) &&
     VAR_5->wps->network_key_len == 0) {
  char VAR_7[65];
  u8 VAR_8[32];

  if (FUNC_1() != 1 ||
      FUNC_0(VAR_8, sizeof(VAR_8)) < 0) {
   FUNC_3(VAR_2,
       "WPS: Could not generate random PSK");
   return -1;
  }
  FUNC_2(VAR_1, "WPS: Generated per-device PSK",
    VAR_8, sizeof(VAR_8));
  FUNC_3(VAR_1, "WPS:  * Network Key (len=%u)",
      (unsigned int) VAR_5->new_psk_len * 2);
  FUNC_4(VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8));
  FUNC_5(VAR_6, VAR_0);
  FUNC_5(VAR_6, sizeof(VAR_8) * 2);
  FUNC_6(VAR_6, VAR_7, sizeof(VAR_8) * 2);
  if (VAR_5->wps->registrar) {
   FUNC_7(VAR_5->wps->registrar,
           VAR_5->peer_dev.mac_addr,
           VAR_5->p2p_dev_addr, VAR_8, sizeof(VAR_8));
  }
  return 0;
 }

 FUNC_3(VAR_1, "WPS:  * Network Key (len=%u)",
     (unsigned int) VAR_5->wps->network_key_len);
 FUNC_5(VAR_6, VAR_0);
 FUNC_5(VAR_6, VAR_5->wps->network_key_len);
 FUNC_6(VAR_6, VAR_5->wps->network_key, VAR_5->wps->network_key_len);
 return 0;
}
