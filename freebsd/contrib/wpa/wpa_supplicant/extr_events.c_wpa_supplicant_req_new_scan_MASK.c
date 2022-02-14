
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int scan_for_connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int,int) ;
 int FUNC_3 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2,
     int VAR_3, int VAR_4)
{
 if (!FUNC_1(VAR_2)) {





  FUNC_0(VAR_2, VAR_0, "Short-circuit new scan request "
   "since there are no enabled networks");
  FUNC_3(VAR_2, VAR_1);
  return;
 }

 VAR_2->scan_for_connection = 1;
 FUNC_2(VAR_2, VAR_3, VAR_4);
}
