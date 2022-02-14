
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int domain_enum ;


 struct block* FUNC_0 (struct block const*) ;
 struct block* FUNC_1 (struct block const*) ;
 struct symbol* FUNC_2 (char const*,char const*,struct block const*,int const,struct symtab**) ;

__attribute__((used)) static struct symbol *
FUNC_3 (const char *VAR_0, const char *VAR_1,
    const struct block *VAR_2,
    const domain_enum VAR_3,
    struct symtab **VAR_4)
{
  struct symbol *VAR_5;
  const struct block *VAR_6 = FUNC_1 (VAR_2);



  if (VAR_6 == ((void*)0))
    return ((void*)0);

  while (VAR_2 != VAR_6)
    {
      VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4);
      if (VAR_5 != ((void*)0))
 return VAR_5;
      VAR_2 = FUNC_0 (VAR_2);
    }



  return ((void*)0);
}
