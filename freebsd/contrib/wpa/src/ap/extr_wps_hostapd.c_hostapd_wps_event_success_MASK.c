
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_success {int peer_macaddr; } ;
struct TYPE_2__ {int peer_addr; int status; int pbc_status; } ;
struct hostapd_data {TYPE_1__ wps_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hostapd_data *VAR_3,
          struct wps_event_success *VAR_4)
{

 VAR_3->wps_stats.pbc_status = VAR_1;
 VAR_3->wps_stats.status = VAR_2;
 FUNC_0(VAR_3->wps_stats.peer_addr, VAR_4->peer_macaddr, VAR_0);
}
