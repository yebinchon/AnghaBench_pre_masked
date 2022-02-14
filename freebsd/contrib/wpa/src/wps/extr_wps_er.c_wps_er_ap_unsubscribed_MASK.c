
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {int list; int location; int addr; } ;
struct wps_er {int ap_unsubscribing; scalar_t__ deinitializing; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct wps_er_ap*) ;
 int FUNC_5 (struct wps_er*,int *) ;

__attribute__((used)) static void FUNC_6(struct wps_er *VAR_1, struct wps_er_ap *VAR_2)
{
 FUNC_3(VAR_0, "WPS ER: Unsubscribed from AP %s (%s)",
     FUNC_2(VAR_2->addr), VAR_2->location);
 FUNC_0(&VAR_2->list);
 FUNC_4(VAR_2);

 if (VAR_1->deinitializing && FUNC_1(&VAR_1->ap_unsubscribing))
  FUNC_5(VAR_1, ((void*)0));
}
