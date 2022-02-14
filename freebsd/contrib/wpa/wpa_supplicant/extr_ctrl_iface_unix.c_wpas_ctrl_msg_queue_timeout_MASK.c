
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; struct ctrl_iface_priv* ctrl_iface; } ;
struct ctrl_iface_priv {int sock; int msg_queue; } ;
struct ctrl_iface_global_priv {int sock; int msg_queue; } ;
struct TYPE_2__ {struct ctrl_iface_global_priv* ctrl_iface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,void (*) (void*,void*),struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 struct ctrl_iface_priv *VAR_4;
 struct ctrl_iface_global_priv *VAR_5;
 int VAR_6 = -1, VAR_7 = -1;

 FUNC_3(VAR_3->global);
 FUNC_4(VAR_3);

 VAR_4 = VAR_3->ctrl_iface;
 if (VAR_4 && !FUNC_0(&VAR_4->msg_queue))
  VAR_6 = VAR_4->sock;

 VAR_5 = VAR_3->global->ctrl_iface;
 if (VAR_5 && !FUNC_0(&VAR_5->msg_queue))
  VAR_7 = VAR_5->sock;

 if (VAR_6 > -1 || VAR_7 > -1) {

  FUNC_2(VAR_0,
      "CTRL: Had to throttle pending event message transmission for (sock %d gsock %d)",
      VAR_6, VAR_7);
  FUNC_1(0, 20000, FUNC_5,
           VAR_3, ((void*)0));
 }
}
