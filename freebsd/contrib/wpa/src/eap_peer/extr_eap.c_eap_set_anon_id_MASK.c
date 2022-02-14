
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* set_anon_id ) (int ,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,size_t) ;

void FUNC_1(struct eap_sm *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 if (VAR_0->eapol_cb->set_anon_id)
  VAR_0->eapol_cb->set_anon_id(VAR_0->eapol_ctx, VAR_1, VAR_2);
}
