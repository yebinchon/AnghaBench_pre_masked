
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_0 (struct vnode*,int,long*) ;
 int FUNC_1 (struct vnode*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int,int *,struct file**) ;
 int FUNC_4 (struct vnode*,int) ;

int
FUNC_5(struct thread *VAR_11, int VAR_12, int VAR_13, long *VAR_14)
{
 struct file *VAR_15;
 struct vnode *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_3(VAR_11, VAR_12, &VAR_10, &VAR_15);
 if (VAR_17 != 0)
  return (VAR_17);

 if (VAR_13 == VAR_7) {
  *VAR_14 = VAR_9;
  goto out;
 }
 VAR_16 = VAR_15->f_vnode;
 if (VAR_16 != ((void*)0)) {
  FUNC_4(VAR_16, VAR_5 | VAR_4);
  VAR_17 = FUNC_0(VAR_16, VAR_13, VAR_14);
  FUNC_1(VAR_16, 0);
 } else if (VAR_15->f_type == VAR_0 || VAR_15->f_type == VAR_1) {
  if (VAR_13 != VAR_8) {
   VAR_17 = VAR_2;
  } else {
   *VAR_14 = VAR_6;
   VAR_17 = 0;
  }
 } else {
  VAR_17 = VAR_3;
 }
out:
 FUNC_2(VAR_15, VAR_11);
 return (VAR_17);
}
