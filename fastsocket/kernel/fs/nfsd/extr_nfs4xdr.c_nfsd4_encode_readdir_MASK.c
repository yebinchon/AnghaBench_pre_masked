
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ err; } ;
struct nfsd4_readdir {int rd_maxcount; int buflen; scalar_t__* buffer; TYPE_5__ common; int * offset; int rd_fhp; int rd_rqstp; int rd_cookie; } ;
struct nfsd4_compoundres {scalar_t__* p; scalar_t__* end; TYPE_4__* xbuf; TYPE_1__* rqstp; } ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;
struct TYPE_9__ {int page_len; TYPE_3__* head; TYPE_2__* tail; } ;
struct TYPE_8__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_7__ {scalar_t__* iov_base; scalar_t__ iov_len; } ;
struct TYPE_6__ {int rq_resused; int * rq_respages; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int *,TYPE_5__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static __be32
FUNC_7(struct nfsd4_compoundres *VAR_8, __be32 VAR_9, struct nfsd4_readdir *VAR_10)
{
 int VAR_11;
 loff_t VAR_12;
 __be32 *VAR_13, *VAR_14, *VAR_15;
 __be32 *VAR_16;

 if (VAR_9)
  return VAR_9;
 if (VAR_8->xbuf->page_len)
  return VAR_5;

 FUNC_1(8);
 VAR_14 = VAR_16;


 FUNC_2(0);
 FUNC_2(0);
 FUNC_0();
 VAR_8->xbuf->head[0].iov_len = ((char*)VAR_8->p) - (char*)VAR_8->xbuf->head[0].iov_base;
 VAR_15 = VAR_16;

 VAR_11 = VAR_0;
 if (VAR_11 > VAR_10->rd_maxcount)
  VAR_11 = VAR_10->rd_maxcount;






 VAR_11 = (VAR_11 >> 2) - 4;
 if (VAR_11 < 0) {
  VAR_9 = VAR_7;
  goto err_no_verf;
 }

 VAR_13 = FUNC_5(VAR_8->rqstp->rq_respages[VAR_8->rqstp->rq_resused++]);
 VAR_10->common.err = 0;
 VAR_10->buflen = VAR_11;
 VAR_10->buffer = VAR_13;
 VAR_10->offset = ((void*)0);

 VAR_12 = VAR_10->rd_cookie;
 VAR_9 = FUNC_4(VAR_10->rd_rqstp, VAR_10->rd_fhp,
         &VAR_12,
         &VAR_10->common, VAR_2);
 if (VAR_9 == VAR_1 &&
     VAR_10->common.err == VAR_7 &&
     VAR_10->buffer == VAR_13)
  VAR_9 = VAR_7;
 if (VAR_9 == VAR_6)
  VAR_9 = VAR_4;
 if (VAR_9)
  goto err_no_verf;

 if (VAR_10->offset)
  FUNC_6(VAR_10->offset, VAR_12);

 VAR_16 = VAR_10->buffer;
 *VAR_16++ = 0;
 *VAR_16++ = FUNC_3(VAR_10->common.err == VAR_3);
 VAR_8->xbuf->page_len = ((char*)VAR_16) - (char*)FUNC_5(
  VAR_8->rqstp->rq_respages[VAR_8->rqstp->rq_resused-1]);


 VAR_8->xbuf->tail[0].iov_base = VAR_15;
 VAR_8->xbuf->tail[0].iov_len = 0;
 VAR_8->p = VAR_8->xbuf->tail[0].iov_base;
 VAR_8->end = VAR_8->p + (VAR_0 - VAR_8->xbuf->head[0].iov_len)/4;

 return 0;
err_no_verf:
 VAR_16 = VAR_14;
 FUNC_0();
 return VAR_9;
}
