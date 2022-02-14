
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int list; scalar_t__ subscribed; int * wps; int * http; int location; int addr; } ;
struct wps_er {int ap_unsubscribing; int wps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct wps_er*,struct wps_er_ap*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct wps_er_ap*,int ) ;
 int FUNC_8 (struct wps_er_ap*) ;
 int VAR_2 ;
 int FUNC_9 (struct wps_er*,struct wps_er_ap*) ;
 int FUNC_10 (struct wps_er_ap*) ;

__attribute__((used)) static void FUNC_11(struct wps_er *VAR_3, struct wps_er_ap *VAR_4)
{
 FUNC_5(VAR_0, "WPS ER: Removing AP entry for %s (%s)",
     FUNC_4(VAR_4->addr), VAR_4->location);
 FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_10(VAR_4);
 FUNC_7(VAR_3->wps, VAR_4, VAR_1);
 FUNC_3(VAR_4->http);
 VAR_4->http = ((void*)0);
 if (VAR_4->wps) {
  FUNC_6(VAR_4->wps);
  VAR_4->wps = ((void*)0);
 }

 FUNC_1(&VAR_4->list);
 if (VAR_4->subscribed) {
  FUNC_0(&VAR_3->ap_unsubscribing, &VAR_4->list);
  FUNC_9(VAR_3, VAR_4);
 } else
  FUNC_8(VAR_4);
}
