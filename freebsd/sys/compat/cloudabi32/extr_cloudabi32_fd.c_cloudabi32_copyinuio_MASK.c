
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct uio {size_t uio_iovcnt; int uio_offset; scalar_t__ uio_resid; int uio_segflg; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef int iovobj ;
struct TYPE_5__ {scalar_t__ buf_len; int buf; } ;
typedef TYPE_1__ cloudabi32_iovec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_2 (struct uio*,int ) ;
 struct uio* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(const cloudabi32_iovec_t *VAR_6, size_t VAR_7,
    struct uio **VAR_8)
{
 cloudabi32_iovec_t VAR_9;
 struct uio *VAR_10;
 struct iovec *VAR_11;
 size_t VAR_12;
 int VAR_13;


 if (VAR_7 > VAR_4)
  return (VAR_0);
 VAR_10 = FUNC_3(sizeof(struct uio) + VAR_7 * sizeof(struct iovec),
     VAR_2, VAR_3);
 VAR_11 = (struct iovec *)(VAR_10 + 1);


 VAR_10->uio_iov = VAR_11;
 VAR_10->uio_iovcnt = VAR_7;
 VAR_10->uio_segflg = VAR_5;
 VAR_10->uio_offset = -1;
 VAR_10->uio_resid = 0;


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_13 = FUNC_1(&VAR_6[VAR_12], &VAR_9, sizeof(VAR_9));
  if (VAR_13 != 0) {
   FUNC_2(VAR_10, VAR_2);
   return (VAR_13);
  }
  VAR_11[VAR_12].iov_base = FUNC_0(VAR_9.buf);
  VAR_11[VAR_12].iov_len = VAR_9.buf_len;
  if (VAR_11[VAR_12].iov_len > VAR_1 - VAR_10->uio_resid) {
   FUNC_2(VAR_10, VAR_2);
   return (VAR_0);
  }
  VAR_10->uio_resid += VAR_11[VAR_12].iov_len;
 }

 *VAR_8 = VAR_10;
 return (0);
}
