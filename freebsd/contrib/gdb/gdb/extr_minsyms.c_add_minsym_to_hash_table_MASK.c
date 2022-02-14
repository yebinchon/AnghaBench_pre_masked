
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {struct minimal_symbol* hash_next; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct minimal_symbol*) ;
 unsigned int FUNC_1 (int ) ;

void
FUNC_2 (struct minimal_symbol *VAR_1,
     struct minimal_symbol **VAR_2)
{
  if (VAR_1->hash_next == ((void*)0))
    {
      unsigned int VAR_3
 = FUNC_1 (FUNC_0 (VAR_1)) % VAR_0;
      VAR_1->hash_next = VAR_2[VAR_3];
      VAR_2[VAR_3] = VAR_1;
    }
}
