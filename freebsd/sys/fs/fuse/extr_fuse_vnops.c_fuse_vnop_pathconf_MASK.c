
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_pathconf_args {int a_name; int* a_retval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;





 int FUNC_1 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_2(struct vop_pathconf_args *VAR_4)
{

 switch (VAR_4->a_name) {
 case 132:
  *VAR_4->a_retval = 64;
  return (0);
 case 130:
  *VAR_4->a_retval = VAR_3;
  return (0);
 case 131:
  *VAR_4->a_retval = FUNC_0(VAR_1, VAR_0);
  return (0);
 case 128:
  *VAR_4->a_retval = VAR_2;
  return (0);
 case 129:
  *VAR_4->a_retval = 1;
  return (0);
 default:
  return (FUNC_1(VAR_4));
 }
}
