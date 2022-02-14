
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mnt; struct TYPE_4__* mnext; } ;
typedef TYPE_1__ mntlist ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(mntlist *VAR_0)
{
  mntlist *VAR_1;

  while ((VAR_1 = VAR_0)) {
    VAR_0 = VAR_0->mnext;
    if (VAR_1->mnt)
      FUNC_1(VAR_1->mnt);
    FUNC_0(VAR_1);
  }
}
