
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ecoff_symbol_type ;
typedef int bfd ;
struct TYPE_2__ {int debug_info; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

long
FUNC_3 (bfd *VAR_0)
{
  if (! FUNC_0 (VAR_0, ((void*)0),
     &FUNC_2 (VAR_0)->debug_info))
    return -1;

  if (FUNC_1 (VAR_0) == 0)
    return 0;

  return (FUNC_1 (VAR_0) + 1) * (sizeof (ecoff_symbol_type *));
}
