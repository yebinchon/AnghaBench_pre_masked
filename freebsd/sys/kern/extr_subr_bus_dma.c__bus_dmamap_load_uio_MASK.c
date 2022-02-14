
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {scalar_t__ uio_segflg; scalar_t__ uio_resid; int uio_iovcnt; struct iovec* uio_iov; TYPE_2__* uio_td; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
typedef int pmap_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_vmspace; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ,int,int *,int*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3, struct uio *VAR_4,
    int *VAR_5, int VAR_6)
{
 bus_size_t VAR_7;
 bus_size_t VAR_8;
 struct iovec *VAR_9;
 pmap_t VAR_10;
 caddr_t VAR_11;
 int VAR_12, VAR_13;

 if (VAR_4->uio_segflg == VAR_0) {
  FUNC_0(VAR_4->uio_td != ((void*)0),
   ("bus_dmamap_load_uio: USERSPACE but no proc"));
  VAR_10 = FUNC_2(VAR_4->uio_td->td_proc->p_vmspace);
 } else
  VAR_10 = VAR_1;
 VAR_7 = VAR_4->uio_resid;
 VAR_9 = VAR_4->uio_iov;
 VAR_12 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_4->uio_iovcnt && VAR_7 != 0 && !VAR_12; VAR_13++) {





  VAR_11 = (caddr_t) VAR_9[VAR_13].iov_base;
  VAR_8 = VAR_7 < VAR_9[VAR_13].iov_len ? VAR_7 : VAR_9[VAR_13].iov_len;
  if (VAR_8 > 0) {
   VAR_12 = FUNC_1(VAR_2, VAR_3, VAR_11,
       VAR_8, VAR_10, VAR_6, ((void*)0), VAR_5);
   VAR_7 -= VAR_8;
  }
 }

 return (VAR_12);
}
