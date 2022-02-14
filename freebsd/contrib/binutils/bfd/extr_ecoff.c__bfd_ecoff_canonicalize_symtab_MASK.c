
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ecoff_symbol_type ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_2__ {int * canonical_symbols; } ;


 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

long
FUNC_3 (bfd *VAR_0, asymbol **VAR_1)
{
  unsigned int VAR_2 = 0;
  ecoff_symbol_type *VAR_3;
  ecoff_symbol_type **VAR_4 = (ecoff_symbol_type **) VAR_1;

  if (! FUNC_0 (VAR_0))
    return -1;
  if (FUNC_1 (VAR_0) == 0)
    return 0;

  VAR_3 = FUNC_2 (VAR_0)->canonical_symbols;
  while (VAR_2 < FUNC_1 (VAR_0))
    {
      *(VAR_4++) = VAR_3++;
      VAR_2++;
    }
  *VAR_4++ = ((void*)0);
  return FUNC_1 (VAR_0);
}
