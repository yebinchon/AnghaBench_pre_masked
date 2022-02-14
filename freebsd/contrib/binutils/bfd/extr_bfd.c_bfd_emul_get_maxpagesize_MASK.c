
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_5__ {scalar_t__ flavour; } ;
typedef TYPE_1__ bfd_target ;
struct TYPE_6__ {int maxpagesize; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_1__ const*) ;

bfd_vma
FUNC_3 (const char *VAR_1)
{
  const bfd_target *VAR_2;

  VAR_2 = FUNC_1 (VAR_1, ((void*)0));
  if (VAR_2 != ((void*)0)
      && VAR_2->flavour == VAR_0)
    return FUNC_2 (VAR_2)->maxpagesize;

  FUNC_0 ();
  return 0;
}
