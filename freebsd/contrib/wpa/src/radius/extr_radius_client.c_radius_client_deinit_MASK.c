
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {struct radius_client_data* acct_handlers; struct radius_client_data* auth_handlers; } ;


 int FUNC_0 (int ,struct radius_client_data*,int *) ;
 int FUNC_1 (struct radius_client_data*) ;
 int FUNC_2 (struct radius_client_data*,int ) ;
 int FUNC_3 (struct radius_client_data*) ;
 int FUNC_4 (struct radius_client_data*) ;
 int VAR_0 ;

void FUNC_5(struct radius_client_data *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_0(VAR_0, VAR_1, ((void*)0));

 FUNC_2(VAR_1, 0);
 FUNC_1(VAR_1->auth_handlers);
 FUNC_1(VAR_1->acct_handlers);
 FUNC_1(VAR_1);
}
