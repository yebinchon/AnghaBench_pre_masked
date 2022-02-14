
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {size_t uio_resid; scalar_t__ uio_segflg; int uio_iovcnt; TYPE_2__* uio_td; struct iovec* uio_iov; } ;
struct sgsave {int dummy; } ;
struct sglist {scalar_t__ sg_maxseg; } ;
struct iovec {int iov_base; int iov_len; } ;
typedef int * pmap_t ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct sglist*,struct sgsave) ;
 int FUNC_3 (struct sglist*,struct sgsave) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct sglist*,int ,size_t,int *,int *) ;
 int * FUNC_5 (int ) ;

int
FUNC_6(struct sglist *VAR_2, struct uio *VAR_3)
{
 struct iovec *VAR_4;
 struct sgsave VAR_5;
 size_t VAR_6, VAR_7;
 pmap_t VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2->sg_maxseg == 0)
  return (VAR_0);

 VAR_6 = VAR_3->uio_resid;
 VAR_4 = VAR_3->uio_iov;

 if (VAR_3->uio_segflg == VAR_1) {
  FUNC_0(VAR_3->uio_td != ((void*)0),
      ("sglist_append_uio: USERSPACE but no thread"));
  VAR_8 = FUNC_5(VAR_3->uio_td->td_proc->p_vmspace);
 } else
  VAR_8 = ((void*)0);

 VAR_9 = 0;
 FUNC_3(VAR_2, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_3->uio_iovcnt && VAR_6 != 0; VAR_10++) {




  VAR_7 = FUNC_1(VAR_6, VAR_4[VAR_10].iov_len);
  if (VAR_7 > 0) {
   VAR_9 = FUNC_4(VAR_2, VAR_4[VAR_10].iov_base, VAR_7,
       VAR_8, ((void*)0));
   if (VAR_9) {
    FUNC_2(VAR_2, VAR_5);
    return (VAR_9);
   }
   VAR_6 -= VAR_7;
  }
 }
 return (0);
}
