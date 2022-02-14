
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_command; int * a_data; int a_cred; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
struct vattr {int va_size; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct vnode*,struct vattr*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_ioctl_args *VAR_5)
{
 struct vnode *VAR_6;
 struct vattr VAR_7;
 off_t *VAR_8;
 int VAR_9;

 switch (VAR_5->a_command) {
 case 129:
 case 128:
  VAR_6 = VAR_5->a_vp;
  VAR_9 = FUNC_2(VAR_6, VAR_3);
  if (VAR_9 != 0)
   return (VAR_0);
  if (VAR_6->v_type == VAR_4)
   VAR_9 = FUNC_0(VAR_6, &VAR_7, VAR_5->a_cred);
  else
   VAR_9 = VAR_1;
  if (VAR_9 == 0) {
   VAR_8 = VAR_5->a_data;
   if (*VAR_8 < 0 || *VAR_8 >= VAR_7.va_size)
    VAR_9 = VAR_2;
   else if (VAR_5->a_command == 128)
    *VAR_8 = VAR_7.va_size;
  }
  FUNC_1(VAR_6, 0);
  break;
 default:
  VAR_9 = VAR_1;
  break;
 }
 return (VAR_9);
}
