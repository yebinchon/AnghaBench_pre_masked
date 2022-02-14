
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; scalar_t__ page_len; TYPE_1__* head; } ;
struct svc_rqst {int rq_xprt_hlen; int rq_pages; int rq_respages; int rq_daddr; int rq_addrlen; int rq_addr; int rq_prot; TYPE_2__ rq_arg; struct svc_deferred_req* rq_deferred; } ;
struct svc_deferred_req {int xprt_hlen; int argslen; int daddr; int addrlen; int addr; int prot; scalar_t__ args; } ;
struct TYPE_3__ {int iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct svc_rqst *VAR_0)
{
 struct svc_deferred_req *VAR_1 = VAR_0->rq_deferred;


 VAR_0->rq_arg.head[0].iov_base = VAR_1->args + (VAR_1->xprt_hlen>>2);

 VAR_0->rq_arg.head[0].iov_len = (VAR_1->argslen<<2) - VAR_1->xprt_hlen;
 VAR_0->rq_arg.page_len = 0;

 VAR_0->rq_arg.len = VAR_1->argslen<<2;
 VAR_0->rq_prot = VAR_1->prot;
 FUNC_0(&VAR_0->rq_addr, &VAR_1->addr, VAR_1->addrlen);
 VAR_0->rq_addrlen = VAR_1->addrlen;

 VAR_0->rq_xprt_hlen = VAR_1->xprt_hlen;
 VAR_0->rq_daddr = VAR_1->daddr;
 VAR_0->rq_respages = VAR_0->rq_pages;
 return (VAR_1->argslen<<2) - VAR_1->xprt_hlen;
}
