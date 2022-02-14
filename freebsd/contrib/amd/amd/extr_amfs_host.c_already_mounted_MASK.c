
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mnt; struct TYPE_5__* mnext; } ;
typedef TYPE_2__ mntlist ;
struct TYPE_4__ {int mnt_dir; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(mntlist *VAR_0, char *VAR_1)
{
  mntlist *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->mnext)
    if (FUNC_0(VAR_2->mnt->mnt_dir, VAR_1))
      return 1;
  return 0;
}
