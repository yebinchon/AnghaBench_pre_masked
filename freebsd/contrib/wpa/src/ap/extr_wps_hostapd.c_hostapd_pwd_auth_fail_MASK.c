
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_pwd_auth_fail {int peer_macaddr; } ;
struct TYPE_2__ {int peer_addr; int failure_reason; int status; } ;
struct hostapd_data {TYPE_1__ wps_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*,int ,struct wps_event_pwd_auth_fail*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_5,
      struct wps_event_pwd_auth_fail *VAR_6)
{

 FUNC_2(VAR_1, "WPS: Authentication failure update");
 VAR_5->wps_stats.status = VAR_3;
 VAR_5->wps_stats.failure_reason = VAR_2;
 FUNC_1(VAR_5->wps_stats.peer_addr, VAR_6->peer_macaddr, VAR_0);

 FUNC_0(VAR_5, VAR_4, VAR_6);
}
