
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vnode {int v_mount; } ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct fuse_read_in {int size; int offset; int fh; } ;
struct fuse_iov {int dummy; } ;
struct fuse_filehandle {int fh_id; } ;
struct fuse_dispatcher {int iosize; int answ; struct fuse_read_in* indata; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int max_read; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fuse_dispatcher*) ;
 int FUNC_2 (struct fuse_dispatcher*,int ) ;
 int FUNC_3 (struct fuse_dispatcher*,int ,struct vnode*,int *,int *) ;
 int FUNC_4 (struct fuse_dispatcher*,int ,struct vnode*,int *,int *) ;
 int FUNC_5 (struct fuse_dispatcher*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (struct uio*,scalar_t__,int*,int ,int ,int,struct fuse_iov*,int*,int **) ;
 int FUNC_8 (struct uio*) ;
 scalar_t__ FUNC_9 (struct uio*) ;

int
FUNC_10(struct vnode *VAR_1,
    struct uio *VAR_2,
    off_t VAR_3,
    struct fuse_filehandle *VAR_4,
    struct fuse_iov *VAR_5,
    int *VAR_6,
    u_long *VAR_7)
{
 int VAR_8 = 0;
 struct fuse_dispatcher VAR_9;
 struct fuse_read_in *VAR_10 = ((void*)0);
 int VAR_11;

 if (FUNC_9(VAR_2) == 0)
  return 0;
 FUNC_2(&VAR_9, 0);
 VAR_11 = 0;
 if (VAR_2->uio_offset == VAR_3)
  VAR_11 = 1;
 while (FUNC_9(VAR_2) > 0) {
  VAR_9.iosize = sizeof(*VAR_10);
  if (VAR_10 == ((void*)0))
   FUNC_3(&VAR_9, VAR_0, VAR_1, ((void*)0), ((void*)0));
  else
   FUNC_4(&VAR_9, VAR_0, VAR_1, ((void*)0), ((void*)0));

  VAR_10 = VAR_9.indata;
  VAR_10->fh = VAR_4->fh_id;
  VAR_10->offset = FUNC_8(VAR_2);
  VAR_10->size = FUNC_0(VAR_2->uio_resid,
      FUNC_6(VAR_1->v_mount)->max_read);

  if ((VAR_8 = FUNC_5(&VAR_9)))
   break;
  if ((VAR_8 = FUNC_7(VAR_2, VAR_3,
      &VAR_11, VAR_10->size, VAR_9.answ, VAR_9.iosize, VAR_5,
      VAR_6, &VAR_7)))
   break;
 }

 FUNC_1(&VAR_9);
 return ((VAR_8 == -1) ? 0 : VAR_8);
}
