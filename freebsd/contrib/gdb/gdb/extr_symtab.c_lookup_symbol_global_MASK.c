
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
typedef int domain_enum ;


 int VAR_0 ;
 struct symbol* FUNC_0 (int ,char const*,char const*,int const,struct symtab**) ;
 struct symbol* FUNC_1 (int ,char const*,char const*,int const,struct symtab**) ;

struct symbol *
FUNC_2 (const char *VAR_1,
        const char *VAR_2,
        const domain_enum VAR_3,
        struct symtab **VAR_4)
{
  struct symbol *VAR_5;

  VAR_5 = FUNC_1 (VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4);
  if (VAR_5 != ((void*)0))
    return VAR_5;

  return FUNC_0 (VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);
}
