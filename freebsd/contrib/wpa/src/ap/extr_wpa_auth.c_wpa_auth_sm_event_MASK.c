
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {int started; int ft_completed; int fils_completed; void* changed; scalar_t__ in_step_loop; int PTK; void* PTK_valid; int wpa_key_mgmt; scalar_t__ mgmt_frame_prot; void* tk_already_set; void* ReAuthenticationRequest; void* PtkGroupInit; void* GUpdateStationKeys; TYPE_1__* group; void* AuthenticationRequest; void* Init; int pmk_r1_len; int * pmk_r1; int xxkey_len; int * xxkey; int pmk_len; int * PMK; void* DeauthenticationRequest; int addr; int wpa_auth; } ;
typedef enum wpa_event { ____Placeholder_wpa_event } wpa_event ;
struct TYPE_2__ {int GKeyDoneStations; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct wpa_state_machine*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct wpa_state_machine*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int) ;
 int FUNC_5 (struct wpa_state_machine*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpa_state_machine*) ;
 int FUNC_9 (struct wpa_state_machine*) ;

int FUNC_10(struct wpa_state_machine *VAR_4, enum wpa_event VAR_5)
{
 int VAR_6 = 1;

 if (VAR_4 == ((void*)0))
  return -1;

 FUNC_4(VAR_4->wpa_auth, VAR_4->addr, VAR_1,
    "event %d notification", VAR_5);

 switch (VAR_5) {
 case 133:
 case 136:
  break;
 case 132:
 case 131:
  VAR_4->DeauthenticationRequest = VAR_3;
  break;
 case 129:
 case 128:
  if (!VAR_4->started) {







   FUNC_7(VAR_2, "WPA state machine had not been "
       "started - initialize now");
   VAR_4->started = 1;
   VAR_4->Init = VAR_3;
   if (FUNC_9(VAR_4) == 1)
    return 1;
   VAR_4->Init = VAR_0;
   VAR_4->AuthenticationRequest = VAR_3;
   break;
  }
  if (VAR_4->GUpdateStationKeys) {




   VAR_4->group->GKeyDoneStations--;
   VAR_4->GUpdateStationKeys = VAR_0;
   VAR_4->PtkGroupInit = VAR_3;
  }
  VAR_4->ReAuthenticationRequest = VAR_3;
  break;
 case 134:
  break;

 case 135:







  break;

 case 130:
  VAR_4->tk_already_set = VAR_0;
  return 0;
 }
 if (VAR_6) {
  VAR_4->PTK_valid = VAR_0;
  FUNC_1(&VAR_4->PTK, 0, sizeof(VAR_4->PTK));

  if (VAR_5 != 128)
   FUNC_8(VAR_4);
 }

 if (VAR_4->in_step_loop) {




  VAR_4->changed = VAR_3;
  return 0;
 }
 return FUNC_9(VAR_4);
}
