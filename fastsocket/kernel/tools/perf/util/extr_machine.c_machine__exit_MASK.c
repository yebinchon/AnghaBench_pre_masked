
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int * root_dir; int kernel_dsos; int user_dsos; int kmaps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct machine *VAR_0)
{
 FUNC_2(&VAR_0->kmaps);
 FUNC_0(&VAR_0->user_dsos);
 FUNC_0(&VAR_0->kernel_dsos);
 FUNC_1(VAR_0->root_dir);
 VAR_0->root_dir = ((void*)0);
}
