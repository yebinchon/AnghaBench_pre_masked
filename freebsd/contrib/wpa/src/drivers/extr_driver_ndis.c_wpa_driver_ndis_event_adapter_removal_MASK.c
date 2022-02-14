
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,union wpa_event_data*) ;

void FUNC_4(struct wpa_driver_ndis_data *VAR_3)
{
 union wpa_event_data VAR_4;

 FUNC_2(VAR_2, "NDIS: Notify Adapter Removal");
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_4.interface_status.ifname, VAR_3->ifname,
     sizeof(VAR_4.interface_status.ifname));
 VAR_4.interface_status.ievent = VAR_0;
 FUNC_3(VAR_3->ctx, VAR_1, &VAR_4);
}
