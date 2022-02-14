
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; scalar_t__ e_machine; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,unsigned long) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 TYPE_1__* FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd *VAR_15)
{
  if (FUNC_0 (VAR_15))
    {
      unsigned long VAR_16 = VAR_12;

      if (FUNC_2 (VAR_15)->e_flags & VAR_3)
 VAR_16 = VAR_14;
      else if (FUNC_2 (VAR_15)->e_flags & VAR_2)
 VAR_16 = VAR_13;
      return FUNC_1 (VAR_15, VAR_6, VAR_16);
    }
  else
    {
      if (FUNC_2 (VAR_15)->e_machine == VAR_4)
 {
   if (FUNC_2 (VAR_15)->e_flags & VAR_3)
     return FUNC_1 (VAR_15, VAR_6,
           VAR_11);
   else if (FUNC_2 (VAR_15)->e_flags & VAR_2)
     return FUNC_1 (VAR_15, VAR_6,
           VAR_10);
   else if (FUNC_2 (VAR_15)->e_flags & VAR_0)
     return FUNC_1 (VAR_15, VAR_6,
           VAR_9);
   else
     return VAR_5;
 }
      else if (FUNC_2 (VAR_15)->e_flags & VAR_1)
 return FUNC_1 (VAR_15, VAR_6,
       VAR_8);
      else
 return FUNC_1 (VAR_15, VAR_6, VAR_7);
    }
}
