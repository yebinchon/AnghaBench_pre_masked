
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uio {int uio_iovcnt; int uio_offset; scalar_t__ uio_resid; int uio_segflg; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iovec const*,struct iovec*,int) ;
 int FUNC_1 (struct uio*,int ) ;
 struct uio* FUNC_2 (int,int ,int ) ;

int
FUNC_3(const struct iovec *VAR_6, u_int VAR_7, struct uio **VAR_8)
{
 struct iovec *VAR_9;
 struct uio *VAR_10;
 u_int VAR_11;
 int VAR_12, VAR_13;

 *VAR_8 = ((void*)0);
 if (VAR_7 > VAR_4)
  return (VAR_0);
 VAR_11 = VAR_7 * sizeof (struct iovec);
 VAR_10 = FUNC_2(VAR_11 + sizeof *VAR_10, VAR_2, VAR_3);
 VAR_9 = (struct iovec *)(VAR_10 + 1);
 VAR_12 = FUNC_0(VAR_6, VAR_9, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_10, VAR_2);
  return (VAR_12);
 }
 VAR_10->uio_iov = VAR_9;
 VAR_10->uio_iovcnt = VAR_7;
 VAR_10->uio_segflg = VAR_5;
 VAR_10->uio_offset = -1;
 VAR_10->uio_resid = 0;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  if (VAR_9->iov_len > VAR_1 - VAR_10->uio_resid) {
   FUNC_1(VAR_10, VAR_2);
   return (VAR_0);
  }
  VAR_10->uio_resid += VAR_9->iov_len;
  VAR_9++;
 }
 *VAR_8 = VAR_10;
 return (0);
}
