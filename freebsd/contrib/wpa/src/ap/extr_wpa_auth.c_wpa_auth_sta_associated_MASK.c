
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {int started; void* AuthenticationRequest; void* Init; int addr; void* ReAuthenticationRequest; int key_replay; void* Pair; void* wpa_ptk_state; scalar_t__ fils_completed; scalar_t__ ft_completed; } ;
struct TYPE_2__ {int wpa; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct wpa_authenticator*,int ,int ,char*) ;
 int FUNC_2 (struct wpa_state_machine*) ;

int FUNC_3(struct wpa_authenticator *VAR_4,
       struct wpa_state_machine *VAR_5)
{
 if (VAR_4 == ((void*)0) || !VAR_4->conf.wpa || VAR_5 == ((void*)0))
  return -1;
 if (VAR_5->started) {
  FUNC_0(&VAR_5->key_replay, 0, sizeof(VAR_5->key_replay));
  VAR_5->ReAuthenticationRequest = VAR_2;
  return FUNC_2(VAR_5);
 }

 FUNC_1(VAR_4, VAR_5->addr, VAR_1,
   "start authentication");
 VAR_5->started = 1;

 VAR_5->Init = VAR_2;
 if (FUNC_2(VAR_5) == 1)
  return 1;
 VAR_5->Init = VAR_0;
 VAR_5->AuthenticationRequest = VAR_2;
 return FUNC_2(VAR_5);
}
