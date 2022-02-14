
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_readlink_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_data; } ;
struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct file {int f_type; struct vnode* f_vnode; } ;
struct fdescnode {int fd_fd; } ;
struct TYPE_2__ {scalar_t__ fd_type; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int ) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int,int *,struct file**,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*,size_t,struct uio*) ;
 int FUNC_9 (struct thread*,struct vnode*,char**,char**) ;
 int FUNC_10 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_11(struct vop_readlink_args *VAR_5)
{
 struct vnode *VAR_6, *VAR_7;
 struct thread *VAR_8;
 struct uio *VAR_9;
 struct file *VAR_10;
 char *VAR_11, *VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_11 = ((void*)0);
 VAR_7 = VAR_5->a_vp;
 if (FUNC_2(VAR_7)->fd_type != VAR_0)
  FUNC_6("fdesc_readlink: not fdescfs link");
 VAR_15 = ((struct fdescnode *)VAR_7->v_data)->fd_fd;
 VAR_14 = FUNC_0(VAR_7);
 FUNC_1(VAR_7, 0);

 VAR_8 = VAR_4;
 VAR_16 = FUNC_4(VAR_8, VAR_15, &VAR_3, &VAR_10, ((void*)0));
 if (VAR_16 != 0)
  goto out;

 switch (VAR_10->f_type) {
 case 128:
  VAR_6 = VAR_10->f_vnode;
  VAR_16 = FUNC_9(VAR_8, VAR_6, &VAR_12, &VAR_11);
  break;
 default:
  VAR_12 = "anon_inode:[unknown]";
  break;
 }
 if (VAR_16 == 0) {
  VAR_9 = VAR_5->a_uio;
  VAR_13 = FUNC_7(VAR_12);
  VAR_16 = FUNC_8(VAR_12, VAR_13, VAR_9);
 }
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11, VAR_2);
 FUNC_3(VAR_10, VAR_8);

out:
 FUNC_10(VAR_7, VAR_14 | VAR_1);
 return (VAR_16);
}
