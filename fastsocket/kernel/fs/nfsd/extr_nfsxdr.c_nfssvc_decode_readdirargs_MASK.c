
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_resused; int * rq_respages; } ;
struct nfsd_readdirargs {scalar_t__ count; int buffer; void* cookie; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd_readdirargs *VAR_3)
{
 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->fh)))
  return 0;
 VAR_3->cookie = FUNC_1(*VAR_2++);
 VAR_3->count = FUNC_1(*VAR_2++);
 if (VAR_3->count > VAR_0)
  VAR_3->count = VAR_0;

 VAR_3->buffer = FUNC_2(VAR_1->rq_respages[VAR_1->rq_resused++]);

 return FUNC_3(VAR_1, VAR_2);
}
