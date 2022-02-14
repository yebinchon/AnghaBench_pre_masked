
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_supplicant {TYPE_3__* conf; TYPE_2__* global; } ;
struct ctrl_iface_priv {int sock; struct wpa_supplicant* wpa_s; int msg_queue; int ctrl_dst; } ;
struct TYPE_6__ {int * ctrl_interface; } ;
struct TYPE_4__ {char* ctrl_interface; } ;
struct TYPE_5__ {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctrl_iface_priv*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 struct ctrl_iface_priv* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*,int *) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,struct ctrl_iface_priv*) ;

struct ctrl_iface_priv *
FUNC_8(struct wpa_supplicant *VAR_1)
{
 struct ctrl_iface_priv *VAR_2;

 VAR_2 = FUNC_5(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_2->ctrl_dst);
 FUNC_0(&VAR_2->msg_queue);
 VAR_2->wpa_s = VAR_1;
 VAR_2->sock = -1;

 if (VAR_1->conf->ctrl_interface == ((void*)0))
  return VAR_2;
 if (FUNC_7(VAR_1, VAR_2) < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
