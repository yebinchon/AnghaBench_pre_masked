
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uio {int uio_iovcnt; int uio_offset; scalar_t__ uio_resid; int uio_segflg; struct iovec* uio_iov; } ;
struct iovec32 {scalar_t__ iov_len; int iov_base; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iovec32*,struct iovec32*,int) ;
 int FUNC_2 (struct uio*,int ) ;
 struct uio* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct iovec32 *VAR_6, u_int VAR_7, struct uio **VAR_8)
{
 struct iovec32 VAR_9;
 struct iovec *VAR_10;
 struct uio *VAR_11;
 u_int VAR_12;
 int VAR_13, VAR_14;

 *VAR_8 = ((void*)0);
 if (VAR_7 > VAR_4)
  return (VAR_0);
 VAR_12 = VAR_7 * sizeof(struct iovec);
 VAR_11 = FUNC_3(VAR_12 + sizeof *VAR_11, VAR_2, VAR_3);
 VAR_10 = (struct iovec *)(VAR_11 + 1);
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_13 = FUNC_1(&VAR_6[VAR_14], &VAR_9, sizeof(struct iovec32));
  if (VAR_13) {
   FUNC_2(VAR_11, VAR_2);
   return (VAR_13);
  }
  VAR_10[VAR_14].iov_base = FUNC_0(VAR_9);
  VAR_10[VAR_14].iov_len = VAR_9;
 }
 VAR_11->uio_iov = VAR_10;
 VAR_11->uio_iovcnt = VAR_7;
 VAR_11->uio_segflg = VAR_5;
 VAR_11->uio_offset = -1;
 VAR_11->uio_resid = 0;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  if (VAR_10->iov_len > VAR_1 - VAR_11->uio_resid) {
   FUNC_2(VAR_11, VAR_2);
   return (VAR_0);
  }
  VAR_11->uio_resid += VAR_10->iov_len;
  VAR_10++;
 }
 *VAR_8 = VAR_11;
 return (0);
}
