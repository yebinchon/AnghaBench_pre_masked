
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int page_len; int pages; TYPE_1__* head; } ;
struct svc_rqst {TYPE_2__ rq_arg; } ;
struct nfsd4_compoundargs {struct svc_rqst* rqstp; int iops; int ops; int * to_free; int * tmpp; int pagelen; int pagelist; scalar_t__ end; scalar_t__* p; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 scalar_t__ FUNC_0 (struct nfsd4_compoundargs*) ;
 int FUNC_1 (struct nfsd4_compoundargs*) ;

int
FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1, struct nfsd4_compoundargs *VAR_2)
{
 __be32 VAR_3;

 VAR_2->p = VAR_1;
 VAR_2->end = VAR_0->rq_arg.head[0].iov_base + VAR_0->rq_arg.head[0].iov_len;
 VAR_2->pagelist = VAR_0->rq_arg.pages;
 VAR_2->pagelen = VAR_0->rq_arg.page_len;
 VAR_2->tmpp = ((void*)0);
 VAR_2->to_free = ((void*)0);
 VAR_2->ops = VAR_2->iops;
 VAR_2->rqstp = VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2);
 }
 return !VAR_3;
}
