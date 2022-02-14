
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_fast_data {scalar_t__ anon_provisioning; } ;


 int FUNC_0 (struct eap_sm*,struct eap_fast_data*) ;
 int FUNC_1 (struct eap_sm*,struct eap_fast_data*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_0, struct eap_fast_data *VAR_1)
{
 int VAR_2;

 if (VAR_1->anon_provisioning)
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2;
}
