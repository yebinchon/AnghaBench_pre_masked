
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int * sals; } ;
struct symtab {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct symtabs_and_lines FUNC_1 (char**,struct symtab*,int,char***,struct symtab*,char*) ;
 struct symtabs_and_lines FUNC_2 (char**,int,char***,char*,char*) ;
 struct symtabs_and_lines FUNC_3 (char*,int,struct symtab*,char***,struct symtab*) ;
 struct symtabs_and_lines FUNC_4 (char**) ;
 struct symtabs_and_lines FUNC_5 (char**,int,int *,char***,char*) ;
 struct symtabs_and_lines FUNC_6 (char*,int,char***,struct symtab*,int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct symtab**,int*) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char**,int*) ;
 scalar_t__ FUNC_12 (char*,int ,int ,int ,int *) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int*,char**) ;
 char* FUNC_15 (char*) ;
 char* FUNC_16 (char*,int *,char*) ;
 int * FUNC_17 (int ,char) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct symtabs_and_lines FUNC_18 (int,char***,char*,scalar_t__,int *,int ) ;
 struct symtab* FUNC_19 (char**,char*,int,int*) ;

struct symtabs_and_lines
FUNC_20 (char **VAR_3, int VAR_4, struct symtab *VAR_5,
        int VAR_6, char ***VAR_7, int *VAR_8)
{
  char *VAR_9;
  char *VAR_10;

  struct symtab *VAR_11 = ((void*)0);

  char *VAR_12;


  char *VAR_13;


  int VAR_14;

  int VAR_15;
  int VAR_16 = 0;
  char *VAR_17 = *VAR_3;

  if (VAR_8)
    *VAR_8 = 0;



  FUNC_9 (&VAR_5, &VAR_6);



  if (**VAR_3 == '*')
    return FUNC_4 (VAR_3);






  FUNC_14 (*VAR_3, &VAR_14, &VAR_13);
  VAR_9 = FUNC_11 (VAR_3, &VAR_15);



  if (FUNC_10 (VAR_9))
    {
      VAR_16 = 1;
      VAR_13 = ((void*)0);
    }



  {
    struct symtabs_and_lines VAR_18;
    VAR_18 = FUNC_5 (VAR_3, VAR_4, ((void*)0),
     VAR_7, VAR_17);
    if (VAR_18.sals != ((void*)0))
      return VAR_18;
  }



  if ((VAR_9[0] == ':' || VAR_9[0] == '.') && VAR_13 == ((void*)0))
    {
      if (VAR_14)
 *VAR_3 = *VAR_3 + 1;
      if (VAR_9[0] == '.' || VAR_9[1] == ':')
 return FUNC_2 (VAR_3, VAR_4, VAR_7,
    VAR_17, VAR_9);




      VAR_11 = FUNC_19 (VAR_3, VAR_9, VAR_15,
             VAR_8);
    }
  VAR_10 = *VAR_3;
  if (*VAR_10 == '-' || *VAR_10 == '+')
    VAR_10++;
  while (*VAR_10 >= '0' && *VAR_10 <= '9')
    VAR_10++;

  if (VAR_10 != *VAR_3 && (*VAR_10 == 0 || *VAR_10 == ' ' || *VAR_10 == '\t' || *VAR_10 == ','))

    return FUNC_1 (VAR_3, VAR_5, VAR_6,
         VAR_7, VAR_11, VAR_10);




  if (**VAR_3 == '$')

    VAR_9 = FUNC_15 (*VAR_3 + (((*VAR_3)[1] == '$') ? 2 : 1));
  else if (VAR_14)
    {
      VAR_9 = FUNC_15 (*VAR_3);
      if (VAR_9[-1] != '\'')
 FUNC_7 ("Unmatched single quote.");
    }
  else if (VAR_16)
    {

      VAR_9 = FUNC_16 (*VAR_3, ((void*)0), "");
    }
  else if (VAR_13 != ((void*)0))
    {
      VAR_9 = VAR_13 + 1;
    }
  else
    {
      VAR_9 = FUNC_15 (*VAR_3);
    }

  VAR_12 = (char *) FUNC_0 (VAR_9 - *VAR_3 + 1);
  FUNC_13 (VAR_12, *VAR_3, VAR_9 - *VAR_3);
  VAR_12[VAR_9 - *VAR_3] = '\0';
  if (VAR_9 != *VAR_3
      && VAR_12[0]
      && VAR_12[0] == VAR_12[VAR_9 - *VAR_3 - 1]
      && FUNC_17 (FUNC_8 (), VAR_12[0]) != ((void*)0))
    {
      VAR_12[VAR_9 - *VAR_3 - 1] = '\0';
      VAR_12++;
    }
  while (*VAR_9 == ' ' || *VAR_9 == '\t')
    VAR_9++;
  *VAR_3 = VAR_9;





  if (*VAR_12 == '$')
    return FUNC_3 (VAR_12, VAR_4, VAR_5,
     VAR_7, VAR_11);




  return FUNC_6 (VAR_12, VAR_4, VAR_7,
     VAR_11, VAR_8);
}
