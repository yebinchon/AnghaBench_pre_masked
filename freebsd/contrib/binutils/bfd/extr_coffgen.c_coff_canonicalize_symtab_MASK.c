
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int coff_symbol_type ;
typedef int bfd ;
typedef int asymbol ;


 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

long
FUNC_3 (bfd *VAR_0, asymbol **VAR_1)
{
  unsigned int VAR_2;
  coff_symbol_type *VAR_3;
  coff_symbol_type **VAR_4 = (coff_symbol_type **) VAR_1;

  if (!FUNC_0 (VAR_0))
    return -1;

  VAR_3 = FUNC_2 (VAR_0);
  VAR_2 = FUNC_1 (VAR_0);
  while (VAR_2-- > 0)
    *VAR_4++ = VAR_3++;

  *VAR_4 = ((void*)0);

  return FUNC_1 (VAR_0);
}
