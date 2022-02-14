
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int domain_enum ;
struct TYPE_2__ {struct symbol* (* la_lookup_symbol_nonlocal ) (char const*,char const*,struct block const*,int const,struct symtab**) ;struct value* (* la_value_of_this ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct value*,char const*) ;
 TYPE_1__* VAR_1 ;
 struct symbol* FUNC_1 (char const*,char const*,struct block const*,int const,struct symtab**) ;
 struct symbol* FUNC_2 (int ,char const*,char const*,int const,struct symtab**) ;
 struct symbol* FUNC_3 (int ,char const*,char const*,int const,struct symtab**) ;
 struct value* FUNC_4 (int ) ;
 struct symbol* FUNC_5 (char const*,char const*,struct block const*,int const,struct symtab**) ;

__attribute__((used)) static struct symbol *
FUNC_6 (const char *VAR_2, const char *VAR_3,
     const struct block *VAR_4, const domain_enum VAR_5,
     int *VAR_6, struct symtab **VAR_7)
{
  struct symbol *VAR_8;






  if (VAR_6 != ((void*)0))
    *VAR_6 = 0;




  VAR_8 = FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_7);
  if (VAR_8 != ((void*)0))
    return VAR_8;




  if (VAR_1->la_value_of_this != ((void*)0)
      && VAR_6 != ((void*)0))
    {
      struct value *VAR_9 = VAR_1->la_value_of_this (0);

      if (VAR_9 && FUNC_0 (VAR_9, VAR_2))
 {
   *VAR_6 = 1;
   if (VAR_7 != ((void*)0))
     *VAR_7 = ((void*)0);
   return ((void*)0);
 }
    }




  VAR_8 = VAR_1->la_lookup_symbol_nonlocal (VAR_2, VAR_3,
           VAR_4, VAR_5,
           VAR_7);
  if (VAR_8 != ((void*)0))
    return VAR_8;







  VAR_8 = FUNC_3 (VAR_0, VAR_2, VAR_3,
       VAR_5, VAR_7);
  if (VAR_8 != ((void*)0))
    return VAR_8;

  VAR_8 = FUNC_2 (VAR_0, VAR_2, VAR_3,
        VAR_5, VAR_7);
  if (VAR_8 != ((void*)0))
    return VAR_8;

  if (VAR_7 != ((void*)0))
    *VAR_7 = ((void*)0);
  return ((void*)0);
}
