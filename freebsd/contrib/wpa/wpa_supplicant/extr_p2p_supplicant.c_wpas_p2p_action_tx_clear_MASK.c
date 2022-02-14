
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* p2p_send_action_work; } ;
struct send_action_work {int wait_time; } ;
struct TYPE_2__ {struct send_action_work* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2)
{
 if (VAR_2->p2p_send_action_work) {
  struct send_action_work *VAR_3;

  VAR_3 = VAR_2->p2p_send_action_work->ctx;
  FUNC_2(VAR_0,
      "P2P: Clear Action TX work @%p (wait_time=%u)",
      VAR_2->p2p_send_action_work, VAR_3->wait_time);
  if (VAR_3->wait_time == 0) {
   FUNC_3(VAR_2);
  } else {






   FUNC_0(VAR_1,
          VAR_2, ((void*)0));
   FUNC_1(
    0, VAR_3->wait_time * 1000,
    VAR_1,
    VAR_2, ((void*)0));
  }
 }
}
