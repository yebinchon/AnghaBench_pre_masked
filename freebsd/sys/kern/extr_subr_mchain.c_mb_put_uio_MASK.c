
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_segflg; scalar_t__ uio_iovcnt; long uio_offset; TYPE_1__* uio_iov; scalar_t__ uio_resid; } ;
struct mbchain {int dummy; } ;
struct TYPE_2__ {long iov_len; char* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mbchain*,char*,long,int) ;

int
FUNC_1(struct mbchain *VAR_4, struct uio *VAR_5, int VAR_6)
{
 long VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = (VAR_5->uio_segflg == VAR_3) ? VAR_1 : VAR_2;

 while (VAR_6 > 0 && VAR_5->uio_resid) {
  if (VAR_5->uio_iovcnt <= 0 || VAR_5->uio_iov == ((void*)0))
   return (VAR_0);
  VAR_7 = VAR_5->uio_iov->iov_len;
  if (VAR_7 == 0) {
   VAR_5->uio_iov++;
   VAR_5->uio_iovcnt--;
   continue;
  }
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;
  VAR_9 = FUNC_0(VAR_4, VAR_5->uio_iov->iov_base, VAR_7, VAR_8);
  if (VAR_9)
   return (VAR_9);
  VAR_5->uio_offset += VAR_7;
  VAR_5->uio_resid -= VAR_7;
  VAR_5->uio_iov->iov_base =
      (char *)VAR_5->uio_iov->iov_base + VAR_7;
  VAR_5->uio_iov->iov_len -= VAR_7;
  VAR_6 -= VAR_7;
 }
 return (0);
}
