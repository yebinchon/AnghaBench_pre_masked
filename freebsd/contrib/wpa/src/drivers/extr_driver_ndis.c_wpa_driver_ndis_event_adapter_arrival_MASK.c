
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ievent; int ifname; } ;
union wpa_event_data {TYPE_1__ interface_status; } ;
struct wpa_driver_ndis_data {int ctx; int ifname; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_4 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_5 (struct wpa_driver_ndis_data*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,union wpa_event_data*) ;

void FUNC_8(struct wpa_driver_ndis_data *VAR_3)
{
 union wpa_event_data VAR_4;
 int VAR_5;

 FUNC_6(VAR_2, "NDIS: Notify Adapter Arrival");

 for (VAR_5 = 0; VAR_5 < 30; VAR_5++) {

  FUNC_3(VAR_3);
  if (FUNC_4(VAR_3) < 0 ||
      FUNC_5(VAR_3) < 0) {
   FUNC_6(VAR_2, "NDIS: Driver re-initialization "
       "(%d) failed", VAR_5);
   FUNC_1(1, 0);
  } else {
   FUNC_6(VAR_2, "NDIS: Driver re-initialized");
   break;
  }
 }

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_4.interface_status.ifname, VAR_3->ifname,
     sizeof(VAR_4.interface_status.ifname));
 VAR_4.interface_status.ievent = VAR_0;
 FUNC_7(VAR_3->ctx, VAR_1, &VAR_4);
}
