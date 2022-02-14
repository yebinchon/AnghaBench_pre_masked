
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_pathconf_args {int a_name; long* a_retval; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int FUNC_0 (struct vop_pathconf_args*) ;

int
FUNC_1(struct vop_pathconf_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 int VAR_8 = VAR_6->a_name;
 long *VAR_9 = VAR_6->a_retval;

 int VAR_10;

 VAR_10 = 0;

 switch (VAR_8) {
 case 132:
  *VAR_9 = VAR_3;
  break;

 case 131:
  *VAR_9 = VAR_1;
  break;

 case 129:
  if (VAR_7->v_type == VAR_4 || VAR_7->v_type == VAR_5)
   *VAR_9 = VAR_2;
  else
   VAR_10 = VAR_0;
  break;

 case 134:
  *VAR_9 = 1;
  break;

 case 130:
  *VAR_9 = 1;
  break;

 case 128:
  *VAR_9 = 1;
  break;

 case 133:
  *VAR_9 = 64;
  break;

 default:
  VAR_10 = FUNC_0(VAR_6);
 }

 return VAR_10;
}
