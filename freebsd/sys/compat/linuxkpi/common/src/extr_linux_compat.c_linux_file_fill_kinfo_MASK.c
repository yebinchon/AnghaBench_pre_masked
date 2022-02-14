
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct linux_file {struct vnode* f_vnode; } ;
struct kinfo_file {int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {struct linux_file* f_data; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vnode*,struct kinfo_file*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_2, struct kinfo_file *VAR_3,
    struct filedesc *VAR_4)
{
 struct linux_file *VAR_5;
 struct vnode *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->f_data;
 VAR_6 = VAR_5->f_vnode;
 if (VAR_6 == ((void*)0)) {
  VAR_7 = 0;
  VAR_3->kf_type = VAR_0;
 } else {
  FUNC_3(VAR_6);
  FUNC_1(VAR_4);
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  FUNC_4(VAR_6);
  VAR_3->kf_type = VAR_1;
  FUNC_0(VAR_4);
 }
 return (VAR_7);
}
