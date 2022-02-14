
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
typedef enum eapol_int_var { ____Placeholder_eapol_int_var } eapol_int_var ;
struct TYPE_2__ {unsigned int (* get_int ) (int ,int) ;} ;


 unsigned int FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct eap_sm *VAR_0, enum eapol_int_var VAR_1)
{
 return VAR_0->eapol_cb->get_int(VAR_0->eapol_ctx, VAR_1);
}
