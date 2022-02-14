
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gas_server_response {scalar_t__ offset; int list; int * resp; TYPE_1__* handler; } ;
struct TYPE_2__ {int ctx; int (* status_cb ) (int ,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gas_server_response*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gas_server_response *VAR_1,
     int VAR_2)
{
 if (VAR_2 && VAR_1->offset < FUNC_4(VAR_1->resp)) {
  FUNC_3(VAR_0,
      "GAS: More fragments remaining - keep pending entry");
  return;
 }

 if (!VAR_2)
  FUNC_3(VAR_0,
      "GAS: No ACK received - drop pending entry");
 else
  FUNC_3(VAR_0,
      "GAS: Last fragment of the response sent out - drop pending entry");

 VAR_1->handler->status_cb(VAR_1->handler->ctx,
         VAR_1->resp, VAR_2);
 VAR_1->resp = ((void*)0);
 FUNC_0(&VAR_1->list);
 FUNC_1(VAR_1);
}
