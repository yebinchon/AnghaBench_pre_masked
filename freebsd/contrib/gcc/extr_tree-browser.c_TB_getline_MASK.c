
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,long) ;

__attribute__((used)) static long
FUNC_3 (char **VAR_4, long *VAR_5, FILE *VAR_6)
{
  char *VAR_7, *VAR_8;
  long VAR_9, VAR_10;

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
    {
      VAR_3 = VAR_0;
      return -1;
    }

  if (FUNC_0 (VAR_6))
    return -1;


  if (*VAR_4 == ((void*)0) || *VAR_5 < 2)
    {



      VAR_7 = (char *) FUNC_2 (*VAR_4, 256);
      if (VAR_7 == ((void*)0))
        return -1;
      *VAR_4 = VAR_7;
      *VAR_5 = 256;
    }

  VAR_7 = *VAR_4;
  VAR_9 = *VAR_5;

  VAR_10 = VAR_9;
  VAR_8 = VAR_7;

  while (1)
    {
      long VAR_11;

      while (--VAR_10 > 0)
        {
          register int VAR_12 = FUNC_1 (VAR_6);
          if (VAR_12 == VAR_1)
            goto lose;
          else if ((*VAR_8++ = VAR_12) == '\n')
            goto win;
        }


      VAR_11 = VAR_8 - VAR_7;
      VAR_9 *= 2;
      VAR_7 = (char *) FUNC_2 (VAR_7, VAR_9);
      if (VAR_7 == ((void*)0))
        goto lose;
      *VAR_4 = VAR_7;
      *VAR_5 = VAR_9;
      VAR_8 = VAR_7 + VAR_11;
      VAR_10 = VAR_9 - VAR_11;
    }

 lose:
  if (VAR_8 == *VAR_4)
    return -1;


 win:




  *VAR_8 = '\0';
  return VAR_8 - *VAR_4;
}
