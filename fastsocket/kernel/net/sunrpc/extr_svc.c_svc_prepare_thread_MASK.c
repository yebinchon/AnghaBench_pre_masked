
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int sv_max_mesg; int sv_xdrsize; int sv_nrthreads; } ;
struct svc_rqst {void* rq_resp; void* rq_argp; struct svc_pool* rq_pool; struct svc_serv* rq_server; int rq_all; int rq_wait; } ;
struct svc_pool {int sp_lock; int sp_all_threads; int sp_nrthreads; } ;


 int VAR_0 ;
 struct svc_rqst* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ) ;
 struct svc_rqst* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct svc_rqst*) ;
 int FUNC_8 (struct svc_rqst*,int ) ;

struct svc_rqst *
FUNC_9(struct svc_serv *VAR_2, struct svc_pool *VAR_3)
{
 struct svc_rqst *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out_enomem;

 FUNC_1(&VAR_4->rq_wait);

 VAR_2->sv_nrthreads++;
 FUNC_5(&VAR_3->sp_lock);
 VAR_3->sp_nrthreads++;
 FUNC_4(&VAR_4->rq_all, &VAR_3->sp_all_threads);
 FUNC_6(&VAR_3->sp_lock);
 VAR_4->rq_server = VAR_2;
 VAR_4->rq_pool = VAR_3;

 VAR_4->rq_argp = FUNC_2(VAR_2->sv_xdrsize, VAR_1);
 if (!VAR_4->rq_argp)
  goto out_thread;

 VAR_4->rq_resp = FUNC_2(VAR_2->sv_xdrsize, VAR_1);
 if (!VAR_4->rq_resp)
  goto out_thread;

 if (!FUNC_8(VAR_4, VAR_2->sv_max_mesg))
  goto out_thread;

 return VAR_4;
out_thread:
 FUNC_7(VAR_4);
out_enomem:
 return FUNC_0(-VAR_0);
}
