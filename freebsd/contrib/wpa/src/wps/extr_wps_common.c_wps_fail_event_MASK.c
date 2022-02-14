
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; int peer_macaddr; void* error_indication; void* config_error; } ;
union wps_event_data {TYPE_1__ fail; } ;
typedef int u8 ;
typedef void* u16 ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;
typedef enum wps_msg_type { ____Placeholder_wps_msg_type } wps_msg_type ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wps_event_data*) ;

void FUNC_3(struct wps_context *VAR_2, enum wps_msg_type VAR_3,
      u16 VAR_4, u16 VAR_5, const u8 *VAR_6)
{
 union wps_event_data VAR_7;

 if (VAR_2->event_cb == ((void*)0))
  return;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.fail.msg = VAR_3;
 VAR_7.fail.config_error = VAR_4;
 VAR_7.fail.error_indication = VAR_5;
 FUNC_0(VAR_7.fail.peer_macaddr, VAR_6, VAR_0);
 VAR_2->event_cb(VAR_2->cb_ctx, VAR_1, &VAR_7);
}
