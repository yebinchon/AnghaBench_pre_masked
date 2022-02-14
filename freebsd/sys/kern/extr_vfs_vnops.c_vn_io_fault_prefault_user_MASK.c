
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_segflg; scalar_t__ uio_resid; int uio_iovcnt; struct iovec* uio_iov; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,struct uio const*) ;

__attribute__((used)) static int
FUNC_2(const struct uio *VAR_2)
{
 char *VAR_3;
 const struct iovec *VAR_4;
 size_t VAR_5;
 ssize_t VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_2->uio_segflg == VAR_1,
     ("vn_io_fault_prefault userspace"));

 VAR_7 = VAR_8 = 0;
 VAR_4 = VAR_2->uio_iov;
 VAR_6 = VAR_2->uio_resid;
 VAR_3 = VAR_4->iov_base;
 VAR_5 = VAR_4->iov_len;
 while (VAR_6 > 0) {
  VAR_7 = FUNC_1(VAR_3, VAR_2);
  if (VAR_7 != 0)
   break;
  if (VAR_5 < VAR_0) {
   if (VAR_5 != 0) {
    VAR_7 = FUNC_1(VAR_3 + VAR_5 - 1, VAR_2);
    if (VAR_7 != 0)
     break;
    VAR_6 -= VAR_5;
   }
   if (++VAR_8 >= VAR_2->uio_iovcnt)
    break;
   VAR_4 = VAR_2->uio_iov + VAR_8;
   VAR_3 = VAR_4->iov_base;
   VAR_5 = VAR_4->iov_len;
  } else {
   VAR_5 -= VAR_0;
   VAR_3 += VAR_0;
   VAR_6 -= VAR_0;
  }
 }
 return (VAR_7);
}
