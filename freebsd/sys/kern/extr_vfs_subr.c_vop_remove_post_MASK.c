
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_remove_args {int a_vp; int a_dvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(void *VAR_2, int VAR_3)
{
 struct vop_remove_args *VAR_4 = VAR_2;

 if (!VAR_3) {
  FUNC_0(VAR_4->a_dvp, VAR_1);
  FUNC_0(VAR_4->a_vp, VAR_0);
 }
}
