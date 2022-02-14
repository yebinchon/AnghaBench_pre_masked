
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gas_query_pending {int resp; int adv_proto; int req; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gas_query_pending*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gas_query_pending *VAR_0, int VAR_1)
{
 if (VAR_1)
  FUNC_0(&VAR_0->list);

 FUNC_2(VAR_0->req);
 FUNC_2(VAR_0->adv_proto);
 FUNC_2(VAR_0->resp);
 FUNC_1(VAR_0);
}
