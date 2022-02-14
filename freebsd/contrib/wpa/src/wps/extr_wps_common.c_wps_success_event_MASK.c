
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_macaddr; } ;
union wps_event_data {TYPE_1__ success; } ;
typedef int u8 ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wps_event_data*) ;

void FUNC_3(struct wps_context *VAR_2, const u8 *VAR_3)
{
 union wps_event_data VAR_4;

 if (VAR_2->event_cb == ((void*)0))
  return;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(VAR_4.success.peer_macaddr, VAR_3, VAR_0);
 VAR_2->event_cb(VAR_2->cb_ctx, VAR_1, &VAR_4);
}
