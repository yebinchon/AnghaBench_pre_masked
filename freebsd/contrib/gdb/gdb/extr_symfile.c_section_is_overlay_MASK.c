
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lma; scalar_t__ vma; } ;
typedef TYPE_1__ asection ;


 scalar_t__ VAR_0 ;

int
FUNC_0 (asection *VAR_1)
{


  if (VAR_0)
    if (VAR_1 && VAR_1->lma != 0 &&
 VAR_1->vma != VAR_1->lma)
      return 1;

  return 0;
}
