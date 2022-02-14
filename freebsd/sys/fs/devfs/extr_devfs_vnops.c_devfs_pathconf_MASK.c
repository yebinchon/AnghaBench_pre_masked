
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; TYPE_1__* a_vp; } ;
struct TYPE_2__ {int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_1(struct vop_pathconf_args *VAR_8)
{

 switch (VAR_8->a_name) {
 case 135:
  *VAR_8->a_retval = 64;
  return (0);
 case 130:
  *VAR_8->a_retval = VAR_5;
  return (0);
 case 134:
  *VAR_8->a_retval = VAR_1;
  return (0);
 case 129:
  *VAR_8->a_retval = VAR_2;
  return (0);
 case 132:
  if (VAR_8->a_vp->v_vflag & VAR_6) {
   *VAR_8->a_retval = VAR_3;
   return (0);
  }
  return (VAR_0);
 case 131:
  if (VAR_8->a_vp->v_vflag & VAR_6) {
   *VAR_8->a_retval = VAR_4;
   return (0);
  }
  return (VAR_0);
 case 128:
  if (VAR_8->a_vp->v_vflag & VAR_6) {
   *VAR_8->a_retval = VAR_7;
   return (0);
  }
  return (VAR_0);
 case 133:







  *VAR_8->a_retval = 0;

  return (0);
 case 136:
  *VAR_8->a_retval = 1;
  return (0);
 default:
  return (FUNC_0(VAR_8));
 }

}
