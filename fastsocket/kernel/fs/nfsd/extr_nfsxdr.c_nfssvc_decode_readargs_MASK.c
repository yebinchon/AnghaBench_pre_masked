
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {TYPE_1__* rq_vec; int * rq_respages; int rq_resused; } ;
struct nfsd_readargs {unsigned int count; int vlen; void* offset; int fh; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int iov_len; int iov_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_2, __be32 *VAR_3,
     struct nfsd_readargs *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6,VAR_7;
 if (!(VAR_3 = FUNC_0(VAR_3, &VAR_4->fh)))
  return 0;

 VAR_4->offset = FUNC_1(*VAR_3++);
 VAR_5 = VAR_4->count = FUNC_1(*VAR_3++);
 VAR_3++;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;




 VAR_6=0;
 while (VAR_5 > 0) {
  VAR_7 = VAR_2->rq_resused++;
  VAR_2->rq_vec[VAR_6].iov_base = FUNC_2(VAR_2->rq_respages[VAR_7]);
  VAR_2->rq_vec[VAR_6].iov_len = VAR_5 < VAR_1?VAR_5:VAR_1;
  VAR_5 -= VAR_2->rq_vec[VAR_6].iov_len;
  VAR_6++;
 }
 VAR_4->vlen = VAR_6;
 return FUNC_3(VAR_2, VAR_3);
}
