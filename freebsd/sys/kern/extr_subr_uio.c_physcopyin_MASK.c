
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
struct uio {int uio_iovcnt; size_t uio_resid; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct iovec {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,size_t,struct uio*) ;

int
FUNC_3(void *VAR_4, vm_paddr_t VAR_5, size_t VAR_6)
{
 vm_page_t VAR_7[FUNC_0(VAR_6)];
 struct iovec VAR_8[1];
 struct uio VAR_9;
 int VAR_10;

 VAR_8[0].iov_base = VAR_4;
 VAR_8[0].iov_len = VAR_6;
 VAR_9.uio_iov = VAR_8;
 VAR_9.uio_iovcnt = 1;
 VAR_9.uio_offset = 0;
 VAR_9.uio_resid = VAR_6;
 VAR_9.uio_segflg = VAR_2;
 VAR_9.uio_rw = VAR_3;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++, VAR_5 += VAR_1)
  VAR_7[VAR_10] = FUNC_1(VAR_5);
 return (FUNC_2(VAR_7, VAR_5 & VAR_0, VAR_6, &VAR_9));
}
