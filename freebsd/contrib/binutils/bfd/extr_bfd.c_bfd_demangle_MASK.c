
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 char const FUNC_0 (int *) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;

char *
FUNC_7 (bfd *VAR_0, const char *VAR_1, int VAR_2)
{
  char *VAR_3, *VAR_4;
  const char *VAR_5, *VAR_6;
  size_t VAR_7;

  if (VAR_0 != ((void*)0)
      && *VAR_1 != '\0'
      && FUNC_0 (VAR_0) == *VAR_1)
    ++VAR_1;





  VAR_5 = VAR_1;
  while (*VAR_1 == '.' || *VAR_1 == '$')
    ++VAR_1;
  VAR_7 = VAR_1 - VAR_5;


  VAR_4 = ((void*)0);
  VAR_6 = FUNC_5 (VAR_1, '@');
  if (VAR_6 != ((void*)0))
    {
      VAR_4 = FUNC_1 (VAR_6 - VAR_1 + 1);
      if (VAR_4 == ((void*)0))
 return ((void*)0);
      FUNC_4 (VAR_4, VAR_1, VAR_6 - VAR_1);
      VAR_4[VAR_6 - VAR_1] = '\0';
      VAR_1 = VAR_4;
    }

  VAR_3 = FUNC_2 (VAR_1, VAR_2);

  if (VAR_4 != ((void*)0))
    FUNC_3 (VAR_4);

  if (VAR_3 == ((void*)0))
    return ((void*)0);


  if (VAR_7 != 0 || VAR_6 != ((void*)0))
    {
      size_t VAR_8;
      size_t VAR_9;
      char *VAR_10;

      VAR_8 = FUNC_6 (VAR_3);
      if (VAR_6 == ((void*)0))
 VAR_6 = VAR_3 + VAR_8;
      VAR_9 = FUNC_6 (VAR_6) + 1;
      VAR_10 = FUNC_1 (VAR_7 + VAR_8 + VAR_9);
      if (VAR_10 != ((void*)0))
 {
   FUNC_4 (VAR_10, VAR_5, VAR_7);
   FUNC_4 (VAR_10 + VAR_7, VAR_3, VAR_8);
   FUNC_4 (VAR_10 + VAR_7 + VAR_8, VAR_6, VAR_9);
 }
      FUNC_3 (VAR_3);
      VAR_3 = VAR_10;
    }

  return VAR_3;
}
