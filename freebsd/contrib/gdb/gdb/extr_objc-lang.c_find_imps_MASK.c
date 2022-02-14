
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct symtab*,char,char*,char*,char*,struct symbol**,unsigned int*,unsigned int*) ;
 int FUNC_2 (int ) ;
 struct minimal_symbol* FUNC_3 (char*,int ,int ) ;
 struct symbol* FUNC_4 (char*,struct block*,int ,int ,int *) ;
 char* FUNC_5 (char*,char*,char**,char**,char**) ;
 char* FUNC_6 (char*,char**) ;
 int FUNC_7 (struct symbol**,unsigned int,int,int ) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

char *FUNC_10 (struct symtab *VAR_2, struct block *VAR_3,
   char *VAR_4, struct symbol **VAR_5,
   unsigned int *VAR_6, unsigned int *VAR_7)
{
  char VAR_8 = '\0';
  char *VAR_9 = ((void*)0);
  char *VAR_10 = ((void*)0);
  char *VAR_11 = ((void*)0);

  unsigned int VAR_12 = 0;
  unsigned int VAR_13 = 0;

  unsigned int VAR_14 = 0;
  unsigned int VAR_15 = 0;

  char *VAR_16 = ((void*)0);
  char *VAR_17 = ((void*)0);

  FUNC_2 (VAR_6 != ((void*)0));
  FUNC_2 (VAR_7 != ((void*)0));

  if (VAR_6 != ((void*)0))
    *VAR_6 = 0;
  if (VAR_7 != ((void*)0))
    *VAR_7 = 0;

  VAR_16 = (char *) FUNC_0 (FUNC_9 (VAR_4) + 1);
  FUNC_8 (VAR_16, VAR_4);
  VAR_17 = FUNC_5 (VAR_16, &VAR_8, &VAR_9, &VAR_10, &VAR_11);

  if (VAR_17 == ((void*)0)) {

    struct symbol *VAR_18 = ((void*)0);
    struct minimal_symbol *VAR_19 = ((void*)0);

    FUNC_8 (VAR_16, VAR_4);
    VAR_17 = FUNC_6 (VAR_16, &VAR_11);

    if (VAR_17 == ((void*)0))
      return ((void*)0);

    VAR_18 = FUNC_4 (VAR_11, VAR_3, VAR_0, 0, ((void*)0));
    if (VAR_18 != ((void*)0))
      {
 if (VAR_5)
   VAR_5[VAR_12] = VAR_18;
 VAR_12++;
 VAR_13++;
      }

    if (VAR_18 == ((void*)0))
      VAR_19 = FUNC_3 (VAR_11, 0, 0);

    if (VAR_19 != ((void*)0))
      {
 if (VAR_5)
   VAR_5[VAR_12] = (struct symbol *)VAR_19;
 VAR_12++;
      }
  }

  if (VAR_5 != ((void*)0))
    FUNC_1 (VAR_2, VAR_8, VAR_9, VAR_10, VAR_11,
    VAR_5 + VAR_12, &VAR_14, &VAR_15);
  else
    FUNC_1 (VAR_2, VAR_8, VAR_9, VAR_10, VAR_11,
    ((void*)0), &VAR_14, &VAR_15);


  if (VAR_14 == 0 && VAR_15 == 0)
    return VAR_4;
  if (VAR_5 != ((void*)0))
    {
      while ((VAR_13 < VAR_12) && (VAR_15 > 0))
 {
   struct symbol *VAR_20 = ((void*)0);

   unsigned int VAR_21 = VAR_13;

   unsigned int VAR_22 = VAR_12 + VAR_15 - 1;

   VAR_20 = VAR_5[VAR_22];
   VAR_5[VAR_22] = VAR_5[VAR_21];
   VAR_5[VAR_21] = VAR_20;



   VAR_13++;
   VAR_15--;
 }
    }

  VAR_12 += VAR_14;
  VAR_13 += VAR_15;

  if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_12;
  if (VAR_7 != ((void*)0))
    *VAR_7 = VAR_13;

  if (VAR_5 == ((void*)0))
    return VAR_4 + (VAR_17 - VAR_16);

  if (VAR_12 > 1)
    {

      if (VAR_13 > 1)
 FUNC_7 (VAR_5, VAR_13, sizeof (struct minimal_symbol *),
        VAR_1);


      if ((VAR_12 - VAR_13) > 1)
 FUNC_7 (&VAR_5[VAR_13], VAR_12 - VAR_13,
        sizeof (struct minimal_symbol *), VAR_1);
    }

  VAR_5[VAR_12] = 0;

  return VAR_4 + (VAR_17 - VAR_16);
}
