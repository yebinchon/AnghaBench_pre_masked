
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int action_code; scalar_t__ buf_len; scalar_t__ timer; scalar_t__ count; int * buf; } ;
struct wpa_tdls_peer {TYPE_1__ sm_tmr; } ;
struct wpa_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wpa_sm*,struct wpa_tdls_peer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct wpa_sm *VAR_3,
           struct wpa_tdls_peer *VAR_4,
           u8 VAR_5)
{
 if (VAR_5 == VAR_4->sm_tmr.action_code) {
  FUNC_2(VAR_0, "TDLS: Retry timeout cancelled for "
      "action_code=%u", VAR_5);


  FUNC_0(VAR_2, VAR_3, VAR_4);


  FUNC_1(VAR_4->sm_tmr.buf);
  VAR_4->sm_tmr.buf = ((void*)0);

  VAR_4->sm_tmr.count = 0;
  VAR_4->sm_tmr.timer = 0;
  VAR_4->sm_tmr.buf_len = 0;
  VAR_4->sm_tmr.action_code = 0xff;
 } else {
  FUNC_2(VAR_1, "TDLS: Error in cancelling retry timeout "
      "(Unknown action_code=%u)", VAR_5);
 }
}
