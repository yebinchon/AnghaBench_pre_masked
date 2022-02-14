
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enrollee; int part; int peer_macaddr; } ;
union wps_event_data {TYPE_1__ pwd_auth_fail; } ;
typedef int u8 ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wps_event_data*) ;

void FUNC_3(struct wps_context *VAR_2, int VAR_3, int VAR_4,
        const u8 *VAR_5)
{
 union wps_event_data VAR_6;

 if (VAR_2->event_cb == ((void*)0))
  return;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.pwd_auth_fail.enrollee = VAR_3;
 VAR_6.pwd_auth_fail.part = VAR_4;
 FUNC_0(VAR_6.pwd_auth_fail.peer_macaddr, VAR_5, VAR_0);
 VAR_2->event_cb(VAR_2->cb_ctx, VAR_1, &VAR_6);
}
