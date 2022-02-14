
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
typedef enum eapol_int_var { ____Placeholder_eapol_int_var } eapol_int_var ;
struct TYPE_2__ {int (* set_int ) (int ,int,unsigned int) ;} ;


 int FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_0, enum eapol_int_var VAR_1,
     unsigned int VAR_2)
{
 VAR_0->eapol_cb->set_int(VAR_0->eapol_ctx, VAR_1, VAR_2);
}
