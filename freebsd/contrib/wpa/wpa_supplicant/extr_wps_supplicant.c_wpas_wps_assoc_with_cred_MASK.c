
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 int VAR_4 = VAR_2 != ((void*)0);

 FUNC_0(VAR_0, "WPS: Continuing association after eapol_cb");
 if (!VAR_4 ||
     FUNC_1(VAR_3) != 1)
  FUNC_2(VAR_3, 0, 0);
}
