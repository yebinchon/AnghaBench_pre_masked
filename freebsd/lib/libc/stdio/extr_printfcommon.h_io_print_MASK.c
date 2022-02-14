
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t uio_iovcnt; int uio_resid; } ;
struct io_state {TYPE_2__ uio; int fp; TYPE_1__* iov; } ;
typedef int locale_t ;
struct TYPE_3__ {char* iov_base; int iov_len; } ;
typedef int CHAR ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct io_state *VAR_1, const CHAR * __restrict VAR_2, int VAR_3, locale_t VAR_4)
{

 VAR_1->iov[VAR_1->uio.uio_iovcnt].iov_base = (char *)VAR_2;
 VAR_1->iov[VAR_1->uio.uio_iovcnt].iov_len = VAR_3;
 VAR_1->uio.uio_resid += VAR_3;
 if (++VAR_1->uio.uio_iovcnt >= VAR_0)
  return (FUNC_0(VAR_1->fp, &VAR_1->uio, VAR_4));
 else
  return (0);
}
