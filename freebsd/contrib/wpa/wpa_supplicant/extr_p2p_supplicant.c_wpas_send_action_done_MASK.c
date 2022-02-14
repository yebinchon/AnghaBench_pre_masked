
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* p2p_send_action_work; } ;
struct TYPE_2__ {int ctx; } ;


 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct wpa_supplicant *VAR_2 = VAR_1;

 if (VAR_2->p2p_send_action_work) {
  FUNC_0(VAR_0,
         VAR_2, ((void*)0));
  FUNC_2(VAR_2->p2p_send_action_work->ctx);
  FUNC_3(VAR_2->p2p_send_action_work);
  VAR_2->p2p_send_action_work = ((void*)0);
 }

 FUNC_1(VAR_2);
}
