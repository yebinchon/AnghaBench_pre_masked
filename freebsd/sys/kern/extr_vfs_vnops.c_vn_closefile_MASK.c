
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
struct file {int f_flag; scalar_t__ f_type; int f_cred; int * f_ops; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnode*,struct file*,int ,struct flock*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct vnode*,int,int ,struct thread*,int) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_6, struct thread *VAR_7)
{
 struct vnode *VAR_8;
 struct flock VAR_9;
 int VAR_10;
 bool VAR_11;

 VAR_8 = VAR_6->f_vnode;
 VAR_6->f_ops = &VAR_5;
 VAR_11= (VAR_6->f_flag & VAR_1) != 0 && VAR_6->f_type == VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_6->f_flag, VAR_6->f_cred, VAR_7, VAR_11);

 if (FUNC_1(VAR_11)) {
  VAR_9.l_whence = VAR_4;
  VAR_9.l_start = 0;
  VAR_9.l_len = 0;
  VAR_9.l_type = VAR_3;
  (void) FUNC_0(VAR_8, VAR_6, VAR_3, &VAR_9, VAR_2);
  FUNC_3(VAR_8);
 }
 return (VAR_10);
}
