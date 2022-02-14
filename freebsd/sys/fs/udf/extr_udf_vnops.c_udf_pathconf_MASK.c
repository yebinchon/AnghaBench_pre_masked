
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; TYPE_1__* a_vp; } ;
struct TYPE_2__ {int v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_1(struct vop_pathconf_args *VAR_6)
{

 switch (VAR_6->a_name) {
 case 133:
  *VAR_6->a_retval = 64;
  return (0);
 case 132:
  *VAR_6->a_retval = 65535;
  return (0);
 case 131:
  *VAR_6->a_retval = VAR_2;
  return (0);
 case 128:
  *VAR_6->a_retval = VAR_1;
  return (0);
 case 130:
  *VAR_6->a_retval = 1;
  return (0);
 case 129:
  if (VAR_6->a_vp->v_type == VAR_4 || VAR_6->a_vp->v_type == VAR_5) {
   *VAR_6->a_retval = VAR_3;
   return (0);
  }
  return (VAR_0);
 default:
  return (FUNC_0(VAR_6));
 }
}
