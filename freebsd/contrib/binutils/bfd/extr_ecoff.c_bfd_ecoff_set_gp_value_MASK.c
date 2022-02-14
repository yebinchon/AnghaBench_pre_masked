
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int gp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_3 (int *) ;

bfd_boolean
FUNC_4 (bfd *VAR_5, bfd_vma VAR_6)
{
  if (FUNC_0 (VAR_5) != VAR_4
      || FUNC_1 (VAR_5) != VAR_3)
    {
      FUNC_2 (VAR_2);
      return VAR_0;
    }

  FUNC_3 (VAR_5)->gp = VAR_6;

  return VAR_1;
}
