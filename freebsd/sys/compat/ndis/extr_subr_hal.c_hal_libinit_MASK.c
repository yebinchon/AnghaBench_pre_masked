
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipt_ftype; int ipt_argcnt; int ipt_wrap; int * ipt_func; } ;
typedef TYPE_1__ image_patch_table ;
typedef int funcptr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int ,int *,int ,int ) ;

int
FUNC_2()
{
 image_patch_table *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(&VAR_3[VAR_6], "HAL preemption lock",
      "HAL lock", VAR_1|VAR_0);

 VAR_5 = VAR_4;
 while (VAR_5->ipt_func != ((void*)0)) {
  FUNC_1((funcptr)VAR_5->ipt_func,
      (funcptr *)&VAR_5->ipt_wrap,
      VAR_5->ipt_argcnt, VAR_5->ipt_ftype);
  VAR_5++;
 }

 return (0);
}
