
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_xprt; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct svc_rqst*) ;

void FUNC_2(struct svc_rqst *VAR_0)
{
 FUNC_0("svc: xprt %p dropped request\n", VAR_0->rq_xprt);
 FUNC_1(VAR_0);
}
