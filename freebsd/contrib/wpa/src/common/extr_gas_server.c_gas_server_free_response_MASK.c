
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gas_server_response {int resp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gas_server_response*,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct gas_server_response*) ;
 int FUNC_2 (int ,char*,struct gas_server_response*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gas_server_response *VAR_2)
{
 if (!VAR_2)
  return;
 FUNC_2(VAR_0, "DPP: Free GAS response @%p", VAR_2);
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_3(VAR_2->resp);
 FUNC_1(VAR_2);
}
