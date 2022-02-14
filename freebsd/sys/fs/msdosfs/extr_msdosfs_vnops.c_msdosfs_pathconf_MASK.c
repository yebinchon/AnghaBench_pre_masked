
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; int a_vp; } ;
struct msdosfsmount {int pm_flags; } ;
struct TYPE_2__ {struct msdosfsmount* de_pmp; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;





 int FUNC_1 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_2(struct vop_pathconf_args *VAR_2)
{
 struct msdosfsmount *VAR_3 = FUNC_0(VAR_2->a_vp)->de_pmp;

 switch (VAR_2->a_name) {
 case 131:
  *VAR_2->a_retval = 32;
  return (0);
 case 130:
  *VAR_2->a_retval = 1;
  return (0);
 case 129:
  *VAR_2->a_retval = VAR_3->pm_flags & VAR_0 ? VAR_1 : 12;
  return (0);
 case 132:
  *VAR_2->a_retval = 1;
  return (0);
 case 128:
  *VAR_2->a_retval = 0;
  return (0);
 default:
  return (FUNC_1(VAR_2));
 }

}
