
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int domain_enum ;
struct TYPE_2__ {scalar_t__ la_language; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (char const*,int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 struct symbol* FUNC_2 (char const*,char const*,struct block const*,int const,int*,struct symtab**) ;
 int FUNC_3 (char const*) ;
 char FUNC_4 (char const) ;
 int FUNC_5 (char*) ;

struct symbol *
FUNC_6 (const char *VAR_6, const struct block *VAR_7,
        const domain_enum VAR_8, int *VAR_9,
        struct symtab **VAR_10)
{
  char *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);
  const char *VAR_13 = ((void*)0);
  int VAR_14 = 0;
  struct symbol *VAR_15;

  VAR_12 = VAR_6;



  if (VAR_4->la_language == VAR_5)
    {
      VAR_11 = FUNC_1 (VAR_6, VAR_0 | VAR_1);
      if (VAR_11)
 {
   VAR_13 = VAR_6;
   VAR_12 = VAR_11;
   VAR_14 = 1;
 }
    }

  if (VAR_3 == VAR_2)
    {
      char *VAR_16;
      int VAR_17, VAR_18;

      VAR_17 = FUNC_3 (VAR_6);
      VAR_16 = (char *) FUNC_0 (VAR_17 + 1);
      for (VAR_18= 0; VAR_18 < VAR_17; VAR_18++)
        VAR_16[VAR_18] = FUNC_4 (VAR_6[VAR_18]);
      VAR_16[VAR_17] = 0;
      VAR_12 = VAR_16;
    }

  VAR_15 = FUNC_2 (VAR_12, VAR_13, VAR_7,
     VAR_8, VAR_9, VAR_10);
  if (VAR_14)
    FUNC_5 (VAR_11);

  return VAR_15;
}
