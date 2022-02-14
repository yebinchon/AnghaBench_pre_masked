
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gas_query_pending {int resp; int adv_proto; int req; int list; struct gas_query* gas; } ;
struct gas_query {TYPE_1__* work; } ;
struct TYPE_2__ {struct gas_query_pending* ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gas_query_pending*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gas_query_pending *VAR_0, int VAR_1)
{
 struct gas_query *VAR_2 = VAR_0->gas;

 if (VAR_1)
  FUNC_0(&VAR_0->list);

 if (VAR_2->work && VAR_2->work->ctx == VAR_0) {
  FUNC_2(VAR_2->work);
  VAR_2->work = ((void*)0);
 }

 FUNC_3(VAR_0->req);
 FUNC_3(VAR_0->adv_proto);
 FUNC_3(VAR_0->resp);
 FUNC_1(VAR_0);
}
