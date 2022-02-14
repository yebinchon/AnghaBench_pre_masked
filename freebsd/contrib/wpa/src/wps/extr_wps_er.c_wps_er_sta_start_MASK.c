
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wps_er_sta {TYPE_5__* cred; TYPE_3__* wps; TYPE_5__* addr; TYPE_2__* ap; } ;
struct wps_config {int registrar; TYPE_5__* peer_addr; int wps; } ;
struct wpabuf {int dummy; } ;
typedef int cfg ;
struct TYPE_12__ {struct TYPE_12__* mac_addr; int * cred_attr; } ;
struct TYPE_11__ {int er; TYPE_5__* use_cred; } ;
struct TYPE_10__ {TYPE_5__* ap_settings; TYPE_1__* er; } ;
struct TYPE_9__ {int wps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_3 (struct wps_config*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct wps_er_sta*,struct wpabuf*,int ) ;
 TYPE_3__* FUNC_6 (struct wps_config*) ;

__attribute__((used)) static void FUNC_7(struct wps_er_sta *VAR_2, struct wpabuf *VAR_3)
{
 struct wps_config VAR_4;

 if (VAR_2->wps)
  FUNC_4(VAR_2->wps);

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.wps = VAR_2->ap->er->wps;
 VAR_4.registrar = 1;
 VAR_4.peer_addr = VAR_2->addr;

 VAR_2->wps = FUNC_6(&VAR_4);
 if (VAR_2->wps == ((void*)0))
  return;
 VAR_2->wps->er = 1;
 VAR_2->wps->use_cred = VAR_2->ap->ap_settings;
 if (VAR_2->ap->ap_settings) {
  FUNC_0(VAR_2->cred);
  VAR_2->cred = FUNC_1(sizeof(*VAR_2->cred));
  if (VAR_2->cred) {
   FUNC_2(VAR_2->cred, VAR_2->ap->ap_settings,
      sizeof(*VAR_2->cred));
   VAR_2->cred->cred_attr = ((void*)0);
   FUNC_2(VAR_2->cred->mac_addr, VAR_2->addr, VAR_0);
   VAR_2->wps->use_cred = VAR_2->cred;
  }
 }

 FUNC_5(VAR_2, VAR_3, VAR_1);
}
