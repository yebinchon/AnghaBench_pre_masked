
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long u32 ;
struct nfsd4_read {unsigned long rd_length; int rd_vlen; scalar_t__ rd_offset; TYPE_7__* rd_fhp; int rd_filp; int rd_rqstp; } ;
struct nfsd4_compoundres {TYPE_5__* xbuf; TYPE_6__* rqstp; } ;
typedef int __be32 ;
struct TYPE_16__ {long iov_len; int iov_base; } ;
struct TYPE_15__ {TYPE_2__* fh_dentry; } ;
struct TYPE_14__ {TYPE_8__* rq_vec; int * rq_respages; int rq_resused; } ;
struct TYPE_13__ {long page_len; TYPE_4__* tail; TYPE_3__* head; } ;
struct TYPE_12__ {int iov_len; int * iov_base; } ;
struct TYPE_11__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_10__ {TYPE_1__* d_inode; } ;
struct TYPE_9__ {scalar_t__ i_size; } ;


 int FUNC_0 () ;
 long VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,TYPE_7__*,int ,scalar_t__,TYPE_8__*,int,unsigned long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static __be32
FUNC_6(struct nfsd4_compoundres *VAR_4, __be32 VAR_5,
    struct nfsd4_read *VAR_6)
{
 u32 VAR_7;
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 long VAR_11;
 __be32 *VAR_12;

 if (VAR_5)
  return VAR_5;
 if (VAR_4->xbuf->page_len)
  return VAR_2;

 FUNC_1(8);

 VAR_10 = FUNC_5(VAR_4->rqstp);
 if (VAR_10 > VAR_6->rd_length)
  VAR_10 = VAR_6->rd_length;

 VAR_11 = VAR_10;
 VAR_8 = 0;
 while (VAR_11 > 0) {
  VAR_9 = VAR_4->rqstp->rq_resused++;
  VAR_4->rqstp->rq_vec[VAR_8].iov_base =
   FUNC_4(VAR_4->rqstp->rq_respages[VAR_9]);
  VAR_4->rqstp->rq_vec[VAR_8].iov_len =
   VAR_11 < VAR_0 ? VAR_11 : VAR_0;
  VAR_8++;
  VAR_11 -= VAR_0;
 }
 VAR_6->rd_vlen = VAR_8;

 VAR_5 = FUNC_3(VAR_6->rd_rqstp, VAR_6->rd_fhp, VAR_6->rd_filp,
   VAR_6->rd_offset, VAR_4->rqstp->rq_vec, VAR_6->rd_vlen,
   &VAR_10);

 if (VAR_5 == VAR_3)
  VAR_5 = VAR_1;
 if (VAR_5)
  return VAR_5;
 VAR_7 = (VAR_6->rd_offset + VAR_10 >=
        VAR_6->rd_fhp->fh_dentry->d_inode->i_size);

 FUNC_2(VAR_7);
 FUNC_2(VAR_10);
 FUNC_0();
 VAR_4->xbuf->head[0].iov_len = (char*)VAR_12
     - (char*)VAR_4->xbuf->head[0].iov_base;
 VAR_4->xbuf->page_len = VAR_10;


 VAR_4->xbuf->tail[0].iov_base = VAR_12;
 VAR_4->xbuf->tail[0].iov_len = 0;
 if (VAR_10&3) {
  FUNC_1(4);
  FUNC_2(0);
  VAR_4->xbuf->tail[0].iov_base += VAR_10&3;
  VAR_4->xbuf->tail[0].iov_len = 4 - (VAR_10&3);
  FUNC_0();
 }
 return 0;
}
