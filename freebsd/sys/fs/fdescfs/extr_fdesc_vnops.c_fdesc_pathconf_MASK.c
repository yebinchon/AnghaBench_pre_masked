
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_2__ {int fd_fd; int fd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*,int ) ;
 TYPE_1__* FUNC_1 (struct vnode*) ;


 int VAR_4 ;
 int FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (struct vop_pathconf_args*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_pathconf_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 int VAR_7;

 switch (VAR_5->a_name) {
 case 128:
  *VAR_5->a_retval = VAR_3;
  return (0);
 case 129:
  if (FUNC_1(VAR_6)->fd_type == VAR_0)
   *VAR_5->a_retval = 2;
  else
   *VAR_5->a_retval = 1;
  return (0);
 default:
  if (FUNC_1(VAR_6)->fd_type == VAR_0)
   return (FUNC_4(VAR_5));
  FUNC_5(VAR_6);
  FUNC_0(VAR_6, 0);
  VAR_7 = FUNC_2(VAR_4, FUNC_1(VAR_6)->fd_fd,
      VAR_5->a_name, VAR_5->a_retval);
  FUNC_3(VAR_6, VAR_2 | VAR_1);
  FUNC_6(VAR_6);
  return (VAR_7);
 }
}
