
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gas_query_pending {int retry; int dialog_token; int * adv_proto; scalar_t__ next_frag_id; scalar_t__ wait_comeback; int req; int addr; } ;
struct gas_query {struct gas_query_pending* current; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gas_query*,struct gas_query_pending*) ;
 int FUNC_1 (struct gas_query*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct gas_query*,struct gas_query_pending*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, void *VAR_4)
{
 struct gas_query *VAR_5 = VAR_3;
 struct gas_query_pending *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_3(VAR_0,
     "GAS: No response to comeback request received (retry=%u)",
     VAR_6->retry);
 if (VAR_5->current != VAR_6 || VAR_6->retry)
  return;
 VAR_7 = FUNC_1(VAR_5, VAR_6->addr);
 if (VAR_7 < 0)
  return;
 FUNC_3(VAR_0,
     "GAS: Retry GAS query due to comeback response timeout");
 VAR_6->retry = 1;
 VAR_6->dialog_token = VAR_7;
 *(FUNC_5(VAR_6->req) + 2) = VAR_7;
 VAR_6->wait_comeback = 0;
 VAR_6->next_frag_id = 0;
 FUNC_4(VAR_6->adv_proto);
 VAR_6->adv_proto = ((void*)0);
 FUNC_0(VAR_2, VAR_5, VAR_6);
 FUNC_0(VAR_1, VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_6);
}
