
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_segflg; scalar_t__ uio_iovcnt; long uio_offset; TYPE_1__* uio_iov; scalar_t__ uio_resid; } ;
struct mdchain {int dummy; } ;
struct TYPE_2__ {long iov_len; char* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mdchain*,char*,long,int) ;

int
FUNC_1(struct mdchain *VAR_4, struct uio *VAR_5, int VAR_6)
{
 char *VAR_7;
 long VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = (VAR_5->uio_segflg == VAR_3) ? VAR_1 : VAR_2;
 while (VAR_6 > 0 && VAR_5->uio_resid) {
  if (VAR_5->uio_iovcnt <= 0 || VAR_5->uio_iov == ((void*)0))
   return (VAR_0);
  VAR_8 = VAR_5->uio_iov->iov_len;
  if (VAR_8 == 0) {
   VAR_5->uio_iov++;
   VAR_5->uio_iovcnt--;
   continue;
  }
  VAR_7 = VAR_5->uio_iov->iov_base;
  if (VAR_8 > VAR_6)
   VAR_8 = VAR_6;
  VAR_10 = FUNC_0(VAR_4, VAR_7, VAR_8, VAR_9);
  if (VAR_10)
   return (VAR_10);
  VAR_5->uio_offset += VAR_8;
  VAR_5->uio_resid -= VAR_8;
  VAR_5->uio_iov->iov_base =
      (char *)VAR_5->uio_iov->iov_base + VAR_8;
  VAR_5->uio_iov->iov_len -= VAR_8;
  VAR_6 -= VAR_8;
 }
 return (0);
}
