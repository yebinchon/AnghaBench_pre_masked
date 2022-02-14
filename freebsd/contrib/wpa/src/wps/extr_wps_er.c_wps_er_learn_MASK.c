
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_er_ap {scalar_t__ wps; int * uuid; } ;
struct wps_er {int skip_set_sel_reg; TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct wps_er_ap* FUNC_1 (struct wps_er*,int *,int const*,int const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct wps_er_ap*,int ) ;
 int FUNC_3 (int ,int *,int const*,int const*,size_t,int ) ;

int FUNC_4(struct wps_er *VAR_2, const u8 *VAR_3, const u8 *VAR_4,
   const u8 *VAR_5, size_t VAR_6)
{
 struct wps_er_ap *VAR_7;

 if (VAR_2 == ((void*)0))
  return -1;

 VAR_7 = FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS ER: AP not found for learn "
      "request");
  return -1;
 }
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_7->uuid;
 if (VAR_7->wps) {
  FUNC_0(VAR_0, "WPS ER: Pending operation ongoing "
      "with the AP - cannot start learn");
  return -1;
 }

 if (FUNC_2(VAR_7, VAR_1) < 0)
  return -1;

 VAR_2->skip_set_sel_reg = 1;
 FUNC_3(VAR_2->wps->registrar, ((void*)0), VAR_3, VAR_5, VAR_6, 0);
 VAR_2->skip_set_sel_reg = 0;

 return 0;
}
