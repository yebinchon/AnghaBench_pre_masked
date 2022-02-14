
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long gprmask; unsigned long fprmask; unsigned long* cprmask; } ;
typedef TYPE_1__ ecoff_data_type ;
typedef int bfd_boolean ;
typedef int bfd ;


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
FUNC_4 (bfd *VAR_5,
   unsigned long VAR_6,
   unsigned long VAR_7,
   unsigned long *VAR_8)
{
  ecoff_data_type *VAR_9;

  if (FUNC_0 (VAR_5) != VAR_4
      || FUNC_1 (VAR_5) != VAR_3)
    {
      FUNC_2 (VAR_2);
      return VAR_0;
    }

  VAR_9 = FUNC_3 (VAR_5);
  VAR_9->gprmask = VAR_6;
  VAR_9->fprmask = VAR_7;
  if (VAR_8 != ((void*)0))
    {
      int VAR_10;

      for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
 VAR_9->cprmask[VAR_10] = VAR_8[VAR_10];
    }

  return VAR_1;
}
