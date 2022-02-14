
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs_clean; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void)
{

 VAR_2->fs_clean = 1;
 if (FUNC_2(VAR_1, 0) == -1)
  FUNC_0(1, "sbwrite(%s)", VAR_0);
 if (FUNC_3(VAR_1) == -1)
  FUNC_0(1, "ufs_disk_close(%s)", VAR_0);
 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);
 VAR_2 = ((void*)0);
}
