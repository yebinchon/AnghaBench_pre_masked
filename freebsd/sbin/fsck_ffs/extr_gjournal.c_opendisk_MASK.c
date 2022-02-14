
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d_fs; int d_error; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_2 != ((void*)0))
  return;
 VAR_2 = &VAR_1;
 if (FUNC_1(VAR_2, VAR_0) == -1) {
  FUNC_0(1, "ufs_disk_fillout(%s) failed: %s", VAR_0,
      VAR_2->d_error);
 }
 VAR_3 = &VAR_2->d_fs;
}
