
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfsd4_readlink {int rl_fhp; int rl_rqstp; } ;
struct nfsd4_compoundres {TYPE_4__* xbuf; TYPE_1__* rqstp; } ;
typedef int __be32 ;
struct TYPE_8__ {int page_len; TYPE_3__* tail; TYPE_2__* head; } ;
struct TYPE_7__ {int iov_len; int * iov_base; } ;
struct TYPE_6__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_5__ {int rq_resused; int * rq_respages; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static __be32
FUNC_5(struct nfsd4_compoundres *VAR_4, __be32 VAR_5, struct nfsd4_readlink *VAR_6)
{
 int VAR_7;
 char *VAR_8;
 __be32 *VAR_9;

 if (VAR_5)
  return VAR_5;
 if (VAR_4->xbuf->page_len)
  return VAR_3;

 VAR_8 = FUNC_4(VAR_4->rqstp->rq_respages[VAR_4->rqstp->rq_resused++]);

 VAR_7 = VAR_0;
 FUNC_1(4);







 VAR_5 = FUNC_3(VAR_6->rl_rqstp, VAR_6->rl_fhp, VAR_8, &VAR_7);
 if (VAR_5 == VAR_2)
  return VAR_1;
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_7);
 FUNC_0();
 VAR_4->xbuf->head[0].iov_len = (char*)VAR_9
    - (char*)VAR_4->xbuf->head[0].iov_base;
 VAR_4->xbuf->page_len = VAR_7;


 VAR_4->xbuf->tail[0].iov_base = VAR_9;
 VAR_4->xbuf->tail[0].iov_len = 0;
 if (VAR_7&3) {
  FUNC_1(4);
  FUNC_2(0);
  VAR_4->xbuf->tail[0].iov_base += VAR_7&3;
  VAR_4->xbuf->tail[0].iov_len = 4 - (VAR_7&3);
  FUNC_0();
 }
 return 0;
}
