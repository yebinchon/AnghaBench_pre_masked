
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int last_auth_timeout_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,int) ;
 int VAR_1 ;

void FUNC_4(struct wpa_supplicant *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->last_auth_timeout_sec + VAR_3;

 if (FUNC_1(VAR_1, VAR_2, ((void*)0))) {
  FUNC_3(VAR_2, VAR_0,
   "Authentication timeout restart: %d sec", VAR_4);
  FUNC_0(VAR_1, VAR_2, ((void*)0));
  FUNC_2(VAR_4, 0, VAR_1,
           VAR_2, ((void*)0));
 }
}
