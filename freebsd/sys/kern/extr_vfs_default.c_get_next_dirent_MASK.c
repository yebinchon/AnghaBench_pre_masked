
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_offset; struct thread* uio_td; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {int td_ucred; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct dirent {int d_reclen; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,struct uio*,int ,int*,int *,int *) ;
 int FUNC_3 (int ,struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_6, struct dirent **VAR_7, char *VAR_8,
  int VAR_9, off_t *VAR_10, char **VAR_11, int *VAR_12,
  int *VAR_13, struct thread *VAR_14)
{
 int VAR_15, VAR_16;
 struct uio VAR_17;
 struct iovec VAR_18;
 struct dirent *VAR_19;

 FUNC_0(FUNC_1(VAR_6), ("vp %p is not locked", VAR_6));
 FUNC_0(VAR_6->v_type == VAR_5, ("vp %p is not a directory", VAR_6));

 if (*VAR_12 == 0) {
  VAR_18.iov_base = VAR_8;
  VAR_18.iov_len = VAR_9;

  VAR_17.uio_iov = &VAR_18;
  VAR_17.uio_iovcnt = 1;
  VAR_17.uio_offset = *VAR_10;
  VAR_17.uio_resid = VAR_9;
  VAR_17.uio_segflg = VAR_4;
  VAR_17.uio_rw = VAR_3;
  VAR_17.uio_td = VAR_14;

  *VAR_13 = 0;





   VAR_15 = FUNC_2(VAR_6, &VAR_17, VAR_14->td_ucred, VAR_13,
        ((void*)0), ((void*)0));
  if (VAR_15)
   return (VAR_15);

  *VAR_10 = VAR_17.uio_offset;

  *VAR_11 = VAR_8;
  *VAR_12 = (VAR_9 - VAR_17.uio_resid);

  if (*VAR_12 == 0)
   return (VAR_2);
 }

 VAR_19 = (struct dirent *)(*VAR_11);
 VAR_16 = VAR_19->d_reclen;
 *VAR_7 = VAR_19;


 if (VAR_16 < VAR_0)
  return (VAR_1);

 *VAR_11 += VAR_16;
 *VAR_12 -= VAR_16;

 return (0);
}
