
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ctrl_interface; } ;
struct wpa_global {TYPE_1__ params; } ;
struct ctrl_iface_global_priv {int sock; struct wpa_global* global; int msg_queue; int ctrl_dst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctrl_iface_global_priv*) ;
 struct ctrl_iface_global_priv* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct wpa_global*,struct ctrl_iface_global_priv*) ;

struct ctrl_iface_global_priv *
FUNC_5(struct wpa_global *VAR_1)
{
 struct ctrl_iface_global_priv *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_2->ctrl_dst);
 FUNC_0(&VAR_2->msg_queue);
 VAR_2->global = VAR_1;
 VAR_2->sock = -1;

 if (VAR_1->params.ctrl_interface == ((void*)0))
  return VAR_2;

 if (FUNC_4(VAR_1, VAR_2) < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 FUNC_3(VAR_0);

 return VAR_2;
}
