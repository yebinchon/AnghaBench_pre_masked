
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; size_t uio_resid; struct thread* uio_td; int uio_segflg; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {size_t* td_retval; int td_ucred; } ;
struct mount {int dummy; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vnode*,int,char const*,struct uio*,int ,struct thread*) ;
 int FUNC_1 (struct vnode*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,struct vnode*,int,char const*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_8, int VAR_9, const char *VAR_10,
    void *VAR_11, size_t VAR_12, struct thread *VAR_13)
{
 struct mount *VAR_14;
 struct uio VAR_15;
 struct iovec VAR_16;
 ssize_t VAR_17;
 int VAR_18;

 if (VAR_12 > VAR_1)
  return (VAR_0);

 VAR_18 = FUNC_5(VAR_8, &VAR_14, VAR_7 | VAR_4);
 if (VAR_18)
  return (VAR_18);
 FUNC_4(VAR_8, VAR_2 | VAR_3);

 VAR_16.iov_base = VAR_11;
 VAR_16.iov_len = VAR_12;
 VAR_15.uio_iov = &VAR_16;
 VAR_15.uio_iovcnt = 1;
 VAR_15.uio_offset = 0;
 VAR_15.uio_resid = VAR_12;
 VAR_15.uio_rw = VAR_6;
 VAR_15.uio_segflg = VAR_5;
 VAR_15.uio_td = VAR_13;
 VAR_17 = VAR_12;
 VAR_18 = FUNC_0(VAR_8, VAR_9, VAR_10, &VAR_15,
     VAR_13->td_ucred, VAR_13);
 VAR_17 -= VAR_15.uio_resid;
 VAR_13->td_retval[0] = VAR_17;




 FUNC_1(VAR_8, 0);
 FUNC_3(VAR_14);
 return (VAR_18);
}
