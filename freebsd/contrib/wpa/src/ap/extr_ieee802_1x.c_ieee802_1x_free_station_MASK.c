
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {struct eapol_state_machine* eapol_sm; TYPE_1__* pending_eapol_rx; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {int radius_class; int last_recv_radius; } ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (struct eapol_state_machine*) ;
 int FUNC_1 (int ,struct hostapd_data*,struct sta_info*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct hostapd_data *VAR_1, struct sta_info *VAR_2)
{
 struct eapol_state_machine *VAR_3 = VAR_2->eapol_sm;





 if (VAR_2->pending_eapol_rx) {
  FUNC_5(VAR_2->pending_eapol_rx->buf);
  FUNC_2(VAR_2->pending_eapol_rx);
  VAR_2->pending_eapol_rx = ((void*)0);
 }

 if (VAR_3 == ((void*)0))
  return;

 VAR_2->eapol_sm = ((void*)0);


 FUNC_4(VAR_3->last_recv_radius);
 FUNC_3(&VAR_3->radius_class);


 FUNC_0(VAR_3);
}
