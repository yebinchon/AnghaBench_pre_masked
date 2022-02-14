
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_rdev; } ;
struct tty {int * t_dev; } ;
struct thread {int dummy; } ;
struct stat {int st_rdev; int st_mode; } ;
struct file {scalar_t__ f_type; struct tty* f_data; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,struct thread*) ;
 scalar_t__ FUNC_4 (struct thread*,int,int *,struct file**) ;
 scalar_t__ FUNC_5 (int ,int*,int*) ;

__attribute__((used)) static void
FUNC_6(struct thread *VAR_2, int VAR_3, struct stat *VAR_4)
{
 struct file *VAR_5;
 struct vnode *VAR_6;
 int VAR_7, VAR_8;




 if ((!FUNC_1(VAR_4->st_mode) && !FUNC_0(VAR_4->st_mode)) ||
     FUNC_4(VAR_2, VAR_3, &VAR_1, &VAR_5) != 0)
  return;
 VAR_6 = VAR_5->f_vnode;
 if (VAR_6 != ((void*)0) && VAR_6->v_rdev != ((void*)0) &&
     FUNC_5(FUNC_2(VAR_6->v_rdev),
      &VAR_7, &VAR_8) == 0) {
  VAR_4->st_rdev = (VAR_7 << 8 | VAR_8);
 } else if (VAR_5->f_type == VAR_0) {
  struct tty *VAR_9 = VAR_5->f_data;


  if (FUNC_5(FUNC_2(VAR_9->t_dev),
      &VAR_7, &VAR_8) == 0) {
   VAR_4->st_rdev = (VAR_7 << 8 | VAR_8);
  }
 }
 FUNC_3(VAR_5, VAR_2);
}
