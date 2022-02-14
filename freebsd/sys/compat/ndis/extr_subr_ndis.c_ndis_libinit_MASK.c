
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipt_ftype; int ipt_argcnt; int ipt_wrap; int * ipt_func; } ;
typedef TYPE_1__ image_patch_table ;
typedef int funcptr ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ,int ) ;

int
FUNC_2()
{
 image_patch_table *VAR_2;

 FUNC_0(VAR_0, "/compat/ndis");

 VAR_2 = VAR_1;
 while (VAR_2->ipt_func != ((void*)0)) {
  FUNC_1((funcptr)VAR_2->ipt_func,
      (funcptr *)&VAR_2->ipt_wrap,
      VAR_2->ipt_argcnt, VAR_2->ipt_ftype);
  VAR_2++;
 }

 return (0);
}
