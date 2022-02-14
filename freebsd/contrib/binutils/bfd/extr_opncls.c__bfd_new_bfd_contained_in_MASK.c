
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int target_defaulted; int direction; struct TYPE_5__* my_archive; int iovec; int xvec; } ;
typedef TYPE_1__ bfd ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

bfd *
FUNC_1 (bfd *VAR_1)
{
  bfd *VAR_2;

  VAR_2 = FUNC_0 ();
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_2->xvec = VAR_1->xvec;
  VAR_2->iovec = VAR_1->iovec;
  VAR_2->my_archive = VAR_1;
  VAR_2->direction = VAR_0;
  VAR_2->target_defaulted = VAR_1->target_defaulted;
  return VAR_2;
}
