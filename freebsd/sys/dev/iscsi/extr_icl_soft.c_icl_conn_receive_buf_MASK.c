
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio ;
struct uio {int uio_iovcnt; size_t uio_resid; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct socket {int dummy; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct icl_conn {struct socket* ic_socket; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uio*,int ,int) ;
 int FUNC_2 (struct socket*,int *,struct uio*,int *,int *,int*) ;

__attribute__((used)) static int
FUNC_3(struct icl_conn *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct iovec VAR_6[1];
 struct uio VAR_7;
 struct socket *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_3->ic_socket;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_6[0].iov_base = VAR_4;
 VAR_6[0].iov_len = VAR_5;
 VAR_7.uio_iov = VAR_6;
 VAR_7.uio_iovcnt = 1;
 VAR_7.uio_offset = 0;
 VAR_7.uio_resid = VAR_5;
 VAR_7.uio_segflg = VAR_2;
 VAR_7.uio_rw = VAR_1;

 VAR_10 = VAR_0;
 VAR_9 = FUNC_2(VAR_8, ((void*)0), &VAR_7, ((void*)0), ((void*)0), &VAR_10);
 if (VAR_9 != 0) {
  FUNC_0("soreceive error %d", VAR_9);
  return (-1);
 }
 if (VAR_7.uio_resid != 0) {
  FUNC_0("short read");
  return (-1);
 }

 return (0);
}
