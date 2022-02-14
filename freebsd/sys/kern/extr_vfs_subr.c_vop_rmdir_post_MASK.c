
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rmdir_args {int a_vp; int a_dvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(void *VAR_3, int VAR_4)
{
 struct vop_rmdir_args *VAR_5 = VAR_3;

 if (!VAR_4) {
  FUNC_0(VAR_5->a_dvp, VAR_2 | VAR_1);
  FUNC_0(VAR_5->a_vp, VAR_0);
 }
}
