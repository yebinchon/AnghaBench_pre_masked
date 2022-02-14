
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_vflag; } ;
struct uio {int uio_iovcnt; int uio_segflg; size_t uio_resid; struct thread* uio_td; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {size_t* td_retval; int td_ucred; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode*,struct uio*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_4, char *VAR_5, enum uio_seg VAR_6, size_t VAR_7,
    struct thread *VAR_8)
{
 struct iovec VAR_9;
 struct uio VAR_10;
 int VAR_11;

 FUNC_0(VAR_4, "kern_readlink_vp(): vp not locked");





 if (VAR_4->v_type != VAR_2 && (VAR_4->v_vflag & VAR_3) == 0)
  return (VAR_0);

 VAR_9.iov_base = VAR_5;
 VAR_9.iov_len = VAR_7;
 VAR_10.uio_iov = &VAR_9;
 VAR_10.uio_iovcnt = 1;
 VAR_10.uio_offset = 0;
 VAR_10.uio_rw = VAR_1;
 VAR_10.uio_segflg = VAR_6;
 VAR_10.uio_td = VAR_8;
 VAR_10.uio_resid = VAR_7;
 VAR_11 = FUNC_1(VAR_4, &VAR_10, VAR_8->td_ucred);
 VAR_8->td_retval[0] = VAR_7 - VAR_10.uio_resid;
 return (VAR_11);
}
