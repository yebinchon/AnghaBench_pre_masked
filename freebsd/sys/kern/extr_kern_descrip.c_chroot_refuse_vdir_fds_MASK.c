
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct filedesc {int fd_lastfile; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct filedesc*) ;
 scalar_t__ VAR_2 ;
 struct file* FUNC_1 (struct filedesc*,int) ;

__attribute__((used)) static int
FUNC_2(struct filedesc *VAR_3)
{
 struct vnode *VAR_4;
 struct file *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 <= VAR_3->fd_lastfile; VAR_6++) {
  VAR_5 = FUNC_1(VAR_3, VAR_6);
  if (VAR_5 == ((void*)0))
   continue;
  if (VAR_5->f_type == VAR_0) {
   VAR_4 = VAR_5->f_vnode;
   if (VAR_4->v_type == VAR_2)
    return (VAR_1);
  }
 }
 return (0);
}
