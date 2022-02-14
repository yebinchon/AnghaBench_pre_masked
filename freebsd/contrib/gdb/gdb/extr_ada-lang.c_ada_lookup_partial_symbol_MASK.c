
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct partial_symtab {int n_global_syms; int n_static_syms; int globals_offset; int statics_offset; TYPE_3__* objfile; } ;
struct partial_symbol {int dummy; } ;
typedef scalar_t__ domain_enum ;
struct TYPE_5__ {struct partial_symbol** list; } ;
struct TYPE_4__ {struct partial_symbol** list; } ;
struct TYPE_6__ {TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;


 char* FUNC_0 (struct partial_symbol*) ;
 scalar_t__ FUNC_1 (struct partial_symbol*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 scalar_t__ FUNC_6 (char const*,int,char*) ;

__attribute__((used)) static struct partial_symbol *
FUNC_7 (struct partial_symtab *VAR_0, const char *VAR_1,
      int VAR_2, domain_enum VAR_3, int VAR_4)
{
  struct partial_symbol **VAR_5;
  int VAR_6 = FUNC_4 (VAR_1);
  int VAR_7 = (VAR_2 ? VAR_0->n_global_syms : VAR_0->n_static_syms);
  int VAR_8;

  if (VAR_7 == 0)
    {
      return (((void*)0));
    }

  VAR_5 = (VAR_2 ?
    VAR_0->objfile->global_psymbols.list + VAR_0->globals_offset :
    VAR_0->objfile->static_psymbols.list + VAR_0->statics_offset);

  if (VAR_4)
    {
      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 1)
 {
   struct partial_symbol *VAR_9 = VAR_5[VAR_8];

   if (FUNC_1 (VAR_9) == VAR_3 &&
       FUNC_6 (VAR_1, VAR_6, FUNC_0 (VAR_9)))
     return VAR_9;
 }
      return ((void*)0);
    }
  else
    {
      if (VAR_2)
 {
   int VAR_10;
   VAR_8 = 0;
   VAR_10 = VAR_7 - 1;
   while (VAR_10 - VAR_8 > 4)
     {
       int VAR_11 = (VAR_10 + VAR_8) >> 1;
       struct partial_symbol *VAR_12 = VAR_5[VAR_11];
       if (FUNC_0 (VAR_12)[0] < VAR_1[0])
  VAR_8 = VAR_11 + 1;
       else if (FUNC_0 (VAR_12)[0] > VAR_1[0])
  VAR_10 = VAR_11 - 1;
       else if (FUNC_3 (FUNC_0 (VAR_12), VAR_1) < 0)
  VAR_8 = VAR_11 + 1;
       else
  VAR_10 = VAR_11;
     }
 }
      else
 VAR_8 = 0;

      while (VAR_8 < VAR_7)
 {
   struct partial_symbol *VAR_13 = VAR_5[VAR_8];

   if (FUNC_1 (VAR_13) == VAR_3)
     {
       int VAR_14 = FUNC_5 (VAR_1, FUNC_0 (VAR_13), VAR_6);

       if (VAR_14 < 0)
  {
    if (VAR_2)
      break;
  }
       else if (VAR_14 == 0
         && FUNC_2 (FUNC_0 (VAR_13) + VAR_6))
  return VAR_13;
     }
   VAR_8 += 1;
 }

      if (VAR_2)
 {
   int VAR_15;
   VAR_8 = 0;
   VAR_15 = VAR_7 - 1;
   while (VAR_15 - VAR_8 > 4)
     {
       int VAR_16 = (VAR_15 + VAR_8) >> 1;
       struct partial_symbol *VAR_17 = VAR_5[VAR_16];
       if (FUNC_0 (VAR_17)[0] < '_')
  VAR_8 = VAR_16 + 1;
       else if (FUNC_0 (VAR_17)[0] > '_')
  VAR_15 = VAR_16 - 1;
       else if (FUNC_3 (FUNC_0 (VAR_17), "_ada_") < 0)
  VAR_8 = VAR_16 + 1;
       else
  VAR_15 = VAR_16;
     }
 }
      else
 VAR_8 = 0;

      while (VAR_8 < VAR_7)
 {
   struct partial_symbol *VAR_18 = VAR_5[VAR_8];

   if (FUNC_1 (VAR_18) == VAR_3)
     {
       int VAR_19;

       VAR_19 = (int) '_' - (int) FUNC_0 (VAR_18)[0];
       if (VAR_19 == 0)
  {
    VAR_19 = FUNC_5 ("_ada_", FUNC_0 (VAR_18), 5);
    if (VAR_19 == 0)
      VAR_19 = FUNC_5 (VAR_1, FUNC_0 (VAR_18) + 5, VAR_6);
  }

       if (VAR_19 < 0)
  {
    if (VAR_2)
      break;
  }
       else if (VAR_19 == 0
         && FUNC_2 (FUNC_0 (VAR_18) + VAR_6 + 5))
  return VAR_18;
     }
   VAR_8 += 1;
 }

    }
  return ((void*)0);
}
