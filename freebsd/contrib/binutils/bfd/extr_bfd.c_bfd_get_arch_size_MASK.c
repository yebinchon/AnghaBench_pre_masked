
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* xvec; } ;
typedef TYPE_3__ bfd ;
struct TYPE_10__ {TYPE_2__* s; } ;
struct TYPE_8__ {int arch_size; } ;
struct TYPE_7__ {scalar_t__ flavour; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;

int
FUNC_1 (bfd *VAR_1)
{
  if (VAR_1->xvec->flavour == VAR_0)
    return FUNC_0 (VAR_1)->s->arch_size;

  return -1;
}
