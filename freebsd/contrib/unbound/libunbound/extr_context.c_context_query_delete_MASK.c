
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx_query {struct ctx_query* msg; int res; } ;


 int FUNC_0 (struct ctx_query*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct ctx_query* VAR_0)
{
 if(!VAR_0) return;
 FUNC_1(VAR_0->res);
 FUNC_0(VAR_0->msg);
 FUNC_0(VAR_0);
}
