
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct svc_rqst {int rq_all; struct svc_rqst* rq_auth_data; struct svc_rqst* rq_argp; struct svc_rqst* rq_resp; struct svc_pool* rq_pool; struct svc_serv* rq_server; } ;
struct svc_pool {int sp_lock; int sp_nrthreads; } ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svc_serv*) ;
 int FUNC_5 (struct svc_rqst*) ;

void
FUNC_6(struct svc_rqst *VAR_0)
{
 struct svc_serv *VAR_1 = VAR_0->rq_server;
 struct svc_pool *VAR_2 = VAR_0->rq_pool;

 FUNC_5(VAR_0);
 FUNC_0(VAR_0->rq_resp);
 FUNC_0(VAR_0->rq_argp);
 FUNC_0(VAR_0->rq_auth_data);

 FUNC_2(&VAR_2->sp_lock);
 VAR_2->sp_nrthreads--;
 FUNC_1(&VAR_0->rq_all);
 FUNC_3(&VAR_2->sp_lock);

 FUNC_0(VAR_0);


 if (VAR_1)
  FUNC_4(VAR_1);
}
