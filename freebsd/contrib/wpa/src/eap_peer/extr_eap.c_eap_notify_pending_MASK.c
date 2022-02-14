
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* notify_pending ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct eap_sm *VAR_0)
{
 VAR_0->eapol_cb->notify_pending(VAR_0->eapol_ctx);
}
