
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_wpa_psk {int dummy; } ;
struct hostapd_ssid {TYPE_1__* wpa_psk; int ssid_len; scalar_t__ ssid; scalar_t__ wpa_passphrase; } ;
struct TYPE_2__ {int psk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int,int ,int ) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct hostapd_ssid *VAR_3)
{
 VAR_3->wpa_psk = FUNC_1(sizeof(struct hostapd_wpa_psk));
 if (VAR_3->wpa_psk == ((void*)0)) {
  FUNC_6(VAR_1, "Unable to alloc space for PSK");
  return -1;
 }
 FUNC_3(VAR_0, "SSID",
     (u8 *) VAR_3->ssid, VAR_3->ssid_len);
 FUNC_4(VAR_0, "PSK (ASCII passphrase)",
         (u8 *) VAR_3->wpa_passphrase,
         FUNC_0(VAR_3->wpa_passphrase));
 FUNC_2(VAR_3->wpa_passphrase,
      VAR_3->ssid, VAR_3->ssid_len,
      4096, VAR_3->wpa_psk->psk, VAR_2);
 FUNC_5(VAR_0, "PSK (from passphrase)",
   VAR_3->wpa_psk->psk, VAR_2);
 return 0;
}
