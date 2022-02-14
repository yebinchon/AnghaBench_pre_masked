
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_8__ {scalar_t__ format; TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {int gp; } ;
struct TYPE_7__ {scalar_t__ flavour; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

bfd_vma
FUNC_2 (bfd *VAR_3)
{
  if (! VAR_3)
    return 0;
  if (VAR_3->format != VAR_0)
    return 0;

  if (VAR_3->xvec->flavour == VAR_1)
    return FUNC_0 (VAR_3)->gp;
  else if (VAR_3->xvec->flavour == VAR_2)
    return FUNC_1 (VAR_3);

  return 0;
}
