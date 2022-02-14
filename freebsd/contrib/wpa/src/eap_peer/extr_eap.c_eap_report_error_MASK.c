
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* notify_eap_error ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, "EAP: Error notification: %d", VAR_2);
 if (VAR_1->eapol_cb->notify_eap_error)
  VAR_1->eapol_cb->notify_eap_error(VAR_1->eapol_ctx, VAR_2);
}
