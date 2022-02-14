
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext_password_data {int dummy; } ;
struct eap_sm {struct ext_password_data* ext_pw; int * ext_pw_buf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct eap_sm *VAR_0, struct ext_password_data *VAR_1)
{
 FUNC_0(VAR_0->ext_pw_buf);
 VAR_0->ext_pw_buf = ((void*)0);
 VAR_0->ext_pw = VAR_1;
}
