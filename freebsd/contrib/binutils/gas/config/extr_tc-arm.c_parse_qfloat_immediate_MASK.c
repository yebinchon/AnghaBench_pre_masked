
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int LITTLENUM_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,char,unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (char**,char) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static unsigned
FUNC_5 (char **VAR_4, int *VAR_5)
{
  char *VAR_6 = *VAR_4;
  char *VAR_7;
  LITTLENUM_TYPE VAR_8[VAR_2];
  int VAR_9 = 0;

  FUNC_2 (&VAR_6, '#');






  VAR_7 = VAR_6;
  FUNC_3 (VAR_7);

  if (FUNC_4 (VAR_7, "0x", 2) == 0)
    return VAR_0;
  else
    {
      for (; *VAR_7 != '\0' && *VAR_7 != ' ' && *VAR_7 != '\n'; VAR_7++)
        if (*VAR_7 == '.' || *VAR_7 == 'e' || *VAR_7 == 'E')
          {
            VAR_9 = 1;
            break;
          }

      if (!VAR_9)
        return VAR_0;
    }

  if ((VAR_6 = FUNC_0 (VAR_6, 's', VAR_8)) != ((void*)0))
    {
      unsigned VAR_10 = 0;
      int VAR_11;


      for (VAR_11 = 0; VAR_11 < 32 / VAR_1; VAR_11++)
        {
          VAR_10 <<= VAR_1;
          VAR_10 |= VAR_8[VAR_11];
        }

      if (FUNC_1 (VAR_10) || (VAR_10 & 0x7fffffff) == 0)
        *VAR_5 = VAR_10;
      else
        return VAR_0;

      *VAR_4 = VAR_6;

      return VAR_3;
    }

  return VAR_0;
}
