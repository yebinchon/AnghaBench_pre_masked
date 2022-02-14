
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int key_mgmt; int eapol_flags; int owe_only; scalar_t__ mixed_cell; } ;
struct wpa_bss {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct wpa_ssid*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct wpa_bss *VAR_7,
     struct wpa_ssid *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8->mixed_cell)
  return 1;
 if (FUNC_0(VAR_8))
  VAR_9 = 1;
 if (FUNC_1(VAR_8->key_mgmt))
  VAR_9 = 1;

 if (VAR_8->key_mgmt & VAR_4)
  VAR_9 = 1;

 if (VAR_7->caps & VAR_2)
  return VAR_9;
 return !VAR_9;
}
