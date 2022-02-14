
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct kinfo_file {int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode*,struct kinfo_file*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct file *VAR_3, struct kinfo_file *VAR_4, struct filedesc *VAR_5)
{
 struct vnode *VAR_6;
 int VAR_7;

 if (VAR_3->f_type == VAR_0)
  VAR_4->kf_type = VAR_1;
 else
  VAR_4->kf_type = VAR_2;
 VAR_6 = VAR_3->f_vnode;
 FUNC_3(VAR_6);
 FUNC_1(VAR_5);
 VAR_7 = FUNC_2(VAR_6, VAR_4);
 FUNC_4(VAR_6);
 FUNC_0(VAR_5);
 return (VAR_7);
}
