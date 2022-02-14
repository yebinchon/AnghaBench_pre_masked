
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_send_action_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_2)
{
 if (!FUNC_2(VAR_2))
  return;

 if (VAR_2->p2p_send_action_work) {
  FUNC_5(VAR_2);
  FUNC_0(VAR_1,
         VAR_2, ((void*)0));
  FUNC_3(VAR_2);
 }

 FUNC_4(VAR_0, "P2P: Drop pending Action TX due to new "
     "operation request");
 FUNC_1(VAR_2);
}
