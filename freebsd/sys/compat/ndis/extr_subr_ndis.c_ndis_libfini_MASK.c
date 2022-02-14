
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipt_wrap; int * ipt_func; } ;
typedef TYPE_1__ image_patch_table ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1()
{
 image_patch_table *VAR_1;

 VAR_1 = VAR_0;
 while (VAR_1->ipt_func != ((void*)0)) {
  FUNC_0(VAR_1->ipt_wrap);
  VAR_1++;
 }

 return (0);
}
