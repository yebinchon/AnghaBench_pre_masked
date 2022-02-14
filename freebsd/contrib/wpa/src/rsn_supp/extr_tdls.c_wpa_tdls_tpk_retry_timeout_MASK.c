
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; int buf_len; int * buf; int peer_capab; int status_code; int dialog_token; int action_code; int dest; scalar_t__ count; } ;
struct wpa_tdls_peer {TYPE_1__ sm_tmr; int initiator; } ;
struct wpa_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void (*) (void*,void*),struct wpa_sm*,struct wpa_tdls_peer*) ;
 int FUNC_1 (int,int,void (*) (void*,void*),struct wpa_sm*,struct wpa_tdls_peer*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpa_sm*,struct wpa_tdls_peer*,int ) ;
 scalar_t__ FUNC_4 (struct wpa_sm*,int ,int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, void *VAR_4)
{

 struct wpa_sm *VAR_5 = VAR_3;
 struct wpa_tdls_peer *VAR_6 = VAR_4;

 if (VAR_6->sm_tmr.count) {
  VAR_6->sm_tmr.count--;

  FUNC_2(VAR_1, "TDLS: Retrying sending of message "
      "(action_code=%u)",
      VAR_6->sm_tmr.action_code);

  if (VAR_6->sm_tmr.buf == ((void*)0)) {
   FUNC_2(VAR_1, "TDLS: No retry buffer available "
       "for action_code=%u",
       VAR_6->sm_tmr.action_code);
   FUNC_0(FUNC_5, VAR_5,
          VAR_6);
   return;
  }


  if (FUNC_4(VAR_5, VAR_6->sm_tmr.dest,
       VAR_6->sm_tmr.action_code,
       VAR_6->sm_tmr.dialog_token,
       VAR_6->sm_tmr.status_code,
       VAR_6->sm_tmr.peer_capab,
       VAR_6->initiator,
       VAR_6->sm_tmr.buf,
       VAR_6->sm_tmr.buf_len)) {
   FUNC_2(VAR_1, "TDLS: Failed to retry "
       "transmission");
  }

  FUNC_0(FUNC_5, VAR_5, VAR_6);
  FUNC_1(VAR_6->sm_tmr.timer / 1000,
           (VAR_6->sm_tmr.timer % 1000) * 1000,
           FUNC_5, VAR_5, VAR_6);
 } else {
  FUNC_0(FUNC_5, VAR_5, VAR_6);

  FUNC_2(VAR_0, "TDLS: Sending Teardown Request");
  FUNC_3(VAR_5, VAR_6,
         VAR_2);
 }
}
