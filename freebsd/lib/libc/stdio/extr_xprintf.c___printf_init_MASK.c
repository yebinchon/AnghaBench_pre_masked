
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ uio_iovcnt; scalar_t__ uio_resid; int * uio_iov; } ;
struct __printf_io {TYPE_1__ uio; int * iov; int * iovp; } ;



__attribute__((used)) static void
FUNC_0(struct __printf_io *VAR_0)
{

 VAR_0->uio.uio_iov = VAR_0->iovp = &VAR_0->iov[0];
 VAR_0->uio.uio_resid = 0;
 VAR_0->uio.uio_iovcnt = 0;
}
