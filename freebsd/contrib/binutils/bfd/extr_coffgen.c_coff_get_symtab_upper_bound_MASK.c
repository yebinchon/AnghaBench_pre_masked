
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int coff_symbol_type ;
typedef int bfd ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

long
FUNC_2 (bfd *VAR_0)
{
  if (!FUNC_0 (VAR_0))
    return -1;

  return (FUNC_1 (VAR_0) + 1) * (sizeof (coff_symbol_type *));
}
