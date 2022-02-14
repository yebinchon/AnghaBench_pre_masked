
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int s_addr; } ;
struct wps_er_ap {int * location; int http; TYPE_1__ addr; int uuid; int list; scalar_t__ id; struct wps_er* er; int sta; } ;
struct wps_er {int ap; scalar_t__ next_ap_id; } ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct wps_er*,struct wps_er_ap*) ;
 int FUNC_3 (int,int ,int ,struct wps_er*,struct wps_er_ap*) ;
 int FUNC_4 (int *,int *,int,int ,struct wps_er_ap*) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (struct wps_er_ap*) ;
 int FUNC_7 (int ,int const*,int ) ;
 int * FUNC_8 (char const*) ;
 struct wps_er_ap* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,int ,int *) ;
 struct wps_er_ap* FUNC_11 (struct wps_er*,struct in_addr*,int const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_12(struct wps_er *VAR_4, const u8 *VAR_5, struct in_addr *VAR_6,
     const char *VAR_7, int VAR_8)
{
 struct wps_er_ap *VAR_9;

 VAR_9 = FUNC_11(VAR_4, VAR_6, VAR_5, ((void*)0));
 if (VAR_9) {

  FUNC_2(VAR_2, VAR_4, VAR_9);
  FUNC_3(VAR_8, 0, VAR_2, VAR_4, VAR_9);
  return;
 }

 VAR_9 = FUNC_9(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return;
 FUNC_1(&VAR_9->sta);
 VAR_9->er = VAR_4;
 VAR_9->id = ++VAR_4->next_ap_id;
 VAR_9->location = FUNC_8(VAR_7);
 if (VAR_9->location == ((void*)0)) {
  FUNC_6(VAR_9);
  return;
 }
 FUNC_0(&VAR_4->ap, &VAR_9->list);

 VAR_9->addr.s_addr = VAR_6->s_addr;
 FUNC_7(VAR_9->uuid, VAR_5, VAR_1);
 FUNC_3(VAR_8, 0, VAR_2, VAR_4, VAR_9);

 FUNC_10(VAR_0, "WPS ER: Added AP entry for %s (%s)",
     FUNC_5(VAR_9->addr), VAR_9->location);


 VAR_9->http = FUNC_4(VAR_9->location, ((void*)0), 10000,
       VAR_3, VAR_9);
}
