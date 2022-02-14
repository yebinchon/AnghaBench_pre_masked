
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rename_args {int * a_fvp; int * a_fdvp; int * a_tdvp; int * a_tvp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct vop_rename_args *VAR_0)
{

 if (VAR_0->a_tvp != ((void*)0))
  FUNC_0(VAR_0->a_tvp);
 if (VAR_0->a_tdvp == VAR_0->a_tvp)
  FUNC_1(VAR_0->a_tdvp);
 else
  FUNC_0(VAR_0->a_tdvp);
 FUNC_1(VAR_0->a_fdvp);
 FUNC_1(VAR_0->a_fvp);
}
