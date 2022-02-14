
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_list; } ;
struct svc_pool {int sp_threads; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct svc_pool *VAR_0, struct svc_rqst *VAR_1)
{
 FUNC_0(&VAR_1->rq_list, &VAR_0->sp_threads);
}
