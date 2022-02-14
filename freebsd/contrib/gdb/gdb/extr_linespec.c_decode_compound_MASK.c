
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtabs_and_lines {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct type* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*) ;
 struct symtabs_and_lines FUNC_6 (int,char***,char*,char*,struct type*,struct symbol*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 struct symbol* FUNC_9 (char**,char*) ;
 struct symbol* FUNC_10 (char*,int ,int ,int ,struct symtab**) ;
 int FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char*) ;
 int * FUNC_13 (int ,char) ;
 struct symtabs_and_lines FUNC_14 (int,char***,char*,struct symbol*,int *,struct symtab*) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_15 (char **VAR_3, int VAR_4, char ***VAR_5,
   char *VAR_6, char *VAR_7)
{
  struct symtabs_and_lines VAR_8;
  char *VAR_9;
  char *VAR_10 = *VAR_3;
  char *VAR_11;
  struct symbol *VAR_12;

  struct symtab *VAR_13;
  char *VAR_14;
  struct symbol *VAR_15;
  struct symbol **VAR_16;
  struct type *VAR_17;





  if (VAR_7[0] == ':'
      && ((*VAR_3 == VAR_7) || (VAR_7[-1] == ' ') || (VAR_7[-1] == '\t')))
    VAR_10 += 2;
  VAR_9 = VAR_7;
  while (1)
    {


      VAR_7 = VAR_9 + 1;







      while (*VAR_7 && (VAR_7[0] != ' ') && (VAR_7[0] != '\t') && (VAR_7[0] != '\''))
 {
   if (VAR_7[0] == '<')
     {
       VAR_11 = FUNC_7 (VAR_7);
       if (!VAR_11)
  FUNC_5 ("malformed template specification in command");
       VAR_7 = VAR_11;
     }
   else if ((VAR_7[0] == ':') && (VAR_7[1] == ':'))
     break;
   else


     VAR_7++;
 }

      if (*VAR_7 != ':')
 break;







      VAR_9 = VAR_7;

      *VAR_3 = VAR_10;




    }
  VAR_15 = FUNC_9 (VAR_3, VAR_9);




  if (VAR_15 &&
      (VAR_17 = FUNC_3 (FUNC_0 (VAR_15)),
       (FUNC_1 (VAR_17) == VAR_0
 || FUNC_1 (VAR_17) == VAR_1)))
    {



      if (**VAR_3
   && FUNC_13 (FUNC_8 (),
       **VAR_3) != ((void*)0))
 {
   VAR_7 = FUNC_12 (*VAR_3);
   *VAR_3 = *VAR_3 + 1;
 }
      else
 {

   VAR_7 = *VAR_3;
   while (*VAR_7 && *VAR_7 != ' ' && *VAR_7 != '\t' && *VAR_7 != ',' && *VAR_7 != ':')
     VAR_7++;

 }



      VAR_14 = (char *) FUNC_2 (VAR_7 - *VAR_3 + 1);
      FUNC_11 (VAR_14, *VAR_3, VAR_7 - *VAR_3);
      VAR_14[VAR_7 - *VAR_3] = '\0';
      if (VAR_7 != *VAR_3
   && VAR_14[VAR_7 - *VAR_3 - 1]
   && FUNC_13 (FUNC_8 (),
       VAR_14[VAR_7 - *VAR_3 - 1]) != ((void*)0))
 VAR_14[VAR_7 - *VAR_3 - 1] = '\0';




      while (*VAR_7 == ' ' || *VAR_7 == '\t')
 VAR_7++;
      *VAR_3 = VAR_7;
      return FUNC_6 (VAR_4, VAR_5, VAR_6,
     VAR_14, VAR_17, VAR_15);

    }





  VAR_14 = (char *) FUNC_2 (VAR_7 - VAR_10 + 1);
  FUNC_11 (VAR_14, VAR_10, VAR_7 - VAR_10);


  VAR_14[VAR_7 - VAR_10] = '\000';

  *VAR_3 = (*VAR_7 == '\'') ? VAR_7 + 1 : VAR_7;


  VAR_12 = FUNC_10 (VAR_14, 0, VAR_2, 0, &VAR_13);
  if (VAR_12)
    return FUNC_14 (VAR_4, VAR_5, VAR_14, VAR_12,
    ((void*)0), VAR_13);



  FUNC_4 (VAR_6,
     "Can't find member of namespace, class, struct, or union named \"%s\"\n",
     VAR_14);
}
