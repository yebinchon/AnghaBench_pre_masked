
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_object; struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vnode*,struct thread*) ;
 int FUNC_6 (struct vnode*,int ,struct thread*) ;
 int FUNC_7 (struct vnode*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct file*,struct thread*) ;
 int FUNC_9 (struct thread*,int,int *,struct file**) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (struct mount*) ;
 int FUNC_12 (struct vnode*,int) ;
 int FUNC_13 (struct vnode*,struct mount**,int) ;

int
FUNC_14(struct thread *VAR_7, int VAR_8, bool VAR_9)
{
 struct vnode *VAR_10;
 struct mount *VAR_11;
 struct file *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_8);
 VAR_13 = FUNC_9(VAR_7, VAR_8, &VAR_6, &VAR_12);
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_10 = VAR_12->f_vnode;




 VAR_13 = FUNC_13(VAR_10, &VAR_11, VAR_5 | VAR_4);
 if (VAR_13 != 0)
  goto drop;
 if (FUNC_2(VAR_11) ||
     ((VAR_11 == ((void*)0)) && FUNC_2(VAR_10->v_mount))) {
  VAR_14 = VAR_2;
 } else {
  VAR_14 = VAR_0;
 }
 FUNC_12(VAR_10, VAR_14 | VAR_1);
 FUNC_1(VAR_10);
 if (VAR_10->v_object != ((void*)0)) {
  FUNC_3(VAR_10->v_object);
  FUNC_10(VAR_10->v_object, 0, 0, 0);
  FUNC_4(VAR_10->v_object);
 }
 VAR_13 = VAR_9 ? FUNC_6(VAR_10, VAR_3, VAR_7) : FUNC_5(VAR_10, VAR_7);
 FUNC_7(VAR_10, 0);
 FUNC_11(VAR_11);
drop:
 FUNC_8(VAR_12, VAR_7);
 return (VAR_13);
}
