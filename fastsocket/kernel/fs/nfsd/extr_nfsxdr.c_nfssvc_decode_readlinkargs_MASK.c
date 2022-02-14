
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_resused; int * rq_respages; } ;
struct nfsd_readlinkargs {int buffer; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_0, __be32 *VAR_1, struct nfsd_readlinkargs *VAR_2)
{
 if (!(VAR_1 = FUNC_0(VAR_1, &VAR_2->fh)))
  return 0;
 VAR_2->buffer = FUNC_1(VAR_0->rq_respages[VAR_0->rq_resused++]);

 return FUNC_2(VAR_0, VAR_1);
}
