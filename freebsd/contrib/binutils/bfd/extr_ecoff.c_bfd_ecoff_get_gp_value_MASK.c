
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_2__ {int gp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_3 (int *) ;

bfd_vma
FUNC_4 (bfd *VAR_3)
{
  if (FUNC_0 (VAR_3) != VAR_2
      || FUNC_1 (VAR_3) != VAR_1)
    {
      FUNC_2 (VAR_0);
      return 0;
    }

  return FUNC_3 (VAR_3)->gp;
}
