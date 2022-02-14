
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int psk_set; int psk; int ssid_len; int ssid; int passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

void FUNC_2(struct wpa_ssid *VAR_2)
{

 FUNC_0(VAR_2->passphrase, VAR_2->ssid, VAR_2->ssid_len, 4096,
      VAR_2->psk, VAR_1);
 FUNC_1(VAR_0, "PSK (from passphrase)",
   VAR_2->psk, VAR_1);
 VAR_2->psk_set = 1;

}
