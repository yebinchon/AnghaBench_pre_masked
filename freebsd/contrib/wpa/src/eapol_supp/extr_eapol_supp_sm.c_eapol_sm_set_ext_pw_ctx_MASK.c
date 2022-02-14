
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext_password_data {int dummy; } ;
struct eapol_sm {scalar_t__ eap; } ;


 int FUNC_0 (scalar_t__,struct ext_password_data*) ;

void FUNC_1(struct eapol_sm *VAR_0,
        struct ext_password_data *VAR_1)
{
 if (VAR_0 && VAR_0->eap)
  FUNC_0(VAR_0->eap, VAR_1);
}
