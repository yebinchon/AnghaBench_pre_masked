
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef scalar_t__ domain_enum ;


 scalar_t__ const VAR_0 ;
 struct block* FUNC_0 (struct block const*) ;
 struct symbol* FUNC_1 (char const*,struct symtab**) ;
 struct symbol* FUNC_2 (char const*,char const*,struct block const*,scalar_t__ const,struct symtab**) ;
 struct symbol* FUNC_3 (char const*,char const*,scalar_t__ const,struct symtab**) ;
 struct symbol* FUNC_4 (char const*,char const*,struct block const*,scalar_t__ const,struct symtab**) ;

__attribute__((used)) static struct symbol *
FUNC_5 (const char *VAR_1,
      const char *VAR_2,
      const struct block *VAR_3,
      const domain_enum VAR_4,
      struct symtab **VAR_5,
      int VAR_6)
{
  struct symbol *VAR_7 = ((void*)0);

  VAR_7 = FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_7 != ((void*)0))
    return VAR_7;

  if (VAR_6)
    {




      const struct block *VAR_8 = FUNC_0 (VAR_3);

      if (VAR_8 != ((void*)0))
 VAR_7 = FUNC_2 (VAR_1, VAR_2, VAR_8,
           VAR_4, VAR_5);
    }
  else
    {
      VAR_7 = FUNC_3 (VAR_1, VAR_2, VAR_4, VAR_5);
    }

  if (VAR_7 != ((void*)0))
    return VAR_7;
  if (VAR_4 == VAR_0)
    {
      VAR_7 = FUNC_1 (VAR_1, VAR_5);
      if (VAR_7 != ((void*)0))
 return VAR_7;
    }

  return ((void*)0);
}
