
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {scalar_t__ uio_segflg; size_t uio_offset; scalar_t__ uio_resid; int uio_iovcnt; struct iovec* uio_iov; TYPE_2__* uio_td; } ;
struct sglist {scalar_t__ sg_maxseg; } ;
struct iovec {int iov_len; char* iov_base; } ;
typedef int * pmap_t ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sglist*,char*,int,int *,size_t*) ;
 int * FUNC_2 (int ) ;

int
FUNC_3(struct sglist *VAR_2, struct uio *VAR_3, size_t VAR_4)
{
 struct iovec *VAR_5;
 size_t VAR_6;
 pmap_t VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2->sg_maxseg == 0)
  return (VAR_0);

 if (VAR_3->uio_segflg == VAR_1) {
  FUNC_0(VAR_3->uio_td != ((void*)0),
      ("sglist_consume_uio: USERSPACE but no thread"));
  VAR_7 = FUNC_2(VAR_3->uio_td->td_proc->p_vmspace);
 } else
  VAR_7 = ((void*)0);

 VAR_8 = 0;
 while (VAR_4 > 0 && VAR_3->uio_resid) {
  VAR_5 = VAR_3->uio_iov;
  VAR_9 = VAR_5->iov_len;
  if (VAR_9 == 0) {
   VAR_3->uio_iov++;
   VAR_3->uio_iovcnt--;
   continue;
  }
  if (VAR_9 > VAR_4)
   VAR_9 = VAR_4;





  VAR_8 = FUNC_1(VAR_2, VAR_5->iov_base, VAR_9, VAR_7, &VAR_6);
  VAR_5->iov_base = (char *)VAR_5->iov_base + VAR_6;
  VAR_5->iov_len -= VAR_6;
  VAR_3->uio_resid -= VAR_6;
  VAR_3->uio_offset += VAR_6;
  VAR_4 -= VAR_6;
  if (VAR_8)
   break;
 }
 return (0);
}
