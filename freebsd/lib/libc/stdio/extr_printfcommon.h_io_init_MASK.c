
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ uio_iovcnt; scalar_t__ uio_resid; int uio_iov; } ;
struct io_state {int * fp; TYPE_1__ uio; int iov; } ;
typedef int FILE ;



__attribute__((used)) static inline void
FUNC_0(struct io_state *VAR_0, FILE *VAR_1)
{

 VAR_0->uio.uio_iov = VAR_0->iov;
 VAR_0->uio.uio_resid = 0;
 VAR_0->uio.uio_iovcnt = 0;
 VAR_0->fp = VAR_1;
}
