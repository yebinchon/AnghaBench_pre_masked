
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_scan_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_3;

 if (VAR_4->p2p_scan_work && FUNC_2(VAR_4) < 0)
  FUNC_1(VAR_0, "P2P: Abort ongoing scan failed");

 FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_3(VAR_4);
}
