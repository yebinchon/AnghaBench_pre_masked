
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int minimal_symbol_count; scalar_t__* msymbol_demangled_hash; scalar_t__* msymbol_hash; struct minimal_symbol* msymbols; } ;
struct minimal_symbol {scalar_t__ demangled_hash_next; scalar_t__ hash_next; } ;


 int VAR_0 ;
 int * FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (struct minimal_symbol*,scalar_t__*) ;
 int FUNC_2 (struct minimal_symbol*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_3 (struct objfile *VAR_1)
{
  int VAR_2;
  struct minimal_symbol *VAR_3;


  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      VAR_1->msymbol_hash[VAR_2] = 0;
      VAR_1->msymbol_demangled_hash[VAR_2] = 0;
    }


  for (VAR_2 = VAR_1->minimal_symbol_count, VAR_3 = VAR_1->msymbols;
       VAR_2 > 0;
       VAR_2--, VAR_3++)
    {
      VAR_3->hash_next = 0;
      FUNC_2 (VAR_3, VAR_1->msymbol_hash);

      VAR_3->demangled_hash_next = 0;
      if (FUNC_0 (VAR_3) != ((void*)0))
 FUNC_1 (VAR_3,
                                            VAR_1->msymbol_demangled_hash);
    }
}
