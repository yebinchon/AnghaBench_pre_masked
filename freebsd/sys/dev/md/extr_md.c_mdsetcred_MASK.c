
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; int uio_resid; int uio_segflg; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct md_s {scalar_t__ vnode; scalar_t__ cred; int sectorsize; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int auio ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,struct uio*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct uio*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ucred*) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_8(struct md_s *VAR_6, struct ucred *VAR_7)
{
 char *VAR_8;
 int VAR_9 = 0;





 if (VAR_6->cred)
  FUNC_3(VAR_6->cred);
 VAR_6->cred = FUNC_4(VAR_7);





 if (VAR_6->vnode) {
  struct uio VAR_10;
  struct iovec VAR_11;

  VAR_8 = FUNC_6(VAR_6->sectorsize, VAR_2, VAR_3);
  FUNC_2(&VAR_10, sizeof(VAR_10));

  VAR_11.iov_base = VAR_8;
  VAR_11.iov_len = VAR_6->sectorsize;
  VAR_10.uio_iov = &VAR_11;
  VAR_10.uio_iovcnt = 1;
  VAR_10.uio_offset = 0;
  VAR_10.uio_rw = VAR_4;
  VAR_10.uio_segflg = VAR_5;
  VAR_10.uio_resid = VAR_11.iov_len;
  FUNC_7(VAR_6->vnode, VAR_0 | VAR_1);
  VAR_9 = FUNC_0(VAR_6->vnode, &VAR_10, 0, VAR_6->cred);
  FUNC_1(VAR_6->vnode, 0);
  FUNC_5(VAR_8, VAR_2);
 }
 return (VAR_9);
}
