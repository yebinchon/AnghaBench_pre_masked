
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int line; TYPE_1__* symtab; } ;
struct symtab {char* filename; } ;
struct symbol {int line; } ;
struct minimal_symbol {int line; } ;
typedef int asection ;
struct TYPE_2__ {char* filename; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;
 char* FUNC_3 (struct symbol*) ;
 scalar_t__ FUNC_4 (struct symbol*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_5 (scalar_t__) ;
 struct symbol* FUNC_6 (scalar_t__,int *) ;
 struct symtab_and_line FUNC_7 (scalar_t__,int *,int ) ;
 struct symbol* FUNC_8 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (scalar_t__,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 char* FUNC_11 (char*) ;

int
FUNC_12 (CORE_ADDR VAR_4,
   int VAR_5,
   char **VAR_6,
   int *VAR_7,
   char **VAR_8,
   int *VAR_9,
   int *VAR_10)
{
  struct minimal_symbol *VAR_11;
  struct symbol *VAR_12;
  struct symtab *VAR_13 = 0;
  CORE_ADDR VAR_14 = 0;
  asection *VAR_15 = 0;
  char *VAR_16 = "";


  *VAR_10 = 0;



  if (VAR_2)
    {
      VAR_15 = FUNC_5 (VAR_4);
      if (FUNC_10 (VAR_4, VAR_15))
 {
   *VAR_10 = 1;
   VAR_4 = FUNC_9 (VAR_4, VAR_15);
 }
    }
  VAR_11 = FUNC_8 (VAR_4, VAR_15);
  VAR_12 = FUNC_6 (VAR_4, VAR_15);

  if (VAR_12)
    {
      VAR_14 = FUNC_0 (FUNC_2 (VAR_12));
      if (VAR_5 || VAR_0)
 VAR_16 = FUNC_3 (VAR_12);
      else
 VAR_16 = FUNC_1 (VAR_12);
    }

  if (VAR_11 != ((void*)0))
    {
      if (FUNC_4 (VAR_11) > VAR_14 || VAR_12 == ((void*)0))
 {


   VAR_12 = 0;
   VAR_13 = 0;
   VAR_14 = FUNC_4 (VAR_11);
   if (VAR_5 || VAR_0)
     VAR_16 = FUNC_3 (VAR_11);
   else
     VAR_16 = FUNC_1 (VAR_11);
 }
    }
  if (VAR_12 == ((void*)0) && VAR_11 == ((void*)0))
    return 1;
  if (VAR_4 > VAR_14 + VAR_1
      && VAR_14 + VAR_1 > VAR_14)
    return 1;

  *VAR_7 = VAR_4 - VAR_14;

  *VAR_6 = FUNC_11 (VAR_16);

  if (VAR_3)
    {
      struct symtab_and_line VAR_17;

      VAR_17 = FUNC_7 (VAR_4, VAR_15, 0);

      if (VAR_17.symtab)
 {
   *VAR_8 = FUNC_11 (VAR_17.symtab->filename);
   *VAR_9 = VAR_17.line;
 }
      else if (VAR_13 && VAR_12 && VAR_12->line)
 {
   *VAR_8 = FUNC_11 (VAR_13->filename);
   *VAR_9 = VAR_12->line;
 }
      else if (VAR_13)
 {
   *VAR_8 = FUNC_11 (VAR_13->filename);
   *VAR_9 = -1;
 }
    }
  return 0;
}
