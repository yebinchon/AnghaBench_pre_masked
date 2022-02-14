
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 struct type* FUNC_3 (int ) ;
 char* VAR_4 ;
 char* FUNC_4 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 struct symbol* FUNC_7 (char*,int ,int ,int ,struct symtab**) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;

struct symbol *
FUNC_11 (char *VAR_6, int VAR_7, char **VAR_8,
    int *VAR_9, char **VAR_10)
{
  char *VAR_11;
  char *VAR_12, *VAR_13;
  char *VAR_14 = ((void*)0);
  char *VAR_15;
  struct symbol *VAR_16 = ((void*)0);
  struct symbol *VAR_17 = ((void*)0);
  struct type *VAR_18;
  int VAR_19 = 0;
  int VAR_20 = 0;
  char *VAR_21;





  if (!VAR_5)
    return (struct symbol *) ((void*)0);

  VAR_11 = VAR_6;


  while (*VAR_11 && (*VAR_11 == ' ' || *VAR_11 == '\t'))
    VAR_11++;
  if (VAR_11[0] == ':' && VAR_11[1] == ':')
    VAR_11 += 2;
  while (*VAR_11 && (*VAR_11 == ' ' || *VAR_11 == '\t'))
    VAR_11++;

  while (1)
    {


      VAR_12 = VAR_11;
      if (!(FUNC_6 (*VAR_11) || *VAR_11 == '$' || *VAR_11 == '_'))
 return (struct symbol *) ((void*)0);
      VAR_11++;
      while (*VAR_11 && (FUNC_5 (*VAR_11) || *VAR_11 == '$' || *VAR_11 == '_'))
 VAR_11++;

      if (*VAR_11 == '<')
 {


   VAR_21 = FUNC_4 (VAR_11);
   if (VAR_21)
     VAR_11 = VAR_21;
 }

      VAR_13 = VAR_11;


      while (*VAR_11 && (*VAR_11 == ' ' || *VAR_11 == '\t'))
 VAR_11++;
      if (VAR_11[0] == ':' && VAR_11[1] == ':')
 VAR_11 += 2;
      while (*VAR_11 && (*VAR_11 == ' ' || *VAR_11 == '\t'))
 VAR_11++;


      if (!*VAR_11 || !(FUNC_6 (*VAR_11) || *VAR_11 == '$' || *VAR_11 == '_'))
 VAR_20 = 1;

      VAR_15 = (char *) FUNC_2 (VAR_19 + VAR_13 - VAR_12 + 3);
      if (VAR_14)
 {
   FUNC_8 (VAR_15, VAR_14, VAR_19);
   FUNC_8 (VAR_15 + VAR_19, VAR_4, 2);
   FUNC_8 (VAR_15 + VAR_19 + 2, VAR_12, VAR_13 - VAR_12);
   VAR_15[VAR_19 + 2 + VAR_13 - VAR_12] = '\000';
 }
      else
 {
   FUNC_8 (VAR_15, VAR_12, VAR_13 - VAR_12);
   VAR_15[VAR_13 - VAR_12] = '\000';
 }

      VAR_14 = VAR_15;
      VAR_19 = FUNC_9 (VAR_14);



      if (!VAR_20)
 {

   VAR_16 = FUNC_7 (VAR_14, 0, VAR_0,
         0, (struct symtab **) ((void*)0));
 }
      else
 {

   VAR_17 = FUNC_7 (VAR_14, 0, VAR_3,
       0, (struct symtab **) ((void*)0));

   if (!VAR_17)
     VAR_16 = FUNC_7 (VAR_14, 0, VAR_0,
           0, (struct symtab **) ((void*)0));
 }

      if (VAR_17 ||
   (VAR_16 &&
    (VAR_18 = FUNC_3 (FUNC_0 (VAR_16)),
     (FUNC_1 (VAR_18) == VAR_1
      || FUNC_1 (VAR_18) == VAR_2))))
 {

   *VAR_8 = (char *) FUNC_10 (VAR_19 + 1);
   FUNC_8 (*VAR_8, VAR_14, VAR_19);
   (*VAR_8)[VAR_19] = '\000';
   break;
 }


      if (VAR_20)
 return (struct symbol *) ((void*)0);
    }


  if (VAR_17)
    *VAR_9 = 0;
  else
    *VAR_9 = 1;

  if (VAR_10)
    *VAR_10 = VAR_20 ? VAR_11 : VAR_13;

  return VAR_17 ? VAR_17 : VAR_16;
}
