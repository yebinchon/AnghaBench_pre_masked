
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int p2p_send_action_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,
           void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;

 if (!VAR_3->p2p_send_action_work)
  return;

 FUNC_0(VAR_0, "P2P: Send Action frame radio work timed out");
 FUNC_1(VAR_3);
}
