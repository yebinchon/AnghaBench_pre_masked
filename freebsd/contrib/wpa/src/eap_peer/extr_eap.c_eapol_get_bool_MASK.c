
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
typedef enum eapol_bool_var { ____Placeholder_eapol_bool_var } eapol_bool_var ;
struct TYPE_2__ {int (* get_bool ) (int ,int) ;} ;
typedef int Boolean ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static Boolean FUNC_1(struct eap_sm *VAR_0, enum eapol_bool_var VAR_1)
{
 return VAR_0->eapol_cb->get_bool(VAR_0->eapol_ctx, VAR_1);
}
