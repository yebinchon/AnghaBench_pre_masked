
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char** VAR_4 ;
 scalar_t__ FUNC_2 (size_t const) ;
 int FUNC_3 (char*,char const*,size_t const) ;
 scalar_t__ FUNC_4 (char**,size_t) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,size_t const) ;

int
FUNC_7 (const char *VAR_5, const char *VAR_6, int VAR_7)
{
  register char **VAR_8 = 0;
  register size_t VAR_9;
  const size_t VAR_10 = FUNC_5 (VAR_5);
  const size_t VAR_11 = FUNC_5 (VAR_6) + 1;

  VAR_1;

  VAR_9 = 0;
  if (VAR_3 != ((void*)0))
    {
      for (VAR_8 = VAR_3; *VAR_8 != ((void*)0); ++VAR_8)
 if (!FUNC_6 (*VAR_8, VAR_5, VAR_10) && (*VAR_8)[VAR_10] == '=')
   break;
 else
   ++VAR_9;
    }

  if (VAR_3 == ((void*)0) || *VAR_8 == ((void*)0))
    {
      char **VAR_12;
      if (VAR_3 == VAR_4 && VAR_3 != ((void*)0))

 VAR_12 = (char **) FUNC_4 (VAR_4,
      (VAR_9 + 2) * sizeof (char *));
      else
 VAR_12 = (char **) FUNC_2 ((VAR_9 + 2) * sizeof (char *));

      if (VAR_12 == ((void*)0))
 {
   VAR_2;
   return -1;
 }

      VAR_12[VAR_9] = (char *) FUNC_2 (VAR_10 + 1 + VAR_11);
      if (VAR_12[VAR_9] == ((void*)0))
 {
   FUNC_1 ((char *) VAR_12);
   FUNC_0 (VAR_0);
   VAR_2;
   return -1;
 }

      if (VAR_3 != VAR_4)
 FUNC_3 ((char *) VAR_12, (char *) VAR_3,
  VAR_9 * sizeof (char *));

      FUNC_3 (VAR_12[VAR_9], VAR_5, VAR_10);
      VAR_12[VAR_9][VAR_10] = '=';
      FUNC_3 (&VAR_12[VAR_9][VAR_10 + 1], VAR_6, VAR_11);

      VAR_12[VAR_9 + 1] = ((void*)0);

      VAR_4 = VAR_3 = VAR_12;
    }
  else if (VAR_7)
    {
      size_t VAR_13 = FUNC_5 (*VAR_8);
      if (VAR_13 + 1 < VAR_10 + 1 + VAR_11)
 {

   char *VAR_14 = (char *) FUNC_2 (VAR_10 + 1 + VAR_11);
   if (VAR_14 == ((void*)0))
     {
       VAR_2;
       return -1;
     }
   *VAR_8 = VAR_14;
 }
      FUNC_3 (*VAR_8, VAR_5, VAR_10);
      (*VAR_8)[VAR_10] = '=';
      FUNC_3 (&(*VAR_8)[VAR_10 + 1], VAR_6, VAR_11);
    }

  VAR_2;

  return 0;
}
