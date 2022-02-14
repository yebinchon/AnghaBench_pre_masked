
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_group {TYPE_1__* cfg; scalar_t__ beacon_update; } ;
struct TYPE_2__ {int cb_ctx; int (* ie_update ) (int ,struct wpabuf*,struct wpabuf*) ;} ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (struct p2p_group*) ;
 struct wpabuf* FUNC_1 (struct p2p_group*) ;
 int FUNC_2 (int ,struct wpabuf*,struct wpabuf*) ;
 int FUNC_3 (struct p2p_group*) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;

void FUNC_5(struct p2p_group *VAR_1)
{
 struct wpabuf *VAR_2;
 struct wpabuf *VAR_3;





 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == ((void*)0))
  return;
 FUNC_4(VAR_0, "P2P: Update GO Probe Response P2P IE",
   VAR_3);

 if (VAR_1->beacon_update) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   VAR_1->beacon_update = 0;
  FUNC_4(VAR_0, "P2P: Update GO Beacon P2P IE",
    VAR_2);
 } else
  VAR_2 = ((void*)0);

 VAR_1->cfg->ie_update(VAR_1->cfg->cb_ctx, VAR_2, VAR_3);
}
