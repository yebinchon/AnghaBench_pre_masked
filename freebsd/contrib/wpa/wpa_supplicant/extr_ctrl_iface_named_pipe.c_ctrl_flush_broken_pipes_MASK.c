
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl_dst {int used; int pipe; struct wpa_ctrl_dst* next; } ;
struct ctrl_iface_priv {struct wpa_ctrl_dst* ctrl_dst; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wpa_ctrl_dst*) ;
 int FUNC_2 (int ,char*,struct wpa_ctrl_dst*) ;

__attribute__((used)) static void FUNC_3(struct ctrl_iface_priv *VAR_1)
{
 struct wpa_ctrl_dst *VAR_2, *VAR_3;

 VAR_2 = VAR_1->ctrl_dst;

 while (VAR_2) {
  VAR_3 = VAR_2->next;
  if (FUNC_0(VAR_2->pipe, VAR_2->used)) {
   FUNC_2(VAR_0, "CTRL: closing broken pipe %p",
       VAR_2);
   FUNC_1(VAR_2);
  }
  VAR_2 = VAR_3;
 }
}
