
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct file {int f_flag; int f_cred; struct vnode* f_vnode; } ;
typedef int off_t ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vnode*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct ucred*,int ,struct vnode*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vnode*,void*) ;
 void* FUNC_6 (struct vnode*,int ,int ) ;
 int FUNC_7 (struct vnode*,struct mount**,int) ;
 int FUNC_8 (struct vnode*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_8, off_t VAR_9, struct ucred *VAR_10,
    struct thread *VAR_11)
{
 struct mount *VAR_12;
 struct vnode *VAR_13;
 void *VAR_14;
 int VAR_15;

 VAR_13 = VAR_8->f_vnode;





 VAR_14 = FUNC_6(VAR_13, 0, VAR_3);
 VAR_15 = FUNC_7(VAR_13, &VAR_12, VAR_7 | VAR_5);
 if (VAR_15)
  goto out1;
 FUNC_4(VAR_13, VAR_1 | VAR_2);
 FUNC_0(VAR_13);
 if (VAR_13->v_type == VAR_6) {
  VAR_15 = VAR_0;
  goto out;
 }





 VAR_15 = FUNC_8(VAR_13, VAR_9, (VAR_8->f_flag & VAR_4) != 0,
     VAR_8->f_cred);
out:
 FUNC_1(VAR_13, 0);
 FUNC_3(VAR_12);
out1:
 FUNC_5(VAR_13, VAR_14);
 return (VAR_15);
}
