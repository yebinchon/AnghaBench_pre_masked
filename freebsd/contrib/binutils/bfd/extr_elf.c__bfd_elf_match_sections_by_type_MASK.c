
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_6__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
typedef int asection ;
struct TYPE_5__ {scalar_t__ flavour; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;

bfd_boolean
FUNC_1 (bfd *VAR_2, const asection *VAR_3,
     bfd *VAR_4, const asection *VAR_5)
{
  if (VAR_3 == ((void*)0)
      || VAR_5 == ((void*)0)
      || VAR_2->xvec->flavour != VAR_1
      || VAR_4->xvec->flavour != VAR_1)
    return VAR_0;

  return FUNC_0 (VAR_3) == FUNC_0 (VAR_5);
}
