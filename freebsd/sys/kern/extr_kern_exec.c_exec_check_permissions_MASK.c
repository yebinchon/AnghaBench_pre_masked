
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; } ;
struct vattr {int va_mode; scalar_t__ va_type; scalar_t__ va_size; } ;
struct thread {int td_ucred; } ;
struct image_params {int textset; int opened; struct vnode* vp; struct vattr* attr; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vnode*,int ,int ,struct thread*) ;
 int FUNC_1 (struct vnode*,struct vattr*,int ) ;
 int FUNC_2 (struct vnode*,int ,int ,struct thread*,int *) ;
 int FUNC_3 (struct vnode*) ;
 scalar_t__ VAR_8 ;
 struct thread* VAR_9 ;
 int FUNC_4 (int ,struct vnode*,struct image_params*) ;

int
FUNC_5(struct image_params *VAR_10)
{
 struct vnode *VAR_11 = VAR_10->vp;
 struct vattr *VAR_12 = VAR_10->attr;
 struct thread *VAR_13;
 int VAR_14;

 VAR_13 = VAR_9;


 VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_13->td_ucred);
 if (VAR_14)
  return (VAR_14);
 if ((VAR_11->v_mount->mnt_flag & VAR_3) ||
     (VAR_12->va_mode & (VAR_6 | VAR_4 | VAR_5)) == 0 ||
     (VAR_12->va_type != VAR_8))
  return (VAR_0);




 if (VAR_12->va_size == 0)
  return (VAR_1);




 VAR_14 = FUNC_0(VAR_11, VAR_7, VAR_13->td_ucred, VAR_13);
 if (VAR_14)
  return (VAR_14);
 VAR_14 = FUNC_3(VAR_11);
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_10->textset = 1;





 VAR_14 = FUNC_2(VAR_11, VAR_2, VAR_13->td_ucred, VAR_13, ((void*)0));
 if (VAR_14 == 0)
  VAR_10->opened = 1;
 return (VAR_14);
}
