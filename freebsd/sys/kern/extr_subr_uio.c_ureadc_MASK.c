
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_iovcnt; scalar_t__ uio_resid; int uio_segflg; int uio_offset; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; char* iov_base; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(int VAR_3, struct uio *VAR_4)
{
 struct iovec *VAR_5;
 char *VAR_6;

 FUNC_0(VAR_1 | VAR_2, ((void*)0),
     "Calling ureadc()");

again:
 if (VAR_4->uio_iovcnt == 0 || VAR_4->uio_resid == 0)
  FUNC_1("ureadc");
 VAR_5 = VAR_4->uio_iov;
 if (VAR_5->iov_len == 0) {
  VAR_4->uio_iovcnt--;
  VAR_4->uio_iov++;
  goto again;
 }
 switch (VAR_4->uio_segflg) {

 case 128:
  if (FUNC_2(VAR_5->iov_base, VAR_3) < 0)
   return (VAR_0);
  break;

 case 129:
  VAR_6 = VAR_5->iov_base;
  *VAR_6 = VAR_3;
  break;

 case 130:
  break;
 }
 VAR_5->iov_base = (char *)VAR_5->iov_base + 1;
 VAR_5->iov_len--;
 VAR_4->uio_resid--;
 VAR_4->uio_offset++;
 return (0);
}
