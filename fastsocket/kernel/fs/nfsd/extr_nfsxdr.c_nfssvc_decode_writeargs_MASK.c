
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int page_len; TYPE_1__* head; } ;
struct svc_rqst {TYPE_3__* rq_vec; int * rq_pages; TYPE_2__ rq_arg; } ;
struct nfsd_writeargs {unsigned int len; int vlen; void* offset; int fh; } ;
typedef int __be32 ;
struct TYPE_6__ {unsigned int iov_len; void* iov_base; } ;
struct TYPE_4__ {void* iov_base; unsigned int iov_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

int
FUNC_4(struct svc_rqst *VAR_2, __be32 *VAR_3,
     struct nfsd_writeargs *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (!(VAR_3 = FUNC_1(VAR_3, &VAR_4->fh)))
  return 0;

 VAR_3++;
 VAR_4->offset = FUNC_2(*VAR_3++);
 VAR_3++;
 VAR_5 = VAR_4->len = FUNC_2(*VAR_3++);



 if (VAR_5 > VAR_0)
  return 0;





 VAR_6 = (void*)VAR_3 - VAR_2->rq_arg.head[0].iov_base;
 VAR_7 = VAR_2->rq_arg.head[0].iov_len + VAR_2->rq_arg.page_len
  - VAR_6;
 if (VAR_7 < FUNC_0(VAR_5)*4)
  return 0;

 VAR_2->rq_vec[0].iov_base = (void*)VAR_3;
 VAR_2->rq_vec[0].iov_len = VAR_2->rq_arg.head[0].iov_len - VAR_6;
 VAR_8 = 0;
 while (VAR_5 > VAR_2->rq_vec[VAR_8].iov_len) {
  VAR_5 -= VAR_2->rq_vec[VAR_8].iov_len;
  VAR_8++;
  VAR_2->rq_vec[VAR_8].iov_base = FUNC_3(VAR_2->rq_pages[VAR_8]);
  VAR_2->rq_vec[VAR_8].iov_len = VAR_1;
 }
 VAR_2->rq_vec[VAR_8].iov_len = VAR_5;
 VAR_4->vlen = VAR_8 + 1;
 return 1;
}
