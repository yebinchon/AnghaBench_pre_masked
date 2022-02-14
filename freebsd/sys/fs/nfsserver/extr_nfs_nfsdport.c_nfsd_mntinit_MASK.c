
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flag; scalar_t__ mnt_activevnodelistsize; scalar_t__ mnt_nvnodelistsize; int * mnt_optnew; int * mnt_opt; int * mnt_export; int mnt_activevnodelist; int mnt_nvnodelist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(void)
{
 static int VAR_5 = 0;

 if (VAR_5)
  return;
 VAR_5 = 1;
 VAR_2.mnt_flag = (VAR_1 | VAR_0);
 FUNC_0(&VAR_2.mnt_nvnodelist);
 FUNC_0(&VAR_2.mnt_activevnodelist);
 VAR_2.mnt_export = ((void*)0);
 FUNC_0(&VAR_4);
 FUNC_0(&VAR_3);
 VAR_2.mnt_opt = &VAR_4;
 VAR_2.mnt_optnew = &VAR_3;
 VAR_2.mnt_nvnodelistsize = 0;
 VAR_2.mnt_activevnodelistsize = 0;
}
